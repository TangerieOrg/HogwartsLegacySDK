#pragma once
#include <cstdint>
#include "FSceneRigStage_IntReference.hpp"
#include "UIntProvider.hpp"
#pragma pack(push, 1)
class UInt_SceneRigStageParameter : public UIntProvider {
public:
    FSceneRigStage_IntReference Reference; // 0x28
    static UInt_SceneRigStageParameter* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
