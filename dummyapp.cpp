#include <iostream>
#include <Windows.h>
#include <winspool.h>

int wmain()
{
    DWORD length = 0;
    GetDefaultPrinter(nullptr, &length);
    if (length != 0)
    {
        wchar_t* buffer = new wchar_t[length];
        if (!GetDefaultPrinter(buffer, &length))
        {   
            std::cout << "Error!" << std::endl;
        }
        std::wcout << std::wstring(buffer) << std::endl;
    }
}