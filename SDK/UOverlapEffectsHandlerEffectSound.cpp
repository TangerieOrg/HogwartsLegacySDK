#include "UAkAudioEvent.hpp"
#include "UOverlapEffectsHandlerEffect.hpp"
#include "UOverlapEffectsHandlerEffectSound.hpp"
UOverlapEffectsHandlerEffectSound* UOverlapEffectsHandlerEffectSound::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.OverlapEffectsHandlerEffectSound");
    return (UOverlapEffectsHandlerEffectSound*)res;
}
