#pragma once
#include <cstdint>
#include "FVolumetricCloudsBasicParameters.hpp"
#include "FVolumetricCloudsSkyLightParameters.hpp"
#include "UCloudLightingParams.hpp"
#pragma pack(push, 1)
class UCloudLightingParamsSimple : public UCloudLightingParams {
public:
    FVolumetricCloudsBasicParameters Basic; // 0x28
    FVolumetricCloudsSkyLightParameters SkyLight; // 0x40
    char pad_5c[0x4];
    static UCloudLightingParamsSimple* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
