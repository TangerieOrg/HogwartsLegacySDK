#pragma once
#include <cstdint>
#include "FSceneRigStage_StringReference.hpp"
#include "UStringProvider.hpp"
#pragma pack(push, 1)
class UString_SceneRigStageParameter : public UStringProvider {
public:
    FSceneRigStage_StringReference Reference; // 0x28
    static UString_SceneRigStageParameter* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
