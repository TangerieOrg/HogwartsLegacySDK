#include "FRagdollGetupOptions.hpp"
#include "FRagdollPoseState.hpp"
#include "UDataAsset.hpp"
#include "URagdollAudioBehaviorProfile.hpp"
#include "URagdollBehaviorConfigAsset.hpp"
#include "URagdollBehaviorProfile.hpp"
#include "URagdollRecoveryAssistBehaviorProfile.hpp"
URagdollBehaviorConfigAsset* URagdollBehaviorConfigAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/Ragdoll.RagdollBehaviorConfigAsset");
    return (URagdollBehaviorConfigAsset*)res;
}
