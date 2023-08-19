#pragma once
#include <cstdint>
#include "FPostProcessSettings.hpp"
#include "USceneComponent.hpp"
#pragma pack(push, 1)
class UPostProcessComponent : public USceneComponent {
public:
    FPostProcessSettings Settings; // 0x220
    float Priority; // 0x810
    float BlendRadius; // 0x814
    float BlendWeight; // 0x818
    uint8_t bEnabled : 1; // 0x81c
    uint8_t bUnbound : 1; // 0x81c
    uint8_t pad_bitfield_81c_2 : 6;
    char pad_81d[0x3];
    static UPostProcessComponent* StaticClass();
    void AddOrUpdateBlendable();
}; // Size: 0x820
#pragma pack(pop)
