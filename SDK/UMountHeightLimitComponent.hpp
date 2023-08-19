#pragma once
#include <cstdint>
#include "UActorComponent.hpp"
class UMountRegionHeights;
#pragma pack(push, 1)
class UMountHeightLimitComponent : public UActorComponent {
public:
    char pad_c8[0x28];
    UMountRegionHeights* RegionHeights; // 0xf0
    char pad_f8[0x18];
    static UMountHeightLimitComponent* StaticClass();
    void SetHeightOverrides(float InTargetHeight, float InHeightBuffer);
    float GetFlyHeight();
    void ClearHeightOverrides();
}; // Size: 0x110
#pragma pack(pop)
