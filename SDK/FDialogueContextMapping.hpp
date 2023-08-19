#pragma once
#include <cstdint>
#include "FDialogueContext.hpp"
class USoundWave;
class UDialogueSoundWaveProxy;
#pragma pack(push, 1)
struct FDialogueContextMapping {
    FDialogueContext Context; // 0x0
    USoundWave* SoundWave; // 0x18
    FString LocalizationKeyFormat; // 0x20
    UDialogueSoundWaveProxy* Proxy; // 0x30
}; // Size: 0x38
#pragma pack(pop)
