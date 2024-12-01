<!-- README of ZKA DDK 1 -->

![ZKA](res/zka.svg)

# ZKA DDK (Mark 1)

Use this to write drivers for ZKA.

## Installation:

- MinGW/GCC for the Kernel and bootloader.
- Netwide Assembler/NDK to output COFF object code.

### Start by cloning the DDK:

```
git clone git@github.com:ELMH-Group/ddk.git
cd ddk
```

### And then select the makefile to execute:

```
cd dev/DDKKit
btb ddk.json
```

###### Copyright ELMH Group. All rights reserved.
