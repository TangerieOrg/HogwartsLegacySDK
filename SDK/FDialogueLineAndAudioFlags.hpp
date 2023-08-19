#pragma once
#include <cstdint>
#include "FAudioDialogueFlags.hpp"
#include "FDialogueLineReference.hpp"
#pragma pack(push, 1)
struct FDialogueLineAndAudioFlags {
    FDialogueLineReference DialogueLineReference; // 0x0
    FAudioDialogueFlags AudioDialogueFlags; // 0x10
    char pad_17[0x1];
}; // Size: 0x18
#pragma pack(pop)
