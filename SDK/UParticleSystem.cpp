#include "EParticleSignificanceLevel.hpp"
#include "EParticleSystemInsignificanceReaction.hpp"
#include "EParticleSystemOcclusionBoundsMethod.hpp"
#include "EParticleSystemUpdateMode.hpp"
#include "FBox.hpp"
#include "FLODSoloTrack.hpp"
#include "FNamedEmitterMaterial.hpp"
#include "FParticleSystemLOD.hpp"
#include "FVector.hpp"
#include "ParticleSystemLODMethod.hpp"
#include "UClass.hpp"
#include "UFXSystemAsset.hpp"
#include "UFunction.hpp"
#include "UInterpCurveEdSetup.hpp"
#include "UParticleEmitter.hpp"
#include "UParticleSystem.hpp"
#include "UParticleSystemComponent.hpp"
bool UParticleSystem::ContainsEmitterType(UClass* TypeData) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.ParticleSystem.ContainsEmitterType"));
    struct Params_ContainsEmitterType {
        UClass* TypeData; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_ContainsEmitterType params{};
    params.TypeData = (UClass*)TypeData;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UParticleSystem* UParticleSystem::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ParticleSystem");
    return (UParticleSystem*)res;
}
