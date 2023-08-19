#include "FVector2D.hpp"
#include "SocialSemanticIDs.hpp"
#include "UFXAutoTriggerScalar.hpp"
#include "UFXAutoTriggerScalarSocialSemanticRemap.hpp"
UFXAutoTriggerScalarSocialSemanticRemap* UFXAutoTriggerScalarSocialSemanticRemap::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXAutoTriggerScalarSocialSemanticRemap");
    return (UFXAutoTriggerScalarSocialSemanticRemap*)res;
}
