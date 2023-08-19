#pragma once
#include <cstdint>
#include "FAlphaBlend.hpp"
class USetParameterValue;
class UMaterialInstanceDynamic;
#pragma pack(push, 1)
struct FMaterialParameterSetter {
    FName ParameterName; // 0x0
    USetParameterValue* ParameterValue; // 0x8
    FAlphaBlend BlendIn; // 0x10
    FAlphaBlend BlendOut; // 0x40
    TArray<UMaterialInstanceDynamic*> DynamicMaterials; // 0x70
    TArray<USetParameterValue*> PreviousValues; // 0x80
    char pad_90[0x8];
}; // Size: 0x98
#pragma pack(pop)
