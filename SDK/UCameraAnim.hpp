#pragma once
#include <cstdint>
#include "FBox.hpp"
#include "FPostProcessSettings.hpp"
#include "UObject.hpp"
class UInterpGroup;
#pragma pack(push, 1)
class UCameraAnim : public UObject {
public:
    UInterpGroup* CameraInterpGroup; // 0x28
    float AnimLength; // 0x30
    FBox BoundingBox; // 0x34
    uint8_t bRelativeToInitialTransform : 1; // 0x50
    uint8_t bRelativeToInitialFOV : 1; // 0x50
    uint8_t pad_bitfield_50_2 : 6;
    char pad_51[0x3];
    float BaseFOV; // 0x54
    char pad_58[0x8];
    FPostProcessSettings BasePostProcessSettings; // 0x60
    float BasePostProcessBlendWeight; // 0x650
    char pad_654[0xc];
    static UCameraAnim* StaticClass();
}; // Size: 0x660
#pragma pack(pop)
