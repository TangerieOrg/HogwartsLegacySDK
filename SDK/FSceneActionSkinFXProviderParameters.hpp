#pragma once
#include <cstdint>
#include "FSceneActionSkinFXProviderParameterColor.hpp"
#include "FSceneActionSkinFXProviderParameterScalar.hpp"
#include "FSceneActionSkinFXProviderParameterVector.hpp"
#pragma pack(push, 1)
struct FSceneActionSkinFXProviderParameters {
    TArray<FSceneActionSkinFXProviderParameterScalar> Scalars; // 0x0
    TArray<FSceneActionSkinFXProviderParameterVector> Vectors; // 0x10
    TArray<FSceneActionSkinFXProviderParameterColor> Colors; // 0x20
}; // Size: 0x30
#pragma pack(pop)
