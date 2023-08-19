#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblPlayMultiFxAssetScratchpad.hpp"
#include "UAblTaskConditionScratchpad.hpp"
UAblPlayMultiFxAssetScratchpad* UAblPlayMultiFxAssetScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblPlayMultiFxAssetScratchpad");
    return (UAblPlayMultiFxAssetScratchpad*)res;
}
