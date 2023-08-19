#pragma once
#include <cstdint>
#include "FSceneRigStage_BoolReference.hpp"
#include "UBoolProvider.hpp"
#pragma pack(push, 1)
class UBool_SceneRigStageParameter : public UBoolProvider {
public:
    FSceneRigStage_BoolReference Reference; // 0x28
    static UBool_SceneRigStageParameter* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
