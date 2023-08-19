#pragma once
#include <cstdint>
#include "FVector.hpp"
#pragma pack(push, 1)
struct FSimSpaceSettings {
    float MasterAlpha; // 0x0
    float VelocityScaleZ; // 0x4
    float MaxLinearVelocity; // 0x8
    float MaxAngularVelocity; // 0xc
    float MaxLinearAcceleration; // 0x10
    float MaxAngularAcceleration; // 0x14
    float ExternalLinearDrag; // 0x18
    FVector ExternalLinearDragV; // 0x1c
    FVector ExternalLinearVelocity; // 0x28
    FVector ExternalAngularVelocity; // 0x34
}; // Size: 0x40
#pragma pack(pop)
