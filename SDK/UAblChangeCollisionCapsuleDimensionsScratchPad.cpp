#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblChangeCollisionCapsuleDimensionsScratchPad.hpp"
UAblChangeCollisionCapsuleDimensionsScratchPad* UAblChangeCollisionCapsuleDimensionsScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblChangeCollisionCapsuleDimensionsScratchPad");
    return (UAblChangeCollisionCapsuleDimensionsScratchPad*)res;
}
