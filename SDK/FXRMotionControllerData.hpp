#pragma once
#include <cstdint>
#include "EControllerHand.hpp"
#include "ETrackingStatus.hpp"
#include "EXRVisualType.hpp"
#include "FGuid.hpp"
#include "FQuat.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FXRMotionControllerData {
    bool bValid; // 0x0
    char pad_1[0x3];
    FName DeviceName; // 0x4
    FGuid ApplicationInstanceID; // 0xc
    EXRVisualType DeviceVisualType; // 0x1c
    EControllerHand HandIndex; // 0x1d
    ETrackingStatus TrackingStatus; // 0x1e
    char pad_1f[0x1];
    FVector GripPosition; // 0x20
    char pad_2c[0x4];
    FQuat GripRotation; // 0x30
    FVector AimPosition; // 0x40
    char pad_4c[0x4];
    FQuat AimRotation; // 0x50
    TArray<FVector> HandKeyPositions; // 0x60
    TArray<FQuat> HandKeyRotations; // 0x70
    TArray<float> HandKeyRadii; // 0x80
    bool bIsGrasped; // 0x90
    char pad_91[0xf];
}; // Size: 0xa0
#pragma pack(pop)
