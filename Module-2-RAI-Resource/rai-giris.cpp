/*  What is RAII?
*   Resource Acquisition is initialization
*  
*   Meaning:
*   A resource is acquired during object contruction
*   The resource is released during object destruction
*   
*   What is a resource?
*   Heap memory (new / delete)
*   File handles
*   Sockets
*   Mutex locks
*   Threads
*   GPU resources
*   Hardware interfaces (dma etc.)
*
*   Why RAII?
*   Manual resource management leads to bugs:
*   Forgetting delete
*   Forgetting close
*   Memory leaks
*   Double free
*   Resource leak after exceptions
*/

// Example 1
void func()
{
    int* ptr = new int(42);

    throw std::runtime_error("Error occurred");

    delete ptr; // never reached, caused leak
}

// RAII Solution
#include <memory>

void func()
{
    std::unique_ptr<int> ptr = std::make_unique<int>(42);

    throw std::runtime_error("Error occurred");
}

// RAII Example 2
#include <cstdio>
#include <stdexcept>

class FileWrapper
{
public:
    FileWrapper(const char* filename, const char* mode)
    {
        file_ = fopen(filename, mode);
        if (!file_)
        {
            throw std::runtime_error("Failed to open file");
        }
    }

    ~FileWrapper()
    {
        if (file_)
        {
            fclose(file_);
        }
    }

    FILE* get() const { return file_; }

private:
    FILE* file_{nullptr};
};

void writeData()
{
    FileWrapper file("data.txt", "w");
    fprintf(file.get(), "Hello RAII\n");
}

