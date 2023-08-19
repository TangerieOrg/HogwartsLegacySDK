#include "EOverlapEffectsHitPoint.hpp"
#include "FColor.hpp"
#include "UOverlapEffectsHandlerEffect.hpp"
#include "UOverlapEffectsHandlerEffectDebugHitPoint.hpp"
UOverlapEffectsHandlerEffectDebugHitPoint* UOverlapEffectsHandlerEffectDebugHitPoint::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.OverlapEffectsHandlerEffectDebugHitPoint");
    return (UOverlapEffectsHandlerEffectDebugHitPoint*)res;
}
