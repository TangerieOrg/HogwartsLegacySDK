#include "FRotator.hpp"
#include "FVector.hpp"
#include "FWorldFXCascadeSystemAdvancedOptions.hpp"
#include "FWorldFXMaterialOverrideList.hpp"
#include "FWorldFXSpawnOverridesFinal.hpp"
#include "UParticleSystemComponent.hpp"
#include "UWorldFXCascadeInstanceParametersBase.hpp"
#include "UWorldFXOctreeFX.hpp"
#include "UWorldFXOctreeFXCascade.hpp"
UWorldFXOctreeFXCascade* UWorldFXOctreeFXCascade::StaticClass() {
    static auto res = find_uobject("Class /Script/WorldFX.WorldFXOctreeFXCascade");
    return (UWorldFXOctreeFXCascade*)res;
}
