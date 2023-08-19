#pragma once
#include <cstdint>
#include "FLightGroupSettings.hpp"
#include "UActorComponent.hpp"
#pragma pack(push, 1)
class ULightGroupComponent : public UActorComponent {
public:
    char pad_c8[0x8];
    FLightGroupSettings Settings; // 0xd0
    char pad_e0[0x8];
    static ULightGroupComponent* StaticClass();
    void GetLightRegionGroup(FName& Region, FName& Group);
    void GetLightGroupRegion(FName& Region);
    void GetLightGroupIndex(int32_t& GroupNumber);
    void GetLightGroup(FName& Group);
}; // Size: 0xe8
#pragma pack(pop)
