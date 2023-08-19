#include "FSkinFXAutoTriggerEffectInfo.hpp"
#include "FVector2D.hpp"
#include "SocialSemanticIDs.hpp"
#include "USkinFXAutoTriggerDriver.hpp"
#include "USkinFXAutoTriggerDriverSocialSemantic.hpp"
USkinFXAutoTriggerDriverSocialSemantic* USkinFXAutoTriggerDriverSocialSemantic::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SkinFXAutoTriggerDriverSocialSemantic");
    return (USkinFXAutoTriggerDriverSocialSemantic*)res;
}
