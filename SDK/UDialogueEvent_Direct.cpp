#include "FDialogueConversationReference.hpp"
#include "UDialogueEventProvider.hpp"
#include "UDialogueEvent_Direct.hpp"
UDialogueEvent_Direct* UDialogueEvent_Direct::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DialogueEvent_Direct");
    return (UDialogueEvent_Direct*)res;
}
