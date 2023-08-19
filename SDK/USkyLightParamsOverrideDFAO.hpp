#pragma once
#include <cstdint>
#include "FSkyLightDFAOParametersOverride.hpp"
#include "USkyLightParams.hpp"
#pragma pack(push, 1)
class USkyLightParamsOverrideDFAO : public USkyLightParams {
public:
    FSkyLightDFAOParametersOverride DFAO; // 0x28
    char pad_44[0x4];
    static USkyLightParamsOverrideDFAO* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
