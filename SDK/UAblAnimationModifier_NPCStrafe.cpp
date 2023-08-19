#include "UAblAnimationModifier.hpp"
#include "UAblAnimationModifier_NPCStrafe.hpp"
UAblAnimationModifier_NPCStrafe* UAblAnimationModifier_NPCStrafe::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationModifier_NPCStrafe");
    return (UAblAnimationModifier_NPCStrafe*)res;
}
