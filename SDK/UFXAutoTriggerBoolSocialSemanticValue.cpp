#include "SocialSemanticIDs.hpp"
#include "UFXAutoTriggerBool.hpp"
#include "UFXAutoTriggerBoolSocialSemanticValue.hpp"
UFXAutoTriggerBoolSocialSemanticValue* UFXAutoTriggerBoolSocialSemanticValue::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerBoolSocialSemanticValue");
    return (UFXAutoTriggerBoolSocialSemanticValue*)res;
}
