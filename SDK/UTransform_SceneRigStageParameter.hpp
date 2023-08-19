#pragma once
#include <cstdint>
#include "FSceneRigStage_TransformReference.hpp"
#include "UTransformProvider.hpp"
#pragma pack(push, 1)
class UTransform_SceneRigStageParameter : public UTransformProvider {
public:
    FSceneRigStage_TransformReference Reference; // 0x28
    static UTransform_SceneRigStageParameter* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
