#include "EOverlapEffectsAttachment.hpp"
#include "FMultiFX2Handle.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UMultiFX2Asset.hpp"
#include "UOverlapEffectsHandlerEffect.hpp"
#include "UOverlapEffectsHandlerEffectMultiFX.hpp"
UOverlapEffectsHandlerEffectMultiFX* UOverlapEffectsHandlerEffectMultiFX::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.OverlapEffectsHandlerEffectMultiFX");
    return (UOverlapEffectsHandlerEffectMultiFX*)res;
}
