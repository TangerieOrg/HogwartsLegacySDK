#include "EPhysicalSurface.hpp"
#include "UOverlapEffectsHandlerEffect.hpp"
#include "UOverlapEffectsHandlerInstancedFoliageHit.hpp"
#include "UOverlapEffectsHandlerMinimumSpeedBase.hpp"
UOverlapEffectsHandlerInstancedFoliageHit* UOverlapEffectsHandlerInstancedFoliageHit::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.OverlapEffectsHandlerInstancedFoliageHit");
    return (UOverlapEffectsHandlerInstancedFoliageHit*)res;
}
