#define _CRT_SECURE_NO_WARNINGS

#include <Windows.h>
#include <Strsafe.h>

static HMODULE hDll = 0;
extern void Init(HMODULE);

BOOL APIENTRY DllMain(
	HMODULE hmodule,
	UINT32 reason,
	void* res)
{
	(void)res;

	switch (reason)
	{
	case DLL_PROCESS_ATTACH:
		{
			char path[MAX_PATH+1];
			GetModuleFileNameA(hmodule, path, MAX_PATH);
			strcat(path, "_");
			hDll = LoadLibraryA(path);
			if (hDll)
				Init(hDll);
		}
		break;

	case DLL_PROCESS_DETACH:
		if (hDll) {
			FreeLibrary(hDll);
		}
	}

	return 1;
}
