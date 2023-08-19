#include "AEmitter.hpp"
#include "AEmitterCameraLensEffectBase.hpp"
#include "APlayerCameraManager.hpp"
#include "FTransform.hpp"
#include "UClass.hpp"
#include "UParticleSystem.hpp"
AEmitterCameraLensEffectBase* AEmitterCameraLensEffectBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.EmitterCameraLensEffectBase");
    return (AEmitterCameraLensEffectBase*)res;
}
