#include "USceneAction_ParticleSystemTrigger.hpp"
#include "USceneRigObjectActionBase.hpp"
USceneAction_ParticleSystemTrigger* USceneAction_ParticleSystemTrigger::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneAction_ParticleSystemTrigger");
    return (USceneAction_ParticleSystemTrigger*)res;
}
