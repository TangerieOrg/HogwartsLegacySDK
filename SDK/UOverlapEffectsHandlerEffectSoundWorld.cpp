#include "EOverlapEffectsHitPoint.hpp"
#include "UOverlapEffectsHandlerEffectSound.hpp"
#include "UOverlapEffectsHandlerEffectSoundWorld.hpp"
UOverlapEffectsHandlerEffectSoundWorld* UOverlapEffectsHandlerEffectSoundWorld::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.OverlapEffectsHandlerEffectSoundWorld");
    return (UOverlapEffectsHandlerEffectSoundWorld*)res;
}
