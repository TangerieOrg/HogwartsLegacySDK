#include "UDialogueLineRule_MoveCamera_Event.hpp"
#include "UDialogueLineRule_MoveCamera_SpeakingActorStartEvent.hpp"
UDialogueLineRule_MoveCamera_SpeakingActorStartEvent* UDialogueLineRule_MoveCamera_SpeakingActorStartEvent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DialogueLineRule_MoveCamera_SpeakingActorStartEvent");
    return (UDialogueLineRule_MoveCamera_SpeakingActorStartEvent*)res;
}
