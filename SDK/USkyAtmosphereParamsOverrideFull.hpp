#pragma once
#include <cstdint>
#include "FSkyAtmosphereParametersOverride.hpp"
#include "USkyAtmosphereParams.hpp"
#pragma pack(push, 1)
class USkyAtmosphereParamsOverrideFull : public USkyAtmosphereParams {
public:
    FSkyAtmosphereParametersOverride Parameters; // 0x28
    static USkyAtmosphereParamsOverrideFull* StaticClass();
}; // Size: 0x1a0
#pragma pack(pop)
