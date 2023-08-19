#pragma once
#include <cstdint>
#include "FSceneActionSkinFXProviderParameter.hpp"
class UFloatProvider;
#pragma pack(push, 1)
struct FSceneActionSkinFXProviderParameterScalar : public FSceneActionSkinFXProviderParameter {
    UFloatProvider* Value; // 0x10
}; // Size: 0x18
#pragma pack(pop)
