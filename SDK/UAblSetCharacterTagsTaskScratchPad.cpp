#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblSetCharacterTagsTaskScratchPad.hpp"
#include "UAblTaskConditionScratchpad.hpp"
UAblSetCharacterTagsTaskScratchPad* UAblSetCharacterTagsTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblSetCharacterTagsTaskScratchPad");
    return (UAblSetCharacterTagsTaskScratchPad*)res;
}
