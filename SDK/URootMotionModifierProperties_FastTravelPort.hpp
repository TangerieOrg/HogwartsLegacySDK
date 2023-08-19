#pragma once
#include <cstdint>
#include "URootMotionModifierProperties.hpp"
#pragma pack(push, 1)
class URootMotionModifierProperties_FastTravelPort : public URootMotionModifierProperties {
public:
    bool bAllowYawRotation; // 0x30
    char pad_31[0x3];
    float YawToTargetThreshold; // 0x34
    float TimeToRotateToTarget; // 0x38
    bool bAllowTranslation; // 0x3c
    char pad_3d[0x3];
    float TimeToTranslateToTarget; // 0x40
    bool bDebug; // 0x44
    char pad_45[0x3];
    static URootMotionModifierProperties_FastTravelPort* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
