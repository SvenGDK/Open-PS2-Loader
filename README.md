# Open PS2 Loader

Copyright 2013, Ifcaro & jimmikaelkael  
Licenced under Academic Free License version 3.0  
Review LICENSE file for further details.  

[![CI](https://github.com/ifcaro/Open-PS2-Loader/workflows/CI/badge.svg)](https://github.com/ifcaro/Open-PS2-Loader/actions?query=workflow%3ACI)

Forked from https://github.com/ps2homebrew/Open-PS2-Loader v1.0.0 source code.

This source code and ELF of v1.0.0 include OPL-Launcher support.

## Introduction

Open PS2 Loader (OPL) is a 100% Open source game and application loader for
the PS2 and PS3 units. It supports three categories of devices : USB mass
storage devices, SMB shares and the PlayStation 2 HDD unit. USB devices and
SMB shares support USBExtreme and \*.ISO formats while PS2 HDD supports HDLoader
format. It's now the most compatible homebrew loader.  

OPL is also developed continuously - anyone can contribute improvements to
the project due to its open source nature.  

You can visit the Open PS2 Loader forum at:  

http://psx-scene.com/forums/official-open-ps2-loader-forum/ 

https://www.psx-place.com/forums/open-ps2-loader-opl.77/

You can report compatibility game problems at:

https://www.psx-place.com/threads/open-ps2-loader-game-bug-reports.19401/

For updated compatibility list, you can visit OPL-CL site at:  

http://sx.sytes.net/oplcl/games.aspx  

## Release types

Open PS2 Loader bundle included several types of the same OPL version. These
types come with more or less features included.  

| Type (can be a combination) | Description                                                                                    |
| --------------------------- | ---------------------------------------------------------------------------------------------- |
| "Release"                   | Regular OPL release with GSM, IGS, PADEMU, VMC, PS2RD Cheat Engine & Parental Controls.        |
| "DTL_T10000"                | OPL for TOOLs (DevKit PS2)                                                                     |
| "IGS"                       | OPL with InGame Screenshot feature.                                                            |
| "PADEMU"                    | OPL with Pad Emulation for DS3 & DS4.                                                          |
| "RTL"                       | OPL with right to left language suppport.                                                      |

## How to use

OPL uses the following directory tree structure across HDD, SMB, and
USB modes:  

| Folder | Description | Modes |
| ------ | ----------- | ----- |
| "CD" | for games on CD media - i.e. blue-bottom discs | USB and SMB |
| "DVD" | for DVD5 and DVD9 images if using the NTFS file system on USB or SMB ; DVD9 images must be split and placed into the device root if using the FAT32 file system on USB or SMB | USB and SMB |
| "VMC" | for Virtual Memory Card images - from 8MB up to 64MB | all |
| "CFG" | for saving per-game configuration files | all |
| "ART" | for game art images | all |
| "THM" | for themes support | all |
| "LNG" | for translation support | all |
| "CHT" | for cheats files | all |
| "CFG-DEV" | for saving per-game configuration files, when used from a OPL dev build - aka beta build | all |

OPL will automatically create the above directory structure the first time
you launch it and enable your favourite device. For HDD users, a 128Mb +OPL
partition will be created (you can enlarge it using uLaunchELF if you need to).  

## USB

Game files on USB must be perfectly defragmented either file by file or
by whole drive, and Dual Layer DVD9 images must be split to avoid the 4GB
limitations of the FAT32 file system. We recommend Auslogics Disk Defrag
for best defragging results.  

http://www.auslogics.com/en/software/disk-defrag/  

You also need a PC program to convert or split games into USB Advance/Extreme
format, such as USBUtil 2.0.  

## SMB

For loading games by SMB protocol you need to share a folder (ex: PS2SMB)
on the host machine or NAS device and make sure that it has full read and
write permissions. USB Advance/Extreme format is optional - \*.ISO images
are supported using the folder structure above with the added bonus that
DVD9 images don't have to be split if your SMB device uses the NTFS or
EXT3/4 file system.  

## HDD

For PS2, 48-bit LBA internal HDDs up to 2TB are supported. They have to be
formatted with either HDLoader or uLaunchELF (uLaunchELF is recommended).  

To launch OPL, you can use any of the existing methods for loading an
executable elf.  

## PS3

On PS3, you need an original SwapMagic 3.6+ or 3.8 disc (at the moment
there aren't any other options). The steps for loading OPL on a PS3 are:  

1. Rename OPNPS2LD.ELF to SMBOOT0.ELF
2. Make a folder in root of USB device called SWAPMAGIC and copy SMBOOT0.ELF to it.
3. Launch SwapMagic in PS3 and press UP+L1 then Open PS2 Loader should start.

There are 4 forms for launching elfs in SwapMagic.  

SMBOOT0.ELF = UP + L1  
SMBOOT1.ELF = UP + L2  
SMBOOT2.ELF = UP + R1  
SMBOOT3.ELF = UP + R2  

Note: on PS3, only USB and SMB modes are supported.  

## Some notes for devs

Open PS2 Loader needs the latest PS2SDK:  

https://github.com/ps2dev/ps2sdk
