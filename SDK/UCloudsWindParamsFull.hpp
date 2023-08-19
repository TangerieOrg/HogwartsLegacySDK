#pragma once
#include <cstdint>
#include "FVolumetricCloudsWindParameters.hpp"
#include "UCloudsWindParams.hpp"
#pragma pack(push, 1)
class UCloudsWindParamsFull : public UCloudsWindParams {
public:
    FVolumetricCloudsWindParameters Parameters; // 0x28
    char pad_64[0x4];
    static UCloudsWindParamsFull* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
