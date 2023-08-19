#include "FKey.hpp"
#include "UAblAbility.hpp"
#include "UAblAbilityEventScratchPad.hpp"
#include "UAblBranchEventScratchPad.hpp"
UAblBranchEventScratchPad* UAblBranchEventScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblBranchEventScratchPad");
    return (UAblBranchEventScratchPad*)res;
}
