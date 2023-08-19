#pragma once
#include <cstdint>
#include "UAnimatedLightParametersComponentBase.hpp"
class ULightComponent;
#pragma pack(push, 1)
class UAnimatedLightParametersComponentAuto : public UAnimatedLightParametersComponentBase {
public:
    bool bUseForceLightComponent; // 0x220
    char pad_221[0xf];
    static UAnimatedLightParametersComponentAuto* StaticClass();
}; // Size: 0x230
#pragma pack(pop)
