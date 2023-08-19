#pragma once
#include <cstdint>
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UFXUpdate_Tick.hpp"
#pragma pack(push, 1)
class UFXUpdate_LocationRotationScale : public UFXUpdate_Tick {
public:
    float InterpolationWeight; // 0x80
    FName LocationPropertyName; // 0x84
    bool bUseLocationPropertyName; // 0x8c
    char pad_8d[0x3];
    FVector OverrideLocation; // 0x90
    bool bUseOverrideLocation; // 0x9c
    char pad_9d[0x3];
    FName RotationPropertyName; // 0xa0
    bool bUseRotationPropertyName; // 0xa8
    char pad_a9[0x3];
    FRotator OverrideRotation; // 0xac
    bool bUseOverrideRotation; // 0xb8
    char pad_b9[0x3];
    FName ScalePropertyName; // 0xbc
    bool bUseScalePropertyName; // 0xc4
    char pad_c5[0x3];
    FVector OverrideScale; // 0xc8
    bool bUseOverrideScale; // 0xd4
    char pad_d5[0x3];
    static UFXUpdate_LocationRotationScale* StaticClass();
}; // Size: 0xd8
#pragma pack(pop)
