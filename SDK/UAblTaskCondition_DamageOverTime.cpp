#include "UAblTaskCondition.hpp"
#include "UAblTaskCondition_DamageOverTime.hpp"
UAblTaskCondition_DamageOverTime* UAblTaskCondition_DamageOverTime::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblTaskCondition_DamageOverTime");
    return (UAblTaskCondition_DamageOverTime*)res;
}
