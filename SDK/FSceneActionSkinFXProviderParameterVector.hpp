#pragma once
#include <cstdint>
#include "FSceneActionSkinFXProviderParameter.hpp"
class UVectorProvider;
#pragma pack(push, 1)
struct FSceneActionSkinFXProviderParameterVector : public FSceneActionSkinFXProviderParameter {
    UVectorProvider* Value; // 0x10
}; // Size: 0x18
#pragma pack(pop)
