#include "EParticleSystemActivation.hpp"
#include "USceneAction_ParticleSystemActivation.hpp"
#include "USceneRigObjectActionBase.hpp"
USceneAction_ParticleSystemActivation* USceneAction_ParticleSystemActivation::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneAction_ParticleSystemActivation");
    return (USceneAction_ParticleSystemActivation*)res;
}
