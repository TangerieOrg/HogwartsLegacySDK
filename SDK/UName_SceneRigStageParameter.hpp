#pragma once
#include <cstdint>
#include "FSceneRigStage_NameReference.hpp"
#include "UNameProvider.hpp"
#pragma pack(push, 1)
class UName_SceneRigStageParameter : public UNameProvider {
public:
    FSceneRigStage_NameReference Reference; // 0x28
    static UName_SceneRigStageParameter* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
