#include "FDialogueSequenceRuleInstance.hpp"
#include "FTimeRigCoordinate.hpp"
#include "UFunction.hpp"
#include "USceneRigRuleState.hpp"
#include "USceneRigRuleState_DialogueSequence.hpp"
USceneRigRuleState_DialogueSequence* USceneRigRuleState_DialogueSequence::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneRigRuleState_DialogueSequence");
    return (USceneRigRuleState_DialogueSequence*)res;
}
void USceneRigRuleState_DialogueSequence::OnForceFinishChanged(FTimeRigCoordinate PreviousCoordinate, FTimeRigCoordinate CurrentCoordinate) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.SceneRigRuleState_DialogueSequence.OnForceFinishChanged"));
    struct Params_OnForceFinishChanged {
        FTimeRigCoordinate PreviousCoordinate; // 0x0
        FTimeRigCoordinate CurrentCoordinate; // 0x4
    }; // Size: 0x8
    Params_OnForceFinishChanged params{};
    params.PreviousCoordinate = (FTimeRigCoordinate)PreviousCoordinate;
    params.CurrentCoordinate = (FTimeRigCoordinate)CurrentCoordinate;
    ProcessEvent(func, &params);
}
