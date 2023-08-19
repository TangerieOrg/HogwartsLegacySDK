#include "ETimeRigFadeEventType.hpp"
#include "FColor.hpp"
#include "UBoolProvider.hpp"
#include "UDialogueLineRule.hpp"
#include "UDialogueLineRule_ScreenFade.hpp"
#include "UFloatProvider.hpp"
UDialogueLineRule_ScreenFade* UDialogueLineRule_ScreenFade::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DialogueLineRule_ScreenFade");
    return (UDialogueLineRule_ScreenFade*)res;
}
