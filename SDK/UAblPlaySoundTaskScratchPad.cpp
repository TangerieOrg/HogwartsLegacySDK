#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblPlaySoundTaskScratchPad.hpp"
UAblPlaySoundTaskScratchPad* UAblPlaySoundTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblPlaySoundTaskScratchPad");
    return (UAblPlaySoundTaskScratchPad*)res;
}
