#include "UDialogueLineRule_PickCamera_Event.hpp"
#include "UDialogueLineRule_PickCamera_SpeakingActorEvent.hpp"
UDialogueLineRule_PickCamera_SpeakingActorEvent* UDialogueLineRule_PickCamera_SpeakingActorEvent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DialogueLineRule_PickCamera_SpeakingActorEvent");
    return (UDialogueLineRule_PickCamera_SpeakingActorEvent*)res;
}
