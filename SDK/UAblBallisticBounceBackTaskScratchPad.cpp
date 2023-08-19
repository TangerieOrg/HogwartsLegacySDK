#include "FVector.hpp"
#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblBallisticBounceBackTaskScratchPad.hpp"
UAblBallisticBounceBackTaskScratchPad* UAblBallisticBounceBackTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblBallisticBounceBackTaskScratchPad");
    return (UAblBallisticBounceBackTaskScratchPad*)res;
}
