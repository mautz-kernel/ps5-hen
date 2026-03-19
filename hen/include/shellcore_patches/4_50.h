#pragma once
#include "common.h"

// untested
struct patch g_shellcore_patches_450[] = {
    { /* xor eax, eax; nop; nop; nop */ 0x273915, "\x31\xC0\x90\x90\x90", 5 },
    { /* xor eax, eax; nop; nop; nop */ 0x27395C, "\x31\xC0\x90\x90\x90", 5 },
    { /* xor eax, eax; nop; nop; nop */ 0x2739CE, "\x31\xC0\x90\x90\x90", 5 },
    { /* xor eax, eax; nop; nop; nop */ 0xA75965, "\x31\xC0\x90\x90\x90", 5 },
    { /* xor eax, eax; nop; nop; nop */ 0xA759AC, "\x31\xC0\x90\x90\x90", 5 },
    { /* xor eax, eax; nop; nop; nop */ 0xA75A1E, "\x31\xC0\x90\x90\x90", 5 },
    { /* xor eax, eax; nop; nop; nop */ 0xB056F2, "\x31\xC0\x90\x90\x90", 5 },
    { /* xor eax, eax; nop; nop; nop */ 0xD726D5, "\x31\xC0\x90\x90\x90", 5 },
    { /* xor eax, eax; nop; nop; nop */ 0xD7271C, "\x31\xC0\x90\x90\x90", 5 },
    { /* xor eax, eax; nop; nop; nop */ 0xD72793, "\x31\xC0\x90\x90\x90", 5 },
    { /* longjmp */ 0x5488F1, "\x90\xE9", 2 },
    { /* strfree */ 0x17AC107, "\x66\x72\x65\x65", 4 },
    { /* xor eax, eax; inc eax; nop */ 0x46742A, "\x31\xC0\xFF\xC0\x90", 5 },
    { /* xor eax, eax; inc eax; nop */ 0x467472, "\x31\xC0\xFF\xC0\x90", 5 },
    { /* xor eax, eax; inc eax; nop */ 0x467AC7, "\x31\xC0\xFF\xC0\x90", 5 },
    { /* xor eax, eax; inc eax; ret */ 0x597160, "\x31\xC0\xFF\xC0\xC3", 5 },
    { /* PS4 Disc Installer Patch 1 */ 0x2684EB, "\x90\xE9", 2 },
    { /* PS5 Disc Installer Patch 1 */ 0x268582, "\x90\xE9", 2 },
    { /* PS4 PKG Installer Patch 1 */ 0x26869B, "\xEB", 1 },
    { /* PS5 PKG Installer Patch 1 */ 0x26876F, "\xEB", 1 },
    { /* PS4 PKG Installer Patch 2 */ 0x268BD8, "\x90\xE9", 2 },
    { /* PS5 PKG Installer Patch 2 */ 0x268DA9, "\x90\xE9", 2 },
    { /* PS4 PKG Installer Patch 3 */ 0x269175, "\x90\xE9", 2 },
    { /* PS5 PKG Installer Patch 3 */ 0x269212, "\x90\xE9", 2 },
    { /* PS4 PKG Installer Patch 4 */ 0x533137, "\xEB", 1 },
    { /* PS5 PKG Installer Patch 4 */ 0x53324C, "\xEB", 1 },
    { /* PKG Installer Patch */ 0x535160, "\x48\x31\xC0\xC3", 4 },
};

