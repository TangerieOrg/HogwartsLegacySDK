#pragma once
#include <cstdint>
#include "UCameraStackBehaviorBlend.hpp"
#pragma pack(push, 1)
class UCameraStackBehaviorCameraStackComponent : public UCameraStackBehaviorBlend {
public:
    char pad_1b8[0x78];
    static UCameraStackBehaviorCameraStackComponent* StaticClass();
}; // Size: 0x230
#pragma pack(pop)
