#pragma once
#include <cstdint>
#include "FSceneActionMaterialSwapParameter.hpp"
class UVectorProvider;
#pragma pack(push, 1)
struct FSceneActionMaterialSwapParameterVector : public FSceneActionMaterialSwapParameter {
    UVectorProvider* Value; // 0x10
}; // Size: 0x18
#pragma pack(pop)
