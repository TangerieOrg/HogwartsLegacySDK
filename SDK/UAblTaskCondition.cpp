#include "UAblTaskCondition.hpp"
#include "UObject.hpp"
UAblTaskCondition* UAblTaskCondition::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblTaskCondition");
    return (UAblTaskCondition*)res;
}
