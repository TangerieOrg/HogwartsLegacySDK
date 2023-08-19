#pragma once
#include <cstdint>
#include "FSceneRigStage_AnimationReference.hpp"
#include "UAnimationProvider.hpp"
#pragma pack(push, 1)
class UAnimation_SceneRigStageParameter : public UAnimationProvider {
public:
    FSceneRigStage_AnimationReference Reference; // 0x28
    static UAnimation_SceneRigStageParameter* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
