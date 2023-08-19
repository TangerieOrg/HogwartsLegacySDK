#pragma once
#include <cstdint>
#include "ULerpVolumeDistanceMetersInterpolant.hpp"
#pragma pack(push, 1)
class ULerpVolumeDistanceToCeilingInterpolant : public ULerpVolumeDistanceMetersInterpolant {
public:
    static ULerpVolumeDistanceToCeilingInterpolant* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
