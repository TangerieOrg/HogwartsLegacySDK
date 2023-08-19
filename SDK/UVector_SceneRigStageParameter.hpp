#pragma once
#include <cstdint>
#include "FSceneRigStage_VectorReference.hpp"
#include "UVectorProvider.hpp"
#pragma pack(push, 1)
class UVector_SceneRigStageParameter : public UVectorProvider {
public:
    FSceneRigStage_VectorReference Reference; // 0x28
    static UVector_SceneRigStageParameter* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
