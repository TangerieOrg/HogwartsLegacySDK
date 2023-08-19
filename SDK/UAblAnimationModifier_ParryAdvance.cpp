#include "UAblAnimationModifier.hpp"
#include "UAblAnimationModifier_ParryAdvance.hpp"
UAblAnimationModifier_ParryAdvance* UAblAnimationModifier_ParryAdvance::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationModifier_ParryAdvance");
    return (UAblAnimationModifier_ParryAdvance*)res;
}
