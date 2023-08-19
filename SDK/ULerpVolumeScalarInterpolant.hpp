#pragma once
#include <cstdint>
#include "FLerpVolumesScalarName.hpp"
#include "ULerpVolumeInterpolant.hpp"
#pragma pack(push, 1)
class ULerpVolumeScalarInterpolant : public ULerpVolumeInterpolant {
public:
    FLerpVolumesScalarName Name; // 0x28
    float Value; // 0x30
    char pad_34[0x4];
    static ULerpVolumeScalarInterpolant* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
