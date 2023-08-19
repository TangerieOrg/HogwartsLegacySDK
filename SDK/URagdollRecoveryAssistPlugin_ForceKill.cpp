#include "URagdollRecoveryAssistPlugin.hpp"
#include "URagdollRecoveryAssistPlugin_ForceKill.hpp"
URagdollRecoveryAssistPlugin_ForceKill* URagdollRecoveryAssistPlugin_ForceKill::StaticClass() {
    static auto res = find_uobject("Class /Script/Ragdoll.RagdollRecoveryAssistPlugin_ForceKill");
    return (URagdollRecoveryAssistPlugin_ForceKill*)res;
}
