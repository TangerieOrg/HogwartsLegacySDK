#pragma once
#include <cstdint>
#include "FOverlapEffectsHandlerWindSpeedEntry.hpp"
#include "UOverlapEffectsHandler.hpp"
class UOverlapEffectsClothingDataAsset;
#pragma pack(push, 1)
class UOverlapEffectsHandlerWindSpeed : public UOverlapEffectsHandler {
public:
    TArray<FOverlapEffectsHandlerWindSpeedEntry> Events; // 0x30
    UOverlapEffectsClothingDataAsset* ClothingTypesDatabase; // 0x40
    FName ActorWindSpeedRTPC; // 0x48
    FName ActorIndoorsRTPC; // 0x50
    FName ActorClothingTypeRTPC; // 0x58
    int32_t UpdateRateMS; // 0x60
    float NextUpdate; // 0x64
    int32_t ClothingTypes; // 0x68
    float LastActorWindSpeedRTPC; // 0x6c
    float LastActorIndoorsRTPC; // 0x70
    uint8_t LastActorClothingTypeRTPC; // 0x74
    bool bUseRelativeWindVelocity; // 0x75
    bool bUseActorWindSpeedRTPC; // 0x76
    bool bUseActorIndoorsRTPC; // 0x77
    bool bUseActorClothingTypeRTPC; // 0x78
    char pad_79[0x7];
    static UOverlapEffectsHandlerWindSpeed* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
