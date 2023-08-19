#include "ULocalStencilEffectDelegatedActorOverrideBottomFade.hpp"
#include "ULocalStencilEffectDelegatedActorOverrideFiltered.hpp"
#include "UMaterialInterface.hpp"
ULocalStencilEffectDelegatedActorOverrideBottomFade* ULocalStencilEffectDelegatedActorOverrideBottomFade::StaticClass() {
    static auto res = find_uobject("Class /Script/StencilManager.LocalStencilEffectDelegatedActorOverrideBottomFade");
    return (ULocalStencilEffectDelegatedActorOverrideBottomFade*)res;
}
