#pragma once
#include <cstdint>
#include "FExpHeightFogVolumetricAdvancedParametersRelative.hpp"
#include "UExpHeightFogParams.hpp"
#pragma pack(push, 1)
class UExpHeightFogParamsRelativeVolumetricAdvanced : public UExpHeightFogParams {
public:
    FExpHeightFogVolumetricAdvancedParametersRelative VolumetricAdvanced; // 0x30
    char pad_194[0x4];
    static UExpHeightFogParamsRelativeVolumetricAdvanced* StaticClass();
}; // Size: 0x198
#pragma pack(pop)
