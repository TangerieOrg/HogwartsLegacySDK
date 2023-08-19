#pragma once
#include <cstdint>
#include "FSceneRigParameterBinding_Animation.hpp"
#include "UAnimationProvider.hpp"
#pragma pack(push, 1)
class UAnimationAsset_SceneRigParameter : public UAnimationProvider {
public:
    FSceneRigParameterBinding_Animation BoundParameter; // 0x28
    static UAnimationAsset_SceneRigParameter* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
