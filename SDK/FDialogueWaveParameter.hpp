#pragma once
#include <cstdint>
#include "FDialogueContext.hpp"
class UDialogueWave;
#pragma pack(push, 1)
struct FDialogueWaveParameter {
    UDialogueWave* DialogueWave; // 0x0
    FDialogueContext Context; // 0x8
}; // Size: 0x20
#pragma pack(pop)
