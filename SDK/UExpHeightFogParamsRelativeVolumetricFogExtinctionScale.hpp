#pragma once
#include <cstdint>
#include "FAdjustedValueFloat.hpp"
#include "UExpHeightFogParams.hpp"
#pragma pack(push, 1)
class UExpHeightFogParamsRelativeVolumetricFogExtinctionScale : public UExpHeightFogParams {
public:
    FAdjustedValueFloat VolumetricFogExtinctionScale; // 0x30
    static UExpHeightFogParamsRelativeVolumetricFogExtinctionScale* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
