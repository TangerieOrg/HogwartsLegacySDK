#include "UObject.hpp"
#include "URagdollRecoveryAssistPlugin.hpp"
URagdollRecoveryAssistPlugin* URagdollRecoveryAssistPlugin::StaticClass() {
    static auto res = find_uobject("Class /Script/Ragdoll.RagdollRecoveryAssistPlugin");
    return (URagdollRecoveryAssistPlugin*)res;
}
