#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UCameraStackBehaviorBlend.hpp"
#pragma pack(push, 1)
class UCameraStackBehaviorAddCameraSpaceTranslation : public UCameraStackBehaviorBlend {
public:
    FVector CameraSpaceTranslation; // 0x1b8
    char pad_1c4[0x4];
    static UCameraStackBehaviorAddCameraSpaceTranslation* StaticClass();
}; // Size: 0x1c8
#pragma pack(pop)
