#include "UDialogueLineRule_MoveCamera_EndingEvent.hpp"
#include "UDialogueLineRule_MoveCamera_Event.hpp"
UDialogueLineRule_MoveCamera_EndingEvent* UDialogueLineRule_MoveCamera_EndingEvent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DialogueLineRule_MoveCamera_EndingEvent");
    return (UDialogueLineRule_MoveCamera_EndingEvent*)res;
}
