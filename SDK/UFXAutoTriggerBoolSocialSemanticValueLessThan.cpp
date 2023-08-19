#include "UFXAutoTriggerBoolSocialSemanticValue.hpp"
#include "UFXAutoTriggerBoolSocialSemanticValueLessThan.hpp"
UFXAutoTriggerBoolSocialSemanticValueLessThan* UFXAutoTriggerBoolSocialSemanticValueLessThan::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerBoolSocialSemanticValueLessThan");
    return (UFXAutoTriggerBoolSocialSemanticValueLessThan*)res;
}
