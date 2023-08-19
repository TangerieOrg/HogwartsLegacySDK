#pragma once
#include <cstdint>
#include "FLerpVolumesInterpolantPCs.hpp"
#include "FLinearColor.hpp"
#pragma pack(push, 1)
struct FLerpVolumesColor : public FLerpVolumesInterpolantPCs {
    FLinearColor Value; // 0x20
}; // Size: 0x30
#pragma pack(pop)
