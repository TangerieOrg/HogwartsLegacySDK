#include "UOverlapEffectsHandlerEffect.hpp"
#include "UOverlapEffectsHandlerEffectHermes.hpp"
UOverlapEffectsHandlerEffectHermes* UOverlapEffectsHandlerEffectHermes::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.OverlapEffectsHandlerEffectHermes");
    return (UOverlapEffectsHandlerEffectHermes*)res;
}
