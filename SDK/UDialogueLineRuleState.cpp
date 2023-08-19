#include "UDialogueLineRuleState.hpp"
#include "UObject.hpp"
UDialogueLineRuleState* UDialogueLineRuleState::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DialogueLineRuleState");
    return (UDialogueLineRuleState*)res;
}
