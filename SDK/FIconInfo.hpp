#pragma once
#include <cstdint>
#include "FTableRowBase.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FIconInfo : public FTableRowBase {
    char pad_8[0x28];
    bool Locked; // 0x30
    char pad_31[0x3];
    float HAngle; // 0x34
    float VAngle; // 0x38
    float FieldOfView; // 0x3c
    float Padding; // 0x40
    float LightHAngle; // 0x44
    float LightVAngle; // 0x48
    FVector CameraOffset; // 0x4c
    char pad_58[0x28];
    float AnimPercent; // 0x80
    FName CopyIconInfoRowName; // 0x84
    char pad_8c[0x4];
}; // Size: 0x90
#pragma pack(pop)
