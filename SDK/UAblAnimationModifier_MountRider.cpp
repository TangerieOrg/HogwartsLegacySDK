#include "UAblAnimationModifier.hpp"
#include "UAblAnimationModifier_MountRider.hpp"
UAblAnimationModifier_MountRider* UAblAnimationModifier_MountRider::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationModifier_MountRider");
    return (UAblAnimationModifier_MountRider*)res;
}
