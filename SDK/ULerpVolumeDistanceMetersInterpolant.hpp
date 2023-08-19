#pragma once
#include <cstdint>
#include "FLerpVolumesScalarName.hpp"
#include "ULerpVolumeInterpolant.hpp"
#pragma pack(push, 1)
class ULerpVolumeDistanceMetersInterpolant : public ULerpVolumeInterpolant {
public:
    FLerpVolumesScalarName Name; // 0x28
    static ULerpVolumeDistanceMetersInterpolant* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
