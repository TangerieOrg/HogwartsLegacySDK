#include "UOverlapEffectsHandlerActorClassOverlap.hpp"
#include "UOverlapEffectsHandlerEffect.hpp"
#include "UOverlapEffectsHandlerMinimumSpeedBase.hpp"
UOverlapEffectsHandlerActorClassOverlap* UOverlapEffectsHandlerActorClassOverlap::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.OverlapEffectsHandlerActorClassOverlap");
    return (UOverlapEffectsHandlerActorClassOverlap*)res;
}
