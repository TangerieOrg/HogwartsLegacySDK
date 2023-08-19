#include "EOverlapEffectsAttachment.hpp"
#include "UOverlapEffectsHandlerEffectSound.hpp"
#include "UOverlapEffectsHandlerEffectSoundAttached.hpp"
UOverlapEffectsHandlerEffectSoundAttached* UOverlapEffectsHandlerEffectSoundAttached::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.OverlapEffectsHandlerEffectSoundAttached");
    return (UOverlapEffectsHandlerEffectSoundAttached*)res;
}
