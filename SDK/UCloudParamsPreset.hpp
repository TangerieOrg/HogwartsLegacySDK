#pragma once
#include <cstdint>
#include "FDataTableRowHandle.hpp"
#include "FSunDiskOverrides.hpp"
#include "FVolumetricCloudsWeatherWindParams.hpp"
#include "UCloudParams.hpp"
#pragma pack(push, 1)
class UCloudParamsPreset : public UCloudParams {
public:
    FName Name; // 0x28
    FDataTableRowHandle Preset; // 0x30
    FVolumetricCloudsWeatherWindParams WindParams; // 0x40
    FSunDiskOverrides SunDiskOverrides; // 0x7c
    float Overcast; // 0x90
    float HeightOffset; // 0x94
    bool bSuperExpensiveCloudsCinematicOnly; // 0x98
    char pad_99[0x7];
    static UCloudParamsPreset* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
