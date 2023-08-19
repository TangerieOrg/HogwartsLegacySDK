#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblJumpTaskScratchPad.hpp"
UAblJumpTaskScratchPad* UAblJumpTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblJumpTaskScratchPad");
    return (UAblJumpTaskScratchPad*)res;
}
