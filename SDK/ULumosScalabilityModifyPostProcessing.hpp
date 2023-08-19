#pragma once
#include <cstdint>
#include "ULumosScalabilityModifyWithRule.hpp"
class ULumosPostProcessingAsset;
#pragma pack(push, 1)
class ULumosScalabilityModifyPostProcessing : public ULumosScalabilityModifyWithRule {
public:
    ULumosPostProcessingAsset* PostProcessing; // 0x40
    bool bUsePostProcessing; // 0x48
    char pad_49[0x7];
    static ULumosScalabilityModifyPostProcessing* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
