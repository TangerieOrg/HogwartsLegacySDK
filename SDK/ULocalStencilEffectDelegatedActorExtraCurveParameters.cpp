#include "FLocalStencilEffectColorCurve.hpp"
#include "FLocalStencilEffectScalarCurve.hpp"
#include "ULocalStencilEffectDelegatedActorExtraCurveParameters.hpp"
#include "ULocalStencilEffectDelegatedActorOverrideFiltered.hpp"
ULocalStencilEffectDelegatedActorExtraCurveParameters* ULocalStencilEffectDelegatedActorExtraCurveParameters::StaticClass() {
    static auto res = find_uobject("Class /Script/StencilManager.LocalStencilEffectDelegatedActorExtraCurveParameters");
    return (ULocalStencilEffectDelegatedActorExtraCurveParameters*)res;
}
