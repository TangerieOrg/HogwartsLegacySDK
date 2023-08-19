#pragma once
#include <cstdint>
#include "FSkyLightBasicParametersRelative.hpp"
#include "USkyLightParams.hpp"
#pragma pack(push, 1)
class USkyLightParamsRelativeBasic : public USkyLightParams {
public:
    FSkyLightBasicParametersRelative Basic; // 0x28
    static USkyLightParamsRelativeBasic* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
