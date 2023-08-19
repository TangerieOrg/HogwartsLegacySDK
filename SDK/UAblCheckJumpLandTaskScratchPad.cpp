#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblCheckJumpLandTaskScratchPad.hpp"
UAblCheckJumpLandTaskScratchPad* UAblCheckJumpLandTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblCheckJumpLandTaskScratchPad");
    return (UAblCheckJumpLandTaskScratchPad*)res;
}
