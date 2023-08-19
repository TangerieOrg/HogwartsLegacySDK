#pragma once
#include <cstdint>
#include "FSkyAtmosphereSkyOnlyParametersOverride.hpp"
#include "USkyAtmosphereParams.hpp"
#pragma pack(push, 1)
class USkyAtmosphereParamsOverrideSkyOnly : public USkyAtmosphereParams {
public:
    FSkyAtmosphereSkyOnlyParametersOverride SkyOnly; // 0x28
    static USkyAtmosphereParamsOverrideSkyOnly* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
