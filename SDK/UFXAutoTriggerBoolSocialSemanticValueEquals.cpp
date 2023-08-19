#include "UFXAutoTriggerBoolSocialSemanticValue.hpp"
#include "UFXAutoTriggerBoolSocialSemanticValueEquals.hpp"
UFXAutoTriggerBoolSocialSemanticValueEquals* UFXAutoTriggerBoolSocialSemanticValueEquals::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerBoolSocialSemanticValueEquals");
    return (UFXAutoTriggerBoolSocialSemanticValueEquals*)res;
}
