#pragma once
#include <cstdint>
class UDialogueVoice;
#pragma pack(push, 1)
struct FDialogueContext {
    UDialogueVoice* Speaker; // 0x0
    TArray<UDialogueVoice*> Targets; // 0x8
}; // Size: 0x18
#pragma pack(pop)
