#include "UDialogueLineRuleState.hpp"
#include "UDialogueLineRuleState_Dialog.hpp"
UDialogueLineRuleState_Dialog* UDialogueLineRuleState_Dialog::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DialogueLineRuleState_Dialog");
    return (UDialogueLineRuleState_Dialog*)res;
}
