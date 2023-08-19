#pragma once
#include <cstdint>
#include "FExpHeightFogVolumetricAdvancedParametersOverride.hpp"
#include "UExpHeightFogParams.hpp"
#pragma pack(push, 1)
class UExpHeightFogParamsOverrideVolumetricAdvanced : public UExpHeightFogParams {
public:
    FExpHeightFogVolumetricAdvancedParametersOverride VolumetricAdvanced; // 0x30
    static UExpHeightFogParamsOverrideVolumetricAdvanced* StaticClass();
}; // Size: 0xa8
#pragma pack(pop)
