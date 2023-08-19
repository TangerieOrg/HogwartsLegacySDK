#include "UClass.hpp"
#include "ULocalStencilEffectDelegatedActorOverrideClassAndMaterial.hpp"
#include "ULocalStencilEffectDelegatedActorOverrideFiltered.hpp"
#include "UMaterialInterface.hpp"
ULocalStencilEffectDelegatedActorOverrideClassAndMaterial* ULocalStencilEffectDelegatedActorOverrideClassAndMaterial::StaticClass() {
    static auto res = find_uobject("Class /Script/StencilManager.LocalStencilEffectDelegatedActorOverrideClassAndMaterial");
    return (ULocalStencilEffectDelegatedActorOverrideClassAndMaterial*)res;
}
