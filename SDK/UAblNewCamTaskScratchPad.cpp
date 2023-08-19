#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblNewCamTaskScratchPad.hpp"
UAblNewCamTaskScratchPad* UAblNewCamTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblNewCamTaskScratchPad");
    return (UAblNewCamTaskScratchPad*)res;
}
