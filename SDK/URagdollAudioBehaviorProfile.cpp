#include "FRagdollAudioBehaviorLayer.hpp"
#include "UDataAsset.hpp"
#include "URagdollAudioBehaviorProfile.hpp"
URagdollAudioBehaviorProfile* URagdollAudioBehaviorProfile::StaticClass() {
    static auto res = find_uobject("Class /Script/Ragdoll.RagdollAudioBehaviorProfile");
    return (URagdollAudioBehaviorProfile*)res;
}
