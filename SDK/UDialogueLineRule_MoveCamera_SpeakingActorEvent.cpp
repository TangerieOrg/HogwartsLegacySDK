#include "UDialogueLineRule_MoveCamera_Event.hpp"
#include "UDialogueLineRule_MoveCamera_SpeakingActorEvent.hpp"
UDialogueLineRule_MoveCamera_SpeakingActorEvent* UDialogueLineRule_MoveCamera_SpeakingActorEvent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DialogueLineRule_MoveCamera_SpeakingActorEvent");
    return (UDialogueLineRule_MoveCamera_SpeakingActorEvent*)res;
}
