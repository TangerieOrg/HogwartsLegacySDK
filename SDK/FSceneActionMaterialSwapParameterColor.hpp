#pragma once
#include <cstdint>
#include "FSceneActionMaterialSwapParameter.hpp"
class UColorProvider;
#pragma pack(push, 1)
struct FSceneActionMaterialSwapParameterColor : public FSceneActionMaterialSwapParameter {
    UColorProvider* Value; // 0x10
}; // Size: 0x18
#pragma pack(pop)
