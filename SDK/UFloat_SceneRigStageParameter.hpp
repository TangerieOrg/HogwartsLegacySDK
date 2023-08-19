#pragma once
#include <cstdint>
#include "FSceneRigStage_FloatReference.hpp"
#include "UFloatProvider.hpp"
#pragma pack(push, 1)
class UFloat_SceneRigStageParameter : public UFloatProvider {
public:
    FSceneRigStage_FloatReference Reference; // 0x28
    static UFloat_SceneRigStageParameter* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
