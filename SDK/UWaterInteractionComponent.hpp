#pragma once
#include <cstdint>
#include "UActorComponent.hpp"
#pragma pack(push, 1)
class UWaterInteractionComponent : public UActorComponent {
public:
    bool bCanRipple; // 0xc8
    char pad_c9[0x57];
    float Radius; // 0x120
    float IntensityMultiplier; // 0x124
    char pad_128[0x8];
    static UWaterInteractionComponent* StaticClass();
    void WakeUp(bool bEnableForWater);
    void Sleep();
}; // Size: 0x130
#pragma pack(pop)
