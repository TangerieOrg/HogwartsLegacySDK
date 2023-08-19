#include "UCurveFloat.hpp"
#include "URagdollRecoveryAssistPlugin.hpp"
#include "URagdollRecoveryAssistPlugin_GuideToSafeRecovery.hpp"
URagdollRecoveryAssistPlugin_GuideToSafeRecovery* URagdollRecoveryAssistPlugin_GuideToSafeRecovery::StaticClass() {
    static auto res = find_uobject("Class /Script/Ragdoll.RagdollRecoveryAssistPlugin_GuideToSafeRecovery");
    return (URagdollRecoveryAssistPlugin_GuideToSafeRecovery*)res;
}
