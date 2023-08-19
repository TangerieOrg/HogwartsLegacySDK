#include "USceneActionState_ParticleSystemTrigger.hpp"
#include "USceneRigObjectActionState.hpp"
USceneActionState_ParticleSystemTrigger* USceneActionState_ParticleSystemTrigger::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneActionState_ParticleSystemTrigger");
    return (USceneActionState_ParticleSystemTrigger*)res;
}
