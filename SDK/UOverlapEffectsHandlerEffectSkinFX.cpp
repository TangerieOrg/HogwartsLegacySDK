#include "EOverlapEffectsAttachment.hpp"
#include "UClass.hpp"
#include "UOverlapEffectsHandlerEffect.hpp"
#include "UOverlapEffectsHandlerEffectSkinFX.hpp"
UOverlapEffectsHandlerEffectSkinFX* UOverlapEffectsHandlerEffectSkinFX::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.OverlapEffectsHandlerEffectSkinFX");
    return (UOverlapEffectsHandlerEffectSkinFX*)res;
}
