#include "UAblAbilityTaskScratchPad.hpp"
#include "UablDragonMobilityTaskScratchPad.hpp"
UablDragonMobilityTaskScratchPad* UablDragonMobilityTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablDragonMobilityTaskScratchPad");
    return (UablDragonMobilityTaskScratchPad*)res;
}
