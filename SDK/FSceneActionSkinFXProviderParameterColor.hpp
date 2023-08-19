#pragma once
#include <cstdint>
#include "FSceneActionSkinFXProviderParameter.hpp"
class UColorProvider;
#pragma pack(push, 1)
struct FSceneActionSkinFXProviderParameterColor : public FSceneActionSkinFXProviderParameter {
    UColorProvider* Value; // 0x10
}; // Size: 0x18
#pragma pack(pop)
