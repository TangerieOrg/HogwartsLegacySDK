#pragma once
#include <cstdint>
#include "FAlphaBlend.hpp"
#include "UAblAbilityTaskScratchPad.hpp"
class UMaterialInstanceDynamic;
class UAblSetParameterValue;
#pragma pack(push, 1)
class UAblSetShaderParameterTaskScratchPad : public UAblAbilityTaskScratchPad {
public:
    TArray<UMaterialInstanceDynamic*> DynamicMaterials; // 0x28
    TArray<UAblSetParameterValue*> PreviousValues; // 0x38
    FAlphaBlend BlendIn; // 0x48
    FAlphaBlend BlendOut; // 0x78
    char pad_a8[0x8];
    static UAblSetShaderParameterTaskScratchPad* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
