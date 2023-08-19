#include "FActionParameter_DialogueEvent.hpp"
#include "FActionParameter_FString.hpp"
#include "FSceneRigRule_RuleAsset.hpp"
#include "FSceneRigStage_IntReference.hpp"
#include "FSceneRigStage_StringReference.hpp"
#include "FTimeRigOutputSymbol.hpp"
#include "UDialogueLineRule.hpp"
#include "UDialogueSequenceReferenceProvider.hpp"
#include "UDialogueSequenceRule.hpp"
#include "USceneRig.hpp"
#include "USceneRigRule.hpp"
#include "USceneRigRule_DialogueSequence.hpp"
USceneRigRule_DialogueSequence* USceneRigRule_DialogueSequence::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneRigRule_DialogueSequence");
    return (USceneRigRule_DialogueSequence*)res;
}
