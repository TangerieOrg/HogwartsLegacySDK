#pragma once
#include <cstdint>
#include "ULerpVolumeDistanceMetersInterpolant.hpp"
#pragma pack(push, 1)
class ULerpVolumeDistanceToFloorInterpolant : public ULerpVolumeDistanceMetersInterpolant {
public:
    static ULerpVolumeDistanceToFloorInterpolant* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
