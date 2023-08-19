#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblRayCastQueryTaskScratchPad.hpp"
UAblRayCastQueryTaskScratchPad* UAblRayCastQueryTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblRayCastQueryTaskScratchPad");
    return (UAblRayCastQueryTaskScratchPad*)res;
}
