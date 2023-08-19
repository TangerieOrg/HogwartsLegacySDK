#include "FRotator.hpp"
#include "FVector.hpp"
#include "FWorldFXMaterialOverrideList.hpp"
#include "FWorldFXNiagaraSystemAdvancedOptions.hpp"
#include "FWorldFXSpawnOverridesFinal.hpp"
#include "UNiagaraComponent.hpp"
#include "UWorldFXNiagaraSystemInitializer.hpp"
#include "UWorldFXOctreeFX.hpp"
#include "UWorldFXOctreeFXNiagara.hpp"
UWorldFXOctreeFXNiagara* UWorldFXOctreeFXNiagara::StaticClass() {
    static auto res = find_uobject("Class /Script/WorldFX.WorldFXOctreeFXNiagara");
    return (UWorldFXOctreeFXNiagara*)res;
}
