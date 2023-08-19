#include "USceneActionState_ParticleSystemActivation.hpp"
#include "USceneRigObjectActionState.hpp"
USceneActionState_ParticleSystemActivation* USceneActionState_ParticleSystemActivation::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneActionState_ParticleSystemActivation");
    return (USceneActionState_ParticleSystemActivation*)res;
}
