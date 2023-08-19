#pragma once
#include <cstdint>
#include "ULerpVolumeDistanceMetersInterpolant.hpp"
#pragma pack(push, 1)
class ULerpVolumeDistanceFromWallInterpolant : public ULerpVolumeDistanceMetersInterpolant {
public:
    static ULerpVolumeDistanceFromWallInterpolant* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
