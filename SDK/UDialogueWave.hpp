#pragma once
#include <cstdint>
#include "FDialogueContextMapping.hpp"
#include "FGuid.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UDialogueWave : public UObject {
public:
    uint8_t bMature : 1; // 0x28
    uint8_t bOverride_SubtitleOverride : 1; // 0x28
    uint8_t pad_bitfield_28_2 : 6;
    char pad_29[0x7];
    FString SpokenText; // 0x30
    FString SubtitleOverride; // 0x40
    TArray<FDialogueContextMapping> ContextMappings; // 0x50
    FGuid LocalizationGUID; // 0x60
    static UDialogueWave* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
