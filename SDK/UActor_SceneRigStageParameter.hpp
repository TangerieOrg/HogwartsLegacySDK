#pragma once
#include <cstdint>
#include "FSceneRigStage_ActorReference.hpp"
#include "UActorProvider.hpp"
#pragma pack(push, 1)
class UActor_SceneRigStageParameter : public UActorProvider {
public:
    char pad_38[0x8];
    FSceneRigStage_ActorReference Reference; // 0x40
    static UActor_SceneRigStageParameter* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
