#include "UAblAbilityTaskScratchPad.hpp"
#include "UablAllowWalkOffLedgesTaskScratchPad.hpp"
UablAllowWalkOffLedgesTaskScratchPad* UablAllowWalkOffLedgesTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablAllowWalkOffLedgesTaskScratchPad");
    return (UablAllowWalkOffLedgesTaskScratchPad*)res;
}
