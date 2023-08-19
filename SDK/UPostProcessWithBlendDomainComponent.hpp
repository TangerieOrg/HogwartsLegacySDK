#pragma once
#include <cstdint>
#include "FBlendDomain.hpp"
#include "FPostProcessSettings.hpp"
#include "USceneComponent.hpp"
#pragma pack(push, 1)
class UPostProcessWithBlendDomainComponent : public USceneComponent {
public:
    FBlendDomain BlendDomain; // 0x220
    char pad_258[0x8];
    FPostProcessSettings Settings; // 0x260
    float Priority; // 0x850
    float BlendRadius; // 0x854
    float BlendWeight; // 0x858
    uint8_t bEnabled : 1; // 0x85c
    uint8_t bUnbound : 1; // 0x85c
    uint8_t pad_bitfield_85c_2 : 6;
    char pad_85d[0x3];
    static UPostProcessWithBlendDomainComponent* StaticClass();
    void AddOrUpdateBlendable();
}; // Size: 0x860
#pragma pack(pop)
