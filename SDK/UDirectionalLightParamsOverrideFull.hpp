#pragma once
#include <cstdint>
#include "FDirectionalLightParametersOverride.hpp"
#include "UDirectionalLightParams.hpp"
#pragma pack(push, 1)
class UDirectionalLightParamsOverrideFull : public UDirectionalLightParams {
public:
    FDirectionalLightParametersOverride Parameters; // 0x28
    char pad_114[0x4];
    static UDirectionalLightParamsOverrideFull* StaticClass();
}; // Size: 0x118
#pragma pack(pop)
