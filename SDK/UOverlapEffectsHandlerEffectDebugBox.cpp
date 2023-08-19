#include "EOverlapEffectsAttachment.hpp"
#include "FColor.hpp"
#include "UOverlapEffectsHandlerEffect.hpp"
#include "UOverlapEffectsHandlerEffectDebugBox.hpp"
UOverlapEffectsHandlerEffectDebugBox* UOverlapEffectsHandlerEffectDebugBox::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.OverlapEffectsHandlerEffectDebugBox");
    return (UOverlapEffectsHandlerEffectDebugBox*)res;
}
