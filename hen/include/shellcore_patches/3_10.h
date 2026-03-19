#pragma once
#include "common.h"

// untested
struct patch g_shellcore_patches_310[] = {
    { /* xor eax, eax; nop; nop; nop */ 0x25CB13, "\x31\xC0\x90\x90\x90", 5 },
    { /* xor eax, eax; nop; nop; nop */ 0x25CB5C, "\x31\xC0\x90\x90\x90", 5 },
    { /* xor eax, eax; nop; nop; nop */ 0x25CBD0, "\x31\xC0\x90\x90\x90", 5 },
    { /* xor eax, eax; nop; nop; nop */ 0xACE033, "\x31\xC0\x90\x90\x90", 5 },
    { /* xor eax, eax; nop; nop; nop */ 0xACE07C, "\x31\xC0\x90\x90\x90", 5 },
    { /* xor eax, eax; nop; nop; nop */ 0xACE0F0, "\x31\xC0\x90\x90\x90", 5 },
    { /* xor eax, eax; nop; nop; nop */ 0xB5F8F2, "\x31\xC0\x90\x90\x90", 5 },
    { /* xor eax, eax; nop; nop; nop */ 0xDA8633, "\x31\xC0\x90\x90\x90", 5 },
    { /* xor eax, eax; nop; nop; nop */ 0xDA867C, "\x31\xC0\x90\x90\x90", 5 },
    { /* xor eax, eax; nop; nop; nop */ 0xDA86F0, "\x31\xC0\x90\x90\x90", 5 },
    { /* longjmp */ 0x4F4E61, "\x90\xE9", 2 },
    { /* strfree */ 0x1504DDE, "\x66\x72\x65\x65", 4 },
    { /* xor eax, eax; inc eax; nop */ 0x422003, "\x31\xC0\xFF\xC0\x90", 5 },
    { /* xor eax, eax; inc eax; nop */ 0x422044, "\x31\xC0\xFF\xC0\x90", 5 },
    { /* xor eax, eax; inc eax; nop */ 0x42247B, "\x31\xC0\xFF\xC0\x90", 5 },
    { /* xor eax, eax; inc eax; ret */ 0x5456A0, "\x31\xC0\xFF\xC0\xC3", 5 },
    { /* PS4 Disc Installer Patch 1 */ 0x25288B, "\x90\xE9", 2 },
    { /* PS5 Disc Installer Patch 1 */ 0x252908, "\x90\xE9", 2 },
    { /* PS4 PKG Installer Patch 1 */ 0x252A0B, "\xEB", 1 },
    { /* PS5 PKG Installer Patch 1 */ 0x252ADF, "\xEB", 1 },
    { /* PS4 PKG Installer Patch 2 */ 0x252F75, "\x90\xE9", 2 },
    { /* PS5 PKG Installer Patch 2 */ 0x253160, "\x90\xE9", 2 },
    { /* PS4 PKG Installer Patch 3 */ 0x253525, "\x90\xE9", 2 },
    { /* PS5 PKG Installer Patch 3 */ 0x2535C2, "\x90\xE9", 2 },
    { /* PS4 PKG Installer Patch 4 */ 0x4DEF77, "\xEB", 1 },
    { /* PS5 PKG Installer Patch 4 */ 0x4DF08C, "\xEB", 1 },
    { /* PKG Installer Patch */ 0x4E0F50, "\x48\x31\xC0\xC3", 4 },
};

