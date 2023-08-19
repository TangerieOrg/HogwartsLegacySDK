#include "UAblTaskConditionScratchpad.hpp"
#include "UAblTaskConditionScratchpad_HitBySpell.hpp"
UAblTaskConditionScratchpad_HitBySpell* UAblTaskConditionScratchpad_HitBySpell::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblTaskConditionScratchpad_HitBySpell");
    return (UAblTaskConditionScratchpad_HitBySpell*)res;
}
