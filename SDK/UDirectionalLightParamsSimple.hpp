#pragma once
#include <cstdint>
#include "FDirectionalLightAdvancedParameters.hpp"
#include "FDirectionalLightBasicParameters.hpp"
#include "FDirectionalLightShafts.hpp"
#include "UDirectionalLightParams.hpp"
#pragma pack(push, 1)
class UDirectionalLightParamsSimple : public UDirectionalLightParams {
public:
    FDirectionalLightBasicParameters Basic; // 0x28
    FDirectionalLightAdvancedParameters Advanced; // 0x4c
    FDirectionalLightShafts LightShafts; // 0x8c
    char pad_b4[0x4];
    static UDirectionalLightParamsSimple* StaticClass();
}; // Size: 0xb8
#pragma pack(pop)
