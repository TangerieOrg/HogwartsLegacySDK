#include "URagdollBehaviorBase.hpp"
#include "URagdollRecoveryAssistBehavior.hpp"
#include "URagdollRecoveryAssistPlugin.hpp"
URagdollRecoveryAssistBehavior* URagdollRecoveryAssistBehavior::StaticClass() {
    static auto res = find_uobject("Class /Script/Ragdoll.RagdollRecoveryAssistBehavior");
    return (URagdollRecoveryAssistBehavior*)res;
}
