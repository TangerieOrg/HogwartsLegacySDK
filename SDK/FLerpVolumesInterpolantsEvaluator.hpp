#pragma once
#include <cstdint>
#include "FLerpVolumesInterpolants.hpp"
class ULerpVolumesPresistentContextData;
#pragma pack(push, 1)
struct FLerpVolumesInterpolantsEvaluator {
    FLerpVolumesInterpolants Interpolants; // 0x0
    ULerpVolumesPresistentContextData* ContextData; // 0x1e0
}; // Size: 0x1e8
#pragma pack(pop)
