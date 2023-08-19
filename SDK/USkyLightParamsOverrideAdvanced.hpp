#pragma once
#include <cstdint>
#include "FSkyLightAdvancedParametersOverride.hpp"
#include "USkyLightParams.hpp"
#pragma pack(push, 1)
class USkyLightParamsOverrideAdvanced : public USkyLightParams {
public:
    FSkyLightAdvancedParametersOverride Advanced; // 0x28
    static USkyLightParamsOverrideAdvanced* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
