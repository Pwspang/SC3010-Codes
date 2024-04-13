#include <windows.h>
#pragma comment(lib, "user32.lib");

BOOL WINAPI DllMain (HANDLE hDll, DWORD dwReason, LPVOID LpReserved) {
    switch(dwReason) {
        case DLL_PROCESS_ATTACH:
            MessageBoxW(NULL, L"You Have Been Pwned", L"SC3010", MB_ICONEXCLAMATION | MB_OK);
        break;
    }

    return TRUE;
}