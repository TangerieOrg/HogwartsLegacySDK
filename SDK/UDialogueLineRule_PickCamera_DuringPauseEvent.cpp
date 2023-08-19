#include "UDialogueLineRule_PickCamera_DuringPauseEvent.hpp"
#include "UDialogueLineRule_PickCamera_Event.hpp"
UDialogueLineRule_PickCamera_DuringPauseEvent* UDialogueLineRule_PickCamera_DuringPauseEvent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DialogueLineRule_PickCamera_DuringPauseEvent");
    return (UDialogueLineRule_PickCamera_DuringPauseEvent*)res;
}
