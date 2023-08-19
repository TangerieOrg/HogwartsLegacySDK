#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "USceneComponent.hpp"
#pragma pack(push, 1)
class UParallaxWindowHelper : public USceneComponent {
public:
    char pad_220[0x4];
    FVector NegativeExtents; // 0x224
    float RotationAngle; // 0x230
    bool bShowDebugBox; // 0x234
    char pad_235[0xb];
    static UParallaxWindowHelper* StaticClass();
}; // Size: 0x240
#pragma pack(pop)
