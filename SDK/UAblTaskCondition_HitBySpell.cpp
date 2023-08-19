#include "UAblTaskCondition.hpp"
#include "UAblTaskCondition_HitBySpell.hpp"
UAblTaskCondition_HitBySpell* UAblTaskCondition_HitBySpell::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblTaskCondition_HitBySpell");
    return (UAblTaskCondition_HitBySpell*)res;
}
