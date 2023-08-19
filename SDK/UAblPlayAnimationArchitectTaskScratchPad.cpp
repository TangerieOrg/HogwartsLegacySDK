#include "AActor.hpp"
#include "FAlphaBlend.hpp"
#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblPlayAnimationArchitectTaskScratchPad.hpp"
#include "UAnimationAsset.hpp"
UAblPlayAnimationArchitectTaskScratchPad* UAblPlayAnimationArchitectTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblPlayAnimationArchitectTaskScratchPad");
    return (UAblPlayAnimationArchitectTaskScratchPad*)res;
}
