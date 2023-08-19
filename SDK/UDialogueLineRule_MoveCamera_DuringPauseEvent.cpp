#include "UDialogueLineRule_MoveCamera_DuringPauseEvent.hpp"
#include "UDialogueLineRule_MoveCamera_Event.hpp"
UDialogueLineRule_MoveCamera_DuringPauseEvent* UDialogueLineRule_MoveCamera_DuringPauseEvent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DialogueLineRule_MoveCamera_DuringPauseEvent");
    return (UDialogueLineRule_MoveCamera_DuringPauseEvent*)res;
}
