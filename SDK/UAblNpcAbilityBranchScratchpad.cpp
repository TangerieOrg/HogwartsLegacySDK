#include "UAblConditionalBranchScratchpad.hpp"
#include "UAblNpcAbilityBranchScratchpad.hpp"
UAblNpcAbilityBranchScratchpad* UAblNpcAbilityBranchScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblNpcAbilityBranchScratchpad");
    return (UAblNpcAbilityBranchScratchpad*)res;
}
