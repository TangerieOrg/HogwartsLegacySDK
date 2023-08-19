#pragma once
#include <cstdint>
#include "FBlendDomain.hpp"
#include "UActorComponent.hpp"
#pragma pack(push, 1)
class UWeatherOrphanComponent : public UActorComponent {
public:
    char pad_c8[0x8];
    FBlendDomain BlendDomain; // 0xd0
    float TimeToLive; // 0x108
    float Age; // 0x10c
    float BlendMultiplier; // 0x110
    char pad_114[0x4];
    static UWeatherOrphanComponent* StaticClass();
}; // Size: 0x118
#pragma pack(pop)
