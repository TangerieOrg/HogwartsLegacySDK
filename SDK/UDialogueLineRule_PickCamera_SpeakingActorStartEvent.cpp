#include "UDialogueLineRule_PickCamera_Event.hpp"
#include "UDialogueLineRule_PickCamera_SpeakingActorStartEvent.hpp"
UDialogueLineRule_PickCamera_SpeakingActorStartEvent* UDialogueLineRule_PickCamera_SpeakingActorStartEvent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DialogueLineRule_PickCamera_SpeakingActorStartEvent");
    return (UDialogueLineRule_PickCamera_SpeakingActorStartEvent*)res;
}
