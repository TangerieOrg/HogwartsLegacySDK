#pragma once
#include <cstdint>
#include "FAnimatedLightExtraParameter.hpp"
class UMaterialInstanceDynamic;
#pragma pack(push, 1)
struct FAnimatedLightExtraSetupMaterialParameter : public FAnimatedLightExtraParameter {
    UMaterialInstanceDynamic* Material; // 0x10
}; // Size: 0x18
#pragma pack(pop)
