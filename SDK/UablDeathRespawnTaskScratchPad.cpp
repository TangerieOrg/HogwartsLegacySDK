#include "UAblAbilityTaskScratchPad.hpp"
#include "UablDeathRespawnTaskScratchPad.hpp"
UablDeathRespawnTaskScratchPad* UablDeathRespawnTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablDeathRespawnTaskScratchPad");
    return (UablDeathRespawnTaskScratchPad*)res;
}
