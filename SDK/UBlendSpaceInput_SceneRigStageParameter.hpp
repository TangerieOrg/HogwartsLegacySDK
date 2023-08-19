#pragma once
#include <cstdint>
#include "FSceneRigStage_FloatReference.hpp"
#include "UBlendSpaceInputProvider.hpp"
#pragma pack(push, 1)
class UBlendSpaceInput_SceneRigStageParameter : public UBlendSpaceInputProvider {
public:
    FSceneRigStage_FloatReference Reference; // 0x28
    static UBlendSpaceInput_SceneRigStageParameter* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
