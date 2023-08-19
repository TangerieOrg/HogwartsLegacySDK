#pragma once
#include <cstdint>
#include "FLerpVolumesInterpolantPCs.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FLerpVolumesUnitDirection : public FLerpVolumesInterpolantPCs {
    FVector Value; // 0x20
    char pad_2c[0x4];
}; // Size: 0x30
#pragma pack(pop)
