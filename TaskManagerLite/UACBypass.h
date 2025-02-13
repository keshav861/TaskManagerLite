#pragma once

#pragma warning(disable: 4005) // macro redefinition
#pragma warning(disable: 4055) // %s : from data pointer %s to function pointer %s
#pragma warning(disable: 4152) // nonstandard extension, function/data pointer conversion in expression
#pragma warning(disable: 4201) // nonstandard extension used : nameless struct/union
#pragma warning(disable: 6102) // Using %s from failed function call at line %u
#pragma warning(disable: 6258) // Using TerminateThread does not allow proper thread clean up
#pragma warning(disable: 6320) // exception-filter expression is the constant EXCEPTION_EXECUTE_HANDLER
#pragma warning(disable: 6255 6263)  // alloca
#define _CRT_SECURE_NO_WARNINGS

#include <Windows.h>
#include <ntstatus.h>
#include <CommCtrl.h>
#include <shlobj.h>
#include <AccCtrl.h>
#include <tchar.h>


extern void Bypass();
extern BOOL IsElevated();
#pragma comment(lib, "Version.lib")
//#pragma comment(linker,"/manifestdependency:\"type='win32' name='Microsoft.Windows.Common-Controls' version='6.0.0.0' processorArchitecture='*' publicKeyToken='6595b64144ccf1df' language='*'\"")
extern BOOL GetOSVersion();
extern BOOL BypassForFile(TCHAR* szPath);