#include "EPhysicalSurface.hpp"
#include "UOverlapEffectsHandlerActorClassHit.hpp"
#include "UOverlapEffectsHandlerEffect.hpp"
#include "UOverlapEffectsHandlerMinimumSpeedBase.hpp"
UOverlapEffectsHandlerActorClassHit* UOverlapEffectsHandlerActorClassHit::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.OverlapEffectsHandlerActorClassHit");
    return (UOverlapEffectsHandlerActorClassHit*)res;
}
