/* -------------------------------------------

	Copyright ELMH Group.

	Purpose: DDK Text I/O.

------------------------------------------- */

#pragma once

#include <DDKKit/str.h>

/// @brief print character into UART.
DK_EXTERN void KernelPrintChar(const char ch);

/// @brief print string to UART.
/// @param message string to transmit to UART.
DK_EXTERN void KernelPrintStr(const char* message);