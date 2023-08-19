#pragma once
#include <cstdint>
#include "FWorldFXCascadeSystemAdvancedOptions.hpp"
#include "FWorldFXCascadeSystemParam.hpp"
#include "FWorldFXCullDistance.hpp"
#include "FWorldFXMaterialOverrideList.hpp"
class UWorldFXCascadeInstanceParametersBase;
#pragma pack(push, 1)
struct FWorldFXCascadeSystem {
    char pad_0[0x28];
    FWorldFXMaterialOverrideList Materials; // 0x28
    TArray<FWorldFXCascadeSystemParam> InstanceParameters; // 0x38
    UWorldFXCascadeInstanceParametersBase* NewInstanceParameters; // 0x48
    FWorldFXCullDistance CullDistance; // 0x50
    FWorldFXCascadeSystemAdvancedOptions AdvancedOptions; // 0x58
    char pad_64[0x4];
}; // Size: 0x68
#pragma pack(pop)
