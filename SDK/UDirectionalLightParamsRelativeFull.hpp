#pragma once
#include <cstdint>
#include "FDirectionalLightParametersRelative.hpp"
#include "UDirectionalLightParams.hpp"
#pragma pack(push, 1)
class UDirectionalLightParamsRelativeFull : public UDirectionalLightParams {
public:
    FDirectionalLightParametersRelative Parameters; // 0x28
    static UDirectionalLightParamsRelativeFull* StaticClass();
}; // Size: 0x408
#pragma pack(pop)
