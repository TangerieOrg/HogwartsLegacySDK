#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FDialogueLineReference {
    FName EventID; // 0x0
    FName DialogueLineID; // 0x8
}; // Size: 0x10
#pragma pack(pop)
