#pragma once
#include <cstdint>
#include "FDirectionalLightBasicParametersOverride.hpp"
#include "FDirectionalLightShaftsOverride.hpp"
#include "UDirectionalLightParams.hpp"
#pragma pack(push, 1)
class UDirectionalLightParamsOverrideSimple : public UDirectionalLightParams {
public:
    FDirectionalLightBasicParametersOverride Basic; // 0x28
    FDirectionalLightShaftsOverride LightShafts; // 0x50
    static UDirectionalLightParamsOverrideSimple* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
