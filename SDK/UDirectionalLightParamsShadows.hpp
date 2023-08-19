#pragma once
#include <cstdint>
#include "FDirectionalLightShadows.hpp"
#include "UDirectionalLightParams.hpp"
#pragma pack(push, 1)
class UDirectionalLightParamsShadows : public UDirectionalLightParams {
public:
    FDirectionalLightShadows Shadows; // 0x28
    char pad_44[0x4];
    static UDirectionalLightParamsShadows* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
