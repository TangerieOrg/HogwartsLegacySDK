#include "UDialogueLineRule_PickCamera_EndingEvent.hpp"
#include "UDialogueLineRule_PickCamera_Event.hpp"
UDialogueLineRule_PickCamera_EndingEvent* UDialogueLineRule_PickCamera_EndingEvent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DialogueLineRule_PickCamera_EndingEvent");
    return (UDialogueLineRule_PickCamera_EndingEvent*)res;
}
