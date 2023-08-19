#include "FOverlapEffectsHandlerInstancedFoliageBVHTestEntry.hpp"
#include "UOverlapEffectsHandlerInstancedFoliageBVHTest.hpp"
#include "UOverlapEffectsHandlerMinimumSpeedBase.hpp"
UOverlapEffectsHandlerInstancedFoliageBVHTest* UOverlapEffectsHandlerInstancedFoliageBVHTest::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.OverlapEffectsHandlerInstancedFoliageBVHTest");
    return (UOverlapEffectsHandlerInstancedFoliageBVHTest*)res;
}
