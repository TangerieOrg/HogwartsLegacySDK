#include "UOverlapEffectsHandlerMinimumSpeedBase.hpp"
#include "UOverlapEffectsHandlerWithConditions.hpp"
UOverlapEffectsHandlerMinimumSpeedBase* UOverlapEffectsHandlerMinimumSpeedBase::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.OverlapEffectsHandlerMinimumSpeedBase");
    return (UOverlapEffectsHandlerMinimumSpeedBase*)res;
}
