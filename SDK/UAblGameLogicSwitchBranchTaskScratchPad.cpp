#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblGameLogicSwitchBranchTaskScratchPad.hpp"
#include "UClass.hpp"
#include "UGameLogicBoolBase.hpp"
UAblGameLogicSwitchBranchTaskScratchPad* UAblGameLogicSwitchBranchTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblGameLogicSwitchBranchTaskScratchPad");
    return (UAblGameLogicSwitchBranchTaskScratchPad*)res;
}
