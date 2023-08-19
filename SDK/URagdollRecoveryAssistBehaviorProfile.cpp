#include "UDataAsset.hpp"
#include "URagdollRecoveryAssistBehavior.hpp"
#include "URagdollRecoveryAssistBehaviorProfile.hpp"
URagdollRecoveryAssistBehaviorProfile* URagdollRecoveryAssistBehaviorProfile::StaticClass() {
    static auto res = find_uobject("Class /Script/Ragdoll.RagdollRecoveryAssistBehaviorProfile");
    return (URagdollRecoveryAssistBehaviorProfile*)res;
}
