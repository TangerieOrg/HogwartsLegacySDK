#pragma once
#include <cstdint>
#include "FCPMovementType.hpp"
#include "FCPSupportType.hpp"
#include "FIKDriver_FloorContactProfileSettings.hpp"
#include "FVector2D.hpp"
#pragma pack(push, 1)
struct FIKDriver_FloorContactProfile {
    FName Name; // 0x0
    FVector2D SlopeRange; // 0x8
    FVector2D SpeedRange; // 0x10
    FCPSupportType SupportType; // 0x18
    FCPMovementType MovementType; // 0x1c
    float BlendInTime; // 0x20
    FIKDriver_FloorContactProfileSettings OverrideSettings; // 0x24
}; // Size: 0x38
#pragma pack(pop)
