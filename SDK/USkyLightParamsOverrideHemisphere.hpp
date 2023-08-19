#pragma once
#include <cstdint>
#include "FSkyLightHemisphereParametersOverride.hpp"
#include "USkyLightParams.hpp"
#pragma pack(push, 1)
class USkyLightParamsOverrideHemisphere : public USkyLightParams {
public:
    FSkyLightHemisphereParametersOverride Hemisphere; // 0x28
    char pad_64[0x4];
    static USkyLightParamsOverrideHemisphere* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
