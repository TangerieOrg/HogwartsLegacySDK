#include "UAblAbilityBaseScratchPad.hpp"
#include "UObject.hpp"
UAblAbilityBaseScratchPad* UAblAbilityBaseScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblAbilityBaseScratchPad");
    return (UAblAbilityBaseScratchPad*)res;
}
