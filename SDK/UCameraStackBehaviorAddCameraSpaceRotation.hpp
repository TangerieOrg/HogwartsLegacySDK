#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "UCameraStackBehaviorBlend.hpp"
#pragma pack(push, 1)
class UCameraStackBehaviorAddCameraSpaceRotation : public UCameraStackBehaviorBlend {
public:
    FRotator CameraSpaceRotation; // 0x1b8
    char pad_1c4[0x4];
    static UCameraStackBehaviorAddCameraSpaceRotation* StaticClass();
}; // Size: 0x1c8
#pragma pack(pop)
