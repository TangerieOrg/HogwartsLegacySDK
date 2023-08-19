#pragma once
#include <cstdint>
#include "ULerpVolumeDistanceFromWallInterpolant.hpp"
#pragma pack(push, 1)
class ULerpVolumeDistanceFromOppositeWallInterpolant : public ULerpVolumeDistanceFromWallInterpolant {
public:
    static ULerpVolumeDistanceFromOppositeWallInterpolant* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
