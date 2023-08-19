#include "FDialogueConversationReference.hpp"
#include "UAnimNotify.hpp"
#include "UAnimNotify_RiderDialogue.hpp"
UAnimNotify_RiderDialogue* UAnimNotify_RiderDialogue::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AnimNotify_RiderDialogue");
    return (UAnimNotify_RiderDialogue*)res;
}
