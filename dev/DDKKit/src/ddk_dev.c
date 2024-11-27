/* -------------------------------------------

	Copyright ELMH Group.

	Purpose: DDK Text I/O.

------------------------------------------- */

#include <DDKKit/dev.h>
#include <DDKKit/str.h>

/// @brief Open a new binary device from path.
DK_EXTERN KERNEL_DEVICE_PTR KernelOpenDevice(const char* devicePath)
{
	if (!devicePath)
		return nil;

	return KernelCall("ZkOpenDevice", 1, (void*)devicePath, KernelStringLength(devicePath));
}

/// @brief Close any device.
/// @param device valid device.
DK_EXTERN void KernelCloseDevice(KERNEL_DEVICE_PTR device)
{
	if (!device)
		return;

	KernelCall("ZkCloseDevice", 1, device, sizeof(KERNEL_DEVICE));
}
