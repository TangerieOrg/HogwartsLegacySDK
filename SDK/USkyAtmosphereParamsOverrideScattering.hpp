#pragma once
#include <cstdint>
#include "FSkyAtmosphereScatteringParametersOverride.hpp"
#include "USkyAtmosphereParams.hpp"
#pragma pack(push, 1)
class USkyAtmosphereParamsOverrideScattering : public USkyAtmosphereParams {
public:
    FSkyAtmosphereScatteringParametersOverride Scattering; // 0x28
    static USkyAtmosphereParamsOverrideScattering* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
