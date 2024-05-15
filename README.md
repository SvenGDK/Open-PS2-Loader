# Open PS2 Loader

Copyright © 2013-2022, Ifcaro & jimmikaelkael.
Licenced under AFL v3.0 - Review the LICENSE file for further details.

This is a modified version of Open PS2 Loader [v1.0.0](https://github.com/ps2homebrew/Open-PS2-Loader/tree/v1.0.0).</br>
Created for the PSX DVR (DESR) consoles that have issues booting games from internal HDD using [OPL-Launcher](https://github.com/ps2homebrew/OPL-Launcher).

This updated and modified version includes:
- OPL-Launcher support
- HDL & NBD server support
- Controller Settings Menu
- Gamepad Macros (Modification of Gamepads - Requires PADEMU variant)
- OSD Language Configuration Menu
- Apps Menu
- Expanded SMB Ports
- Allows usage of other partitions than +OPL
- Various fixes + updates from the stable v1.1.0 Release + v1.2.0 Beta

Thanks to ackmax, AKuHAK, bignaux, israpps, KrahJohlito, uyjulian, ... !

<details>
  <summary> <b> Releases </b> </summary>
<p>

When you download and extract the latest Open PS2 Loader from this repo, you will receive 5 variants:

| Variant | File Name | Description |
| --------- | ----------- | ----------- |
| `Release` | OPNPS2LD.ELF | Regular OPL release with GSM. |
| `ALL` | OPNPS2LD-ALL.ELF | OPL with GSM and all the features below. |
| `IGS` | OPNPS2LD-IGS.ELF | OPL with In-Game Screenshot feature. |
| `PADEMU` | OPNPS2LD-PADEMU.ELF | OPL with Pad emulation for DS3 & DS4. |
| `RTL` | OPNPS2LD-RTL.ELF | OPL with the right to left language support. |

- You can also compile you own variant, see "How to compile this version".

</p>
</details>

<details>
  <summary> <b> USB Support </b> </summary>
<p>

- USB drives must be formatted in FAT32 (MBR)
- You can format large drives in FAT32 with http://ridgecrop.co.uk/index.htm?guiformat.htm
- USBUtil is the recommended tool to install a game on USB drives, it can split games over 4GB. </br> You can get it here: https://www.psx-place.com/threads/usbutil-by-iseko.19048/

</p>
</details>

<details>
  <summary> <b> How to use the NBD server </b> </summary>
<p>

- To connect to the NBD server you will first need an NBD client and driver on your PC.
- The Ceph MSI installer bundles a signed version of the WNBD driver. </br> It can be downloaded from here: https://cloudbase.it/ceph-for-windows/
- Install the client and reboot.
- Open CMD as administrator and run: </br> ```wnbd-client.exe map hdd1 SERVER_IP``` <- Shown in OPL when NBD server started.
- You can now install games with hdl_dump like: </br> ```hdl_dump inject_dvd hdd1: "GAME_TITLE" "ISO_FILE" "BLUS_123.45" *u4```
  - This process can take up to 1-2 hours depending on game size.
- If you want to disconnect from the NBD server, open a Command Prompt as administrator and run: </br> ```wnbd-client.exe unmap hdd1```

</p>
</details>

<details>
  <summary> <b> How to compile this version </b> </summary>
<p>

- Use [ps2dev v1.2.0](https://github.com/ps2dev/ps2dev/releases/tag/v1.2.0)
- Add following code to $PS2SDK/common/include/usbhdfsd-common.h

```
/** Check if fragments exist */
#define USBMASS_IOCTL_CHECK_CHAIN    0x0004
/** Return fragment table **/
#define USBMASS_IOCTL_GET_FRAGLIST   0x0005
/** Get the device number for the block device backing the mass partition */
#define USBMASS_IOCTL_GET_DEVICE_NUMBER     0x0006
```

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
