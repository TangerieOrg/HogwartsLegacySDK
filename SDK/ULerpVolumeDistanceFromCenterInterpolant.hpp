#pragma once
#include <cstdint>
#include "ULerpVolumeDistanceMetersInterpolant.hpp"
#pragma pack(push, 1)
class ULerpVolumeDistanceFromCenterInterpolant : public ULerpVolumeDistanceMetersInterpolant {
public:
    static ULerpVolumeDistanceFromCenterInterpolant* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
