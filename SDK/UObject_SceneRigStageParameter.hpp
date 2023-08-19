#pragma once
#include <cstdint>
#include "FSceneRigStage_ObjectReference.hpp"
#include "UObjectProvider.hpp"
#pragma pack(push, 1)
class UObject_SceneRigStageParameter : public UObjectProvider {
public:
    FSceneRigStage_ObjectReference Reference; // 0x28
    static UObject_SceneRigStageParameter* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
