#pragma once
#include <cstdint>
#include "EConsoleMacroCommandScope.hpp"
#pragma pack(push, 1)
struct FConsoleMacroShortcutEntryNameBase {
    char pad_0[0x8];
    FName Command; // 0x8
    FName Value; // 0x10
    FName RestoreValue; // 0x18
    FName AutoRestoreValue; // 0x20
    EConsoleMacroCommandScope Scope; // 0x28
    uint8_t bNoQuery : 1; // 0x29
    uint8_t bAutoRestoreValue : 1; // 0x29
    uint8_t pad_bitfield_29_2 : 6;
    char pad_2a[0x6];
}; // Size: 0x30
#pragma pack(pop)
