#include "SocialSemanticIDs.hpp"
#include "UFXAutoTriggerScalar.hpp"
#include "UFXAutoTriggerScalarSocialSemanticValue.hpp"
UFXAutoTriggerScalarSocialSemanticValue* UFXAutoTriggerScalarSocialSemanticValue::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerScalarSocialSemanticValue");
    return (UFXAutoTriggerScalarSocialSemanticValue*)res;
}
