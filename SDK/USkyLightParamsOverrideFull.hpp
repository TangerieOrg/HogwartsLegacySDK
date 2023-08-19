#pragma once
#include <cstdint>
#include "FSkyLightLightingParametersOverride.hpp"
#include "USkyLightParams.hpp"
#pragma pack(push, 1)
class USkyLightParamsOverrideFull : public USkyLightParams {
public:
    FSkyLightLightingParametersOverride Parameters; // 0x28
    static USkyLightParamsOverrideFull* StaticClass();
}; // Size: 0xd8
#pragma pack(pop)
