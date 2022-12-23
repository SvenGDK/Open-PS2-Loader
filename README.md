# Open PS2 Loader

Copyright © 2013-2022, Ifcaro & jimmikaelkael.
Licenced under AFL v3.0 - Review the LICENSE file for further details.

Forked from https://github.com/ps2homebrew/Open-PS2-Loader v1.0.0 source code.

This updated version includes:
- OPL-Launcher support
- HDL & NBD server support
- Controller Settings Menu
- Gamepad Macros (Modification of Gamepads - Requires PADEMU)
- OSD Language Configuration Menu
- Apps Menu
- Expanded SMB Ports
- Various fixes + updates from the stable v1.1.0 Release + v1.2.0 Beta.

Thanks to bignaux, ackmax, israpps, uyjulian, AKuHAK, ...!

<details>
  <summary> <b> How to compile this version: </b> </summary>
<p>

- Requires setup of old PS2SDK
- Add usbd_mini.irx from newer SDK to /usr/local/ps2dev/ps2sdk/iop/irx

#### Compile all variants
```make all-variants```
#### Compile with Right-To-Left (RTL) language support
```make RTL=1```
#### Compile with In Game Screenshot (IGS)
```make IGS=1```
#### Compile with Pad Emulator (PADEMU)
```make PADEMU=1```
#### Compile and compress elf with ps2-packer
```make NOT_PACKED=0```
#### Compile uncompressed elf
```make```

</p>
</details>
