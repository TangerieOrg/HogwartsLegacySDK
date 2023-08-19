#pragma once
#include <cstdint>
#include "FBlendDomain.hpp"
#include "USceneComponent.hpp"
#pragma pack(push, 1)
class UDEPRECATED_WeatherLocalWindComponent : public USceneComponent {
public:
    FBlendDomain BlendDomain; // 0x220
    float Priority; // 0x258
    float BlendRadius; // 0x25c
    float BlendWeight; // 0x260
    bool bEnabled; // 0x264
    bool bUnbounded; // 0x265
    char pad_266[0xa];
    static UDEPRECATED_WeatherLocalWindComponent* StaticClass();
    void SetPriority(float NewPriority);
}; // Size: 0x270
#pragma pack(pop)
