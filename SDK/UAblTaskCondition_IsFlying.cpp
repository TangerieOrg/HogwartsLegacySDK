#include "UAblTaskCondition.hpp"
#include "UAblTaskCondition_IsFlying.hpp"
UAblTaskCondition_IsFlying* UAblTaskCondition_IsFlying::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblTaskCondition_IsFlying");
    return (UAblTaskCondition_IsFlying*)res;
}
