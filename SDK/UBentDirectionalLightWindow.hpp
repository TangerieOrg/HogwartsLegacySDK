#pragma once
#include <cstdint>
#include "USceneComponent.hpp"
#pragma pack(push, 1)
class UBentDirectionalLightWindow : public USceneComponent {
public:
    float CosineTopBottomAngle; // 0x220
    float CosineLeftRightAngle; // 0x224
    float WindowBaseAngle; // 0x228
    bool bEnabled; // 0x22c
    char pad_22d[0x3];
    static UBentDirectionalLightWindow* StaticClass();
}; // Size: 0x230
#pragma pack(pop)
