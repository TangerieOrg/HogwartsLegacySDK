#pragma once
#include <cstdint>
#include "FBlendDomain.hpp"
#include "FPostProcessSettings.hpp"
#include "USceneComponent.hpp"
class UPostProcessingVarsDriver;
#pragma pack(push, 1)
class UPostProcessingVarsComponentBase : public USceneComponent {
public:
    UPostProcessingVarsDriver* Driver; // 0x220
    float DriverValue; // 0x228
    char pad_22c[0x4];
    FBlendDomain BlendDomain; // 0x230
    float Priority; // 0x268
    float BlendRadius; // 0x26c
    float BlendWeight; // 0x270
    uint8_t bEnabled : 1; // 0x274
    uint8_t bUnbounded : 1; // 0x274
    uint8_t bDriverValueValid : 1; // 0x274
    uint8_t pad_bitfield_274_3 : 5;
    char pad_275[0xb];
    FPostProcessSettings PostProcessSettings; // 0x280
    static UPostProcessingVarsComponentBase* StaticClass();
    void SetPriority(float NewPriority);
}; // Size: 0x870
#pragma pack(pop)
