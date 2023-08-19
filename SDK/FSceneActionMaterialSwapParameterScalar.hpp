#pragma once
#include <cstdint>
#include "FSceneActionMaterialSwapParameter.hpp"
class UFloatProvider;
#pragma pack(push, 1)
struct FSceneActionMaterialSwapParameterScalar : public FSceneActionMaterialSwapParameter {
    UFloatProvider* Value; // 0x10
}; // Size: 0x18
#pragma pack(pop)
