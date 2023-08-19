#pragma once
#include <cstdint>
#include "FDirectionalLightShafts.hpp"
#include "UDirectionalLightParams.hpp"
#pragma pack(push, 1)
class UDirectionalLightParamsLightShafts : public UDirectionalLightParams {
public:
    FDirectionalLightShafts LightShafts; // 0x28
    static UDirectionalLightParamsLightShafts* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
