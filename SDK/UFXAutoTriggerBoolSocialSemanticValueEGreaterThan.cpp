#include "UFXAutoTriggerBoolSocialSemanticValue.hpp"
#include "UFXAutoTriggerBoolSocialSemanticValueEGreaterThan.hpp"
UFXAutoTriggerBoolSocialSemanticValueEGreaterThan* UFXAutoTriggerBoolSocialSemanticValueEGreaterThan::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerBoolSocialSemanticValueEGreaterThan");
    return (UFXAutoTriggerBoolSocialSemanticValueEGreaterThan*)res;
}
