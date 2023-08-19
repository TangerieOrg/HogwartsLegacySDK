#pragma once
#include <cstdint>
#include "FSkyAtmosphereOzoneParametersOverride.hpp"
#include "USkyAtmosphereParams.hpp"
#pragma pack(push, 1)
class USkyAtmosphereParamsOverrideOzone : public USkyAtmosphereParams {
public:
    FSkyAtmosphereOzoneParametersOverride Ozone; // 0x28
    char pad_4c[0x4];
    static USkyAtmosphereParamsOverrideOzone* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
