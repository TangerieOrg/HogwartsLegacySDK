#include "UObject.hpp"
#include "UOverlapEffectsHandlerEffect.hpp"
UOverlapEffectsHandlerEffect* UOverlapEffectsHandlerEffect::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.OverlapEffectsHandlerEffect");
    return (UOverlapEffectsHandlerEffect*)res;
}
