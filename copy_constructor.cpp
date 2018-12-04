/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <string.h>
using namespace std;
class MyString
{
private:
    char* buffer;
    
public:
    MyString(const char* initString) // constructor
    {
        buffer = NULL;
        cout<<"Default constructor: creating new MyString"<<endl;
        if(initString != NULL)
        {
            buffer = new char[strlen(initString)+1];
            strcpy(buffer, initString);
            cout<<"buffer points to: "<<hex;
            cout<<(unsigned int*)buffer<<endl;
        }
    }
    
    MyString(const MyString& copySource)  // Copy constructor
    {
        buffer = NULL;
        cout<<"Copy constructor: copying from MyString"<<endl;
        if(copySource.buffer != NULL)
        {
            // allocate own buffer
            buffer = new char[strlen(copySource.buffer)+1];
            
            // deep copy from the source into local buffer
            strcpy(buffer, copySource.buffer);
            
            cout<<"buffer points to: "<<hex;
            cout<<(unsigned int*)buffer<<endl;
        }
    }
    
    // Destructor
    ~MyString()
    {
        cout<<"Invoking destructor, clearning up"<<endl;
        delete[] buffer;
    }
    
    int GetLength()
    {
        return strlen(buffer);
    }
    
    const char* GetString()
    {
        return buffer;
    }
};

void UseMyString(MyString str)
{
    cout<<"String buffer in MyString is "<<str.GetLength();
    cout<<"characters long"<<endl;
    
    cout<<"buffer contains: "<<str.GetString()<<endl;
    return;
}

int main()
{
    MyString sayHello("Hello from String Class");
    UseMyString(sayHello);

    return 0;
}




