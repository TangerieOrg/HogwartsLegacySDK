#pragma once
#include <cstdint>
#include "FWorldFXCascadeSystemParamBase.hpp"
class UMaterialInterface;
#pragma pack(push, 1)
struct FWorldFXCascadeSystemParamMaterial : public FWorldFXCascadeSystemParamBase {
    char pad_1[0x7];
    UMaterialInterface* Material; // 0x8
}; // Size: 0x10
#pragma pack(pop)
