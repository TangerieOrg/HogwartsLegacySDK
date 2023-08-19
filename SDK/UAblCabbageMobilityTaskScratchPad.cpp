#include "FVector.hpp"
#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblCabbageMobilityTaskScratchPad.hpp"
UAblCabbageMobilityTaskScratchPad* UAblCabbageMobilityTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblCabbageMobilityTaskScratchPad");
    return (UAblCabbageMobilityTaskScratchPad*)res;
}
