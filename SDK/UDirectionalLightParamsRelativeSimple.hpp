#pragma once
#include <cstdint>
#include "FDirectionalLightBasicParametersRelative.hpp"
#include "FDirectionalLightShaftsRelative.hpp"
#include "UDirectionalLightParams.hpp"
#pragma pack(push, 1)
class UDirectionalLightParamsRelativeSimple : public UDirectionalLightParams {
public:
    FDirectionalLightBasicParametersRelative Basic; // 0x28
    FDirectionalLightShaftsRelative LightShafts; // 0xf8
    static UDirectionalLightParamsRelativeSimple* StaticClass();
}; // Size: 0x190
#pragma pack(pop)
