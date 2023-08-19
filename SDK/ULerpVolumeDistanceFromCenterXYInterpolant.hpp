#pragma once
#include <cstdint>
#include "ULerpVolumeDistanceMetersInterpolant.hpp"
#pragma pack(push, 1)
class ULerpVolumeDistanceFromCenterXYInterpolant : public ULerpVolumeDistanceMetersInterpolant {
public:
    static ULerpVolumeDistanceFromCenterXYInterpolant* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
