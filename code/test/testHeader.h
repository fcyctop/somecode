#pragma once

#define __DLL_EXPORTS__

#ifdef __DLL_EXPORTS__
#define DLLAPI __declspec(dllexport)
#else
#define DLLAPI __declspec(dllimport)
#endif // __DLL_EXPORTS__

DLLAPI void HelloWorld();
