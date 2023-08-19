#include "AFocusTrigger.hpp"
#include "AMirroredFocusTrigger.hpp"
#include "FDialogueConversationReference.hpp"
#include "FVector.hpp"
AMirroredFocusTrigger* AMirroredFocusTrigger::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MirroredFocusTrigger");
    return (AMirroredFocusTrigger*)res;
}
