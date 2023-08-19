#include "UDialogueLineRuleState.hpp"
#include "UDialogueLineRuleState_ScreenFade.hpp"
UDialogueLineRuleState_ScreenFade* UDialogueLineRuleState_ScreenFade::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DialogueLineRuleState_ScreenFade");
    return (UDialogueLineRuleState_ScreenFade*)res;
}
