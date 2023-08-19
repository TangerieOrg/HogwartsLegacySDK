#include "UDialogueLineRuleState.hpp"
#include "UDialogueLineRuleState_BodyIdle.hpp"
UDialogueLineRuleState_BodyIdle* UDialogueLineRuleState_BodyIdle::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DialogueLineRuleState_BodyIdle");
    return (UDialogueLineRuleState_BodyIdle*)res;
}
