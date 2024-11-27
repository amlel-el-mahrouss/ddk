/* -------------------------------------------

	Copyright ELMH Group.

	Purpose: DDK C++ runtime.

------------------------------------------- */

#include <DDKKit/ddk.h>

void* operator new(size_t sz)
{
	return KernelAlloc(sz);
}

void operator delete(void* ptr)
{
	KernelFree(ptr);
}

void* operator new[](size_t sz)
{
	return KernelAlloc(sz);
}

void operator delete[](void* ptr)
{
	KernelFree(ptr);
}
