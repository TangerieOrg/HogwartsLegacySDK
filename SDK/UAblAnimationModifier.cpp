#include "UAblAnimationModifier.hpp"
#include "UObject.hpp"
UAblAnimationModifier* UAblAnimationModifier::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblAnimationModifier");
    return (UAblAnimationModifier*)res;
}
