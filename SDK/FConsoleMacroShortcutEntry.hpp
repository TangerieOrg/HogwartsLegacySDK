#pragma once
#include <cstdint>
#include "FConsoleMacroShortcutEntryNameBase.hpp"
#pragma pack(push, 1)
struct FConsoleMacroShortcutEntry : public FConsoleMacroShortcutEntryNameBase {
    FName Name; // 0x30
    bool bUseName; // 0x38
    char pad_39[0x7];
}; // Size: 0x40
#pragma pack(pop)
