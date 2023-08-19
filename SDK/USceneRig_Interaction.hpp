#pragma once
#include <cstdint>
#include "FSceneRigStage_Actor.hpp"
#include "USceneRig.hpp"
class USceneRigStageParameterBlock;
struct FTransform;
class AActor;
#pragma pack(push, 1)
class USceneRig_Interaction : public USceneRig {
public:
    FSceneRigStage_Actor interactionActor; // 0x238
    FSceneRigStage_Actor LocalPlayer; // 0x250
    static USceneRig_Interaction* StaticClass();
    void SetSceneRoot(USceneRigStageParameterBlock* StageParameterBlock, FTransform& Transform);
    void SetInteractionActor(USceneRigStageParameterBlock* StageParameterBlock, AActor* Actor);
}; // Size: 0x268
#pragma pack(pop)
