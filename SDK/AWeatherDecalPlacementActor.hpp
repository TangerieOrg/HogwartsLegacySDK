#pragma once
#include <cstdint>
#include "AActor.hpp"
#pragma pack(push, 1)
class AWeatherDecalPlacementActor : public AActor {
public:
    TArray<FName> DecalTags; // 0x248
    bool bEnabled; // 0x258
    char pad_259[0x7];
    static AWeatherDecalPlacementActor* StaticClass();
}; // Size: 0x260
#pragma pack(pop)
