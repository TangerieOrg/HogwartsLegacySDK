#pragma once
#include <cstdint>
#include "FVolumetricCloudsPresetParameters.hpp"
#include "UCloudsPresetParams.hpp"
#pragma pack(push, 1)
class UCloudsPresetParamsRaw : public UCloudsPresetParams {
public:
    FVolumetricCloudsPresetParameters Parameters; // 0x28
    static UCloudsPresetParamsRaw* StaticClass();
}; // Size: 0x138
#pragma pack(pop)
