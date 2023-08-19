#include "UAblAnimationModifier.hpp"
#include "UAblAnimationModifier_QuadrupedSpine.hpp"
UAblAnimationModifier_QuadrupedSpine* UAblAnimationModifier_QuadrupedSpine::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationModifier_QuadrupedSpine");
    return (UAblAnimationModifier_QuadrupedSpine*)res;
}
