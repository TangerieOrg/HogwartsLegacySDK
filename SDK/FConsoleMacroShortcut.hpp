#pragma once
#include <cstdint>
#include "FConsoleMacroCommandBase.hpp"
#pragma pack(push, 1)
struct FConsoleMacroShortcut : public FConsoleMacroCommandBase {
    FName BaseName; // 0x10
    FName Command; // 0x18
    FName Value; // 0x20
    FName RestoreValue; // 0x28
    uint8_t bNoQuery : 1; // 0x30
    uint8_t pad_bitfield_30_1 : 7;
    char pad_31[0x7];
}; // Size: 0x38
#pragma pack(pop)
