#include "UOverlapEffectsHandlerEffect.hpp"
#include "UOverlapEffectsHandlerInstancedFoliageOverlap.hpp"
#include "UOverlapEffectsHandlerMinimumSpeedBase.hpp"
UOverlapEffectsHandlerInstancedFoliageOverlap* UOverlapEffectsHandlerInstancedFoliageOverlap::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.OverlapEffectsHandlerInstancedFoliageOverlap");
    return (UOverlapEffectsHandlerInstancedFoliageOverlap*)res;
}
