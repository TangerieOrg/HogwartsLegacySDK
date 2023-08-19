#include "UAblAbilityBaseScratchPad.hpp"
#include "UAblAbilityChannelingScratchPad.hpp"
UAblAbilityChannelingScratchPad* UAblAbilityChannelingScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblAbilityChannelingScratchPad");
    return (UAblAbilityChannelingScratchPad*)res;
}
