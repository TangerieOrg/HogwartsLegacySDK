#include "FAnimationRequestLayerReference.hpp"
#include "FGameplayTagContainer.hpp"
#include "UBaseArchitectAsset.hpp"
#include "UDialogueLineRule.hpp"
#include "UDialogueLineRule_BodyIdle.hpp"
#include "UPoseGroupProvider.hpp"
UDialogueLineRule_BodyIdle* UDialogueLineRule_BodyIdle::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DialogueLineRule_BodyIdle");
    return (UDialogueLineRule_BodyIdle*)res;
}
