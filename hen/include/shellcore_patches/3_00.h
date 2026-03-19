#pragma once
#include "common.h"

// untested
struct patch g_shellcore_patches_300[] = {
    { /* xor eax, eax; nop; nop; nop */ 0x25CAD3, "\x31\xC0\x90\x90\x90", 5 },
    { /* xor eax, eax; nop; nop; nop */ 0x25CB1C, "\x31\xC0\x90\x90\x90", 5 },
    { /* xor eax, eax; nop; nop; nop */ 0x25CB90, "\x31\xC0\x90\x90\x90", 5 },
    { /* xor eax, eax; nop; nop; nop */ 0xACDFF3, "\x31\xC0\x90\x90\x90", 5 },
    { /* xor eax, eax; nop; nop; nop */ 0xACE03C, "\x31\xC0\x90\x90\x90", 5 },
    { /* xor eax, eax; nop; nop; nop */ 0xACE0B0, "\x31\xC0\x90\x90\x90", 5 },
    { /* xor eax, eax; nop; nop; nop */ 0xB5F8B2, "\x31\xC0\x90\x90\x90", 5 },
    { /* xor eax, eax; nop; nop; nop */ 0xDA85F3, "\x31\xC0\x90\x90\x90", 5 },
    { /* xor eax, eax; nop; nop; nop */ 0xDA863C, "\x31\xC0\x90\x90\x90", 5 },
    { /* xor eax, eax; nop; nop; nop */ 0xDA86B0, "\x31\xC0\x90\x90\x90", 5 },
    { /* longjmp */ 0x4F4E21, "\x90\xE9", 2 },
    { /* strfree */ 0x1504BE6, "\x66\x72\x65\x65", 4 },
    { /* xor eax, eax; inc eax; nop */ 0x421FC3, "\x31\xC0\xFF\xC0\x90", 5 },
    { /* xor eax, eax; inc eax; nop */ 0x422004, "\x31\xC0\xFF\xC0\x90", 5 },
    { /* xor eax, eax; inc eax; nop */ 0x42243B, "\x31\xC0\xFF\xC0\x90", 5 },
    { /* xor eax, eax; inc eax; ret */ 0x545660, "\x31\xC0\xFF\xC0\xC3", 5 },
    { /* PS4 Disc Installer Patch 1 */ 0x25284B, "\x90\xE9", 2 },
    { /* PS5 Disc Installer Patch 1 */ 0x2528C8, "\x90\xE9", 2 },
    { /* PS4 PKG Installer Patch 1 */ 0x2529CB, "\xEB", 1 },
    { /* PS5 PKG Installer Patch 1 */ 0x252A9F, "\xEB", 1 },
    { /* PS4 PKG Installer Patch 2 */ 0x252F35, "\x90\xE9", 2 },
    { /* PS5 PKG Installer Patch 2 */ 0x253120, "\x90\xE9", 2 },
    { /* PS4 PKG Installer Patch 3 */ 0x2534E5, "\x90\xE9", 2 },
    { /* PS5 PKG Installer Patch 3 */ 0x253582, "\x90\xE9", 2 },
    { /* PS4 PKG Installer Patch 4 */ 0x4DEF37, "\xEB", 1 },
    { /* PS5 PKG Installer Patch 4 */ 0x4DF04C, "\xEB", 1 },
    { /* PKG Installer Patch */ 0x4E0F10, "\x48\x31\xC0\xC3", 4 },
};

