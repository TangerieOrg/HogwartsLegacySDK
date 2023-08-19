#pragma once
#include <cstdint>
#include "FConsoleMacroShortcutEntryNameBase.hpp"
#pragma pack(push, 1)
struct FConsoleMacroShortcutEntryNameRequired : public FConsoleMacroShortcutEntryNameBase {
    FName Name; // 0x30
}; // Size: 0x38
#pragma pack(pop)
