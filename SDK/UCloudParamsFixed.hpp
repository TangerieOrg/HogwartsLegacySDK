#pragma once
#include <cstdint>
#include "FCloudParameters.hpp"
#include "FVolumetricCloudsWeatherWindParams.hpp"
#include "UCloudParams.hpp"
#pragma pack(push, 1)
class UCloudParamsFixed : public UCloudParams {
public:
    FName Name; // 0x28
    FCloudParameters Parameters; // 0x30
    FVolumetricCloudsWeatherWindParams WindParams; // 0x198
    char pad_1d4[0x4];
    static UCloudParamsFixed* StaticClass();
}; // Size: 0x1d8
#pragma pack(pop)
