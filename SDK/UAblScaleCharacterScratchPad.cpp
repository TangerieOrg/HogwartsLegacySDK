#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblScaleCharacterScratchPad.hpp"
UAblScaleCharacterScratchPad* UAblScaleCharacterScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblScaleCharacterScratchPad");
    return (UAblScaleCharacterScratchPad*)res;
}
