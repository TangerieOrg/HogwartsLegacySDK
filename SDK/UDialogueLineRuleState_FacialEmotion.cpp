#include "UDialogueLineRuleState.hpp"
#include "UDialogueLineRuleState_FacialEmotion.hpp"
UDialogueLineRuleState_FacialEmotion* UDialogueLineRuleState_FacialEmotion::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DialogueLineRuleState_FacialEmotion");
    return (UDialogueLineRuleState_FacialEmotion*)res;
}
