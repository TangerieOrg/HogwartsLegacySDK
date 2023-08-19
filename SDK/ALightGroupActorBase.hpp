#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FLightGroupSettings.hpp"
#pragma pack(push, 1)
class ALightGroupActorBase : public AActor {
public:
    char pad_248[0x8];
    FLightGroupSettings Settings; // 0x250
    char pad_260[0x8];
    static ALightGroupActorBase* StaticClass();
    void GetLightRegionGroup(FName& Region, FName& Group);
    void GetLightGroupRegion(FName& Region);
    void GetLightGroupIndex(int32_t& GroupNumber);
    void GetLightGroup(FName& Group);
}; // Size: 0x268
#pragma pack(pop)
