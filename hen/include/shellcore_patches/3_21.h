#pragma once
#include "common.h"

// untested
struct patch g_shellcore_patches_321[] = {
    { /* xor eax, eax; nop; nop; nop */ 0x25CBC3, "\x31\xC0\x90\x90\x90", 5 },
    { /* xor eax, eax; nop; nop; nop */ 0x25CC0C, "\x31\xC0\x90\x90\x90", 5 },
    { /* xor eax, eax; nop; nop; nop */ 0x25CC80, "\x31\xC0\x90\x90\x90", 5 },
    { /* xor eax, eax; nop; nop; nop */ 0xACE363, "\x31\xC0\x90\x90\x90", 5 },
    { /* xor eax, eax; nop; nop; nop */ 0xACE3AC, "\x31\xC0\x90\x90\x90", 5 },
    { /* xor eax, eax; nop; nop; nop */ 0xACE420, "\x31\xC0\x90\x90\x90", 5 },
    { /* xor eax, eax; nop; nop; nop */ 0xB5FC12, "\x31\xC0\x90\x90\x90", 5 },
    { /* xor eax, eax; nop; nop; nop */ 0xDA8953, "\x31\xC0\x90\x90\x90", 5 },
    { /* xor eax, eax; nop; nop; nop */ 0xDA899C, "\x31\xC0\x90\x90\x90", 5 },
    { /* xor eax, eax; nop; nop; nop */ 0xDA8A10, "\x31\xC0\x90\x90\x90", 5 },
    { /* longjmp */ 0x4F50F1, "\x90\xE9", 2 },
    { /* strfree */ 0x15053D5, "\x66\x72\x65\x65", 4 },
    { /* xor eax, eax; inc eax; nop */ 0x4221C2, "\x31\xC0\xFF\xC0\x90", 5 },
    { /* xor eax, eax; inc eax; nop */ 0x4221FD, "\x31\xC0\xFF\xC0\x90", 5 },
    { /* xor eax, eax; inc eax; nop */ 0x42263B, "\x31\xC0\xFF\xC0\x90", 5 },
    { /* xor eax, eax; inc eax; ret */ 0x545950, "\x31\xC0\xFF\xC0\xC3", 5 },
    { /* PS4 Disc Installer Patch 1 */ 0x25293B, "\x90\xE9", 2 },
    { /* PS5 Disc Installer Patch 1 */ 0x2529B8, "\x90\xE9", 2 },
    { /* PS4 PKG Installer Patch 1 */ 0x252ABB, "\xEB", 1 },
    { /* PS5 PKG Installer Patch 1 */ 0x252B8F, "\xEB", 1 },
    { /* PS4 PKG Installer Patch 2 */ 0x253025, "\x90\xE9", 2 },
    { /* PS5 PKG Installer Patch 2 */ 0x253210, "\x90\xE9", 2 },
    { /* PS4 PKG Installer Patch 3 */ 0x2535D5, "\x90\xE9", 2 },
    { /* PS5 PKG Installer Patch 3 */ 0x253672, "\x90\xE9", 2 },
    { /* PS4 PKG Installer Patch 4 */ 0x4DF207, "\xEB", 1 },
    { /* PS5 PKG Installer Patch 4 */ 0x4DF31C, "\xEB", 1 },
    { /* PKG Installer Patch */ 0x4E11E0, "\x48\x31\xC0\xC3", 4 },
};

