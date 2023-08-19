#pragma once
#include <cstdint>
#include "FDialogueSequenceRuleInstance.hpp"
#include "FTimeRigCoordinate.hpp"
#include "USceneRigRuleState.hpp"
#pragma pack(push, 1)
class USceneRigRuleState_DialogueSequence : public USceneRigRuleState {
public:
    FDialogueSequenceRuleInstance RuleInstance; // 0x78
    static USceneRigRuleState_DialogueSequence* StaticClass();
    void OnForceFinishChanged(FTimeRigCoordinate PreviousCoordinate, FTimeRigCoordinate CurrentCoordinate);
}; // Size: 0x2e0
#pragma pack(pop)
