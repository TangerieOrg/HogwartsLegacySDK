#include "FKIKBone.hpp"
#include "UAblAnimationModifier.hpp"
#include "UAblAnimationModifier_SpeedWarping.hpp"
UAblAnimationModifier_SpeedWarping* UAblAnimationModifier_SpeedWarping::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblAnimationModifier_SpeedWarping");
    return (UAblAnimationModifier_SpeedWarping*)res;
}
