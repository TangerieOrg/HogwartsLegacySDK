#pragma once
#include <cstdint>
#include "FVolumetricCloudsLightingParameters.hpp"
#include "UCloudLightingParams.hpp"
#pragma pack(push, 1)
class UCloudLightingParamsFull : public UCloudLightingParams {
public:
    FVolumetricCloudsLightingParameters Parameters; // 0x28
    bool bSetSceneLighting; // 0xa8
    char pad_a9[0x7];
    static UCloudLightingParamsFull* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
