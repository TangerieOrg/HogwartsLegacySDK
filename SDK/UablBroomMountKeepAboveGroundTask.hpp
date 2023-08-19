#pragma once
#include <cstdint>
#include "UAblAbilityTask.hpp"
#pragma pack(push, 1)
class UablBroomMountKeepAboveGroundTask : public UAblAbilityTask {
public:
    float MinHeightAboveGround; // 0x70
    float MaxDeltaV; // 0x74
    float VelocityEaseSpeed; // 0x78
    char pad_7c[0x4];
    static UablBroomMountKeepAboveGroundTask* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
