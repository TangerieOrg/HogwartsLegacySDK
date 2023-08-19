#pragma once
#include <cstdint>
#include "ETrackingStatus.hpp"
#include "FGuid.hpp"
#include "FQuat.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FXRHMDData {
    bool bValid; // 0x0
    char pad_1[0x3];
    FName DeviceName; // 0x4
    FGuid ApplicationInstanceID; // 0xc
    ETrackingStatus TrackingStatus; // 0x1c
    char pad_1d[0x3];
    FVector Position; // 0x20
    char pad_2c[0x4];
    FQuat Rotation; // 0x30
}; // Size: 0x40
#pragma pack(pop)
