#pragma once
#include <cstdint>
#include "FVolumetricCloudsWindParametersOverride.hpp"
#include "UCloudsWindParams.hpp"
#pragma pack(push, 1)
class UCloudsWindParamsOverride : public UCloudsWindParams {
public:
    FVolumetricCloudsWindParametersOverride Parameters; // 0x28
    static UCloudsWindParamsOverride* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
