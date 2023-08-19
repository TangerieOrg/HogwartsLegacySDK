#include "AActor.hpp"
#include "FSceneRigStage_Actor.hpp"
#include "FTransform.hpp"
#include "UFunction.hpp"
#include "USceneRig.hpp"
#include "USceneRigStageParameterBlock.hpp"
#include "USceneRig_Interaction.hpp"
USceneRig_Interaction* USceneRig_Interaction::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneRig_Interaction");
    return (USceneRig_Interaction*)res;
}
void USceneRig_Interaction::SetSceneRoot(USceneRigStageParameterBlock* StageParameterBlock, FTransform& Transform) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SceneRig_Interaction.SetSceneRoot"));
    struct Params_SetSceneRoot {
        USceneRigStageParameterBlock* StageParameterBlock; // 0x0
        char pad_8[0x8];
        FTransform Transform; // 0x10
    }; // Size: 0x40
    Params_SetSceneRoot params{};
    params.StageParameterBlock = (USceneRigStageParameterBlock*)StageParameterBlock;
    params.Transform = (FTransform)Transform;
    ProcessEvent(func, &params);
    Transform = params.Transform;
}
void USceneRig_Interaction::SetInteractionActor(USceneRigStageParameterBlock* StageParameterBlock, AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SceneRig_Interaction.SetInteractionActor"));
    struct Params_SetInteractionActor {
        USceneRigStageParameterBlock* StageParameterBlock; // 0x0
        AActor* Actor; // 0x8
    }; // Size: 0x10
    Params_SetInteractionActor params{};
    params.StageParameterBlock = (USceneRigStageParameterBlock*)StageParameterBlock;
    params.Actor = (AActor*)Actor;
    ProcessEvent(func, &params);
}
