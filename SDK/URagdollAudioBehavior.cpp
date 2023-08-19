#include "UAvaAudioDialogueEvent.hpp"
#include "URagdollAudioBehavior.hpp"
#include "URagdollBehaviorBase.hpp"
URagdollAudioBehavior* URagdollAudioBehavior::StaticClass() {
    static auto res = find_uobject("Class /Script/Ragdoll.RagdollAudioBehavior");
    return (URagdollAudioBehavior*)res;
}
