#pragma once
#include <cstdint>
#include "FLayerActorStats.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class ULayer : public UObject {
public:
    FName LayerName; // 0x28
    uint8_t bIsVisible : 1; // 0x30
    uint8_t pad_bitfield_30_1 : 7;
    char pad_31[0x7];
    TArray<FLayerActorStats> ActorStats; // 0x38
    static ULayer* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
