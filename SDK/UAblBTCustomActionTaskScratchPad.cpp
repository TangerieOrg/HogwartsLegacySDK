#include "FBTCustomActionTaskEntry.hpp"
#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblBTCustomActionTaskScratchPad.hpp"
UAblBTCustomActionTaskScratchPad* UAblBTCustomActionTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblBTCustomActionTaskScratchPad");
    return (UAblBTCustomActionTaskScratchPad*)res;
}
