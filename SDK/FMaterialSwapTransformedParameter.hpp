#pragma once
#include <cstdint>
#include "ETransformedParameterSource.hpp"
#include "FMaterialSwapCachedTransformSourceBone.hpp"
#include "FMaterialSwapCachedTransformSourceComponent.hpp"
#include "FVector.hpp"
#pragma pack(push, 1)
struct FMaterialSwapTransformedParameter {
    FName Name; // 0x0
    FVector Value; // 0x8
    FName TransformSource; // 0x14
    ETransformedParameterSource TransformType; // 0x1c
    char pad_1d[0x3];
    FMaterialSwapCachedTransformSourceBone CachedBone; // 0x20
    FMaterialSwapCachedTransformSourceComponent CachedComponent; // 0x2c
}; // Size: 0x34
#pragma pack(pop)
