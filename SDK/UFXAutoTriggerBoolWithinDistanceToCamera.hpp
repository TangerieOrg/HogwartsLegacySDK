#pragma once
#include <cstdint>
#include "UFXAutoTriggerBool.hpp"
#pragma pack(push, 1)
class UFXAutoTriggerBoolWithinDistanceToCamera : public UFXAutoTriggerBool {
public:
    float DistanceInMeters; // 0x28
    bool bInFrontOnly; // 0x2c
    char pad_2d[0x3];
    float MaxCameraDistanceSquared; // 0x30
    char pad_34[0x4];
    static UFXAutoTriggerBoolWithinDistanceToCamera* StaticClass();
    void SetMaxCameraDistanceMeters(float MaxCameraDistanceMeters);
}; // Size: 0x38
#pragma pack(pop)
