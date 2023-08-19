#pragma once
#include <cstdint>
#include "FSkyLightBasicParametersOverride.hpp"
#include "USkyLightParams.hpp"
#pragma pack(push, 1)
class USkyLightParamsOverrideBasic : public USkyLightParams {
public:
    FSkyLightBasicParametersOverride Basic; // 0x28
    char pad_3c[0x4];
    static USkyLightParamsOverrideBasic* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
