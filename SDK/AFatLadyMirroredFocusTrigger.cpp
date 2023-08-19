#include "AFatLadyMirroredFocusTrigger.hpp"
#include "AMirroredFocusTrigger.hpp"
#include "FDialogueConversationReference.hpp"
AFatLadyMirroredFocusTrigger* AFatLadyMirroredFocusTrigger::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FatLadyMirroredFocusTrigger");
    return (AFatLadyMirroredFocusTrigger*)res;
}
