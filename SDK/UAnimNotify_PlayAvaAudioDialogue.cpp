#include "FDialogueConversationReference.hpp"
#include "UAnimNotify.hpp"
#include "UAnimNotify_PlayAvaAudioDialogue.hpp"
#include "UAvaAudioDialogueEvent.hpp"
UAnimNotify_PlayAvaAudioDialogue* UAnimNotify_PlayAvaAudioDialogue::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AnimNotify_PlayAvaAudioDialogue");
    return (UAnimNotify_PlayAvaAudioDialogue*)res;
}
