#include "UAblAbilityBaseScratchPad.hpp"
#include "UAblNPCAbilityScratchPad.hpp"
UAblNPCAbilityScratchPad* UAblNPCAbilityScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblNPCAbilityScratchPad");
    return (UAblNPCAbilityScratchPad*)res;
}
