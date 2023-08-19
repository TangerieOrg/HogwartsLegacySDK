#include "UAblAnimationModifier.hpp"
#include "UAblAnimationModifier_Flight.hpp"
UAblAnimationModifier_Flight* UAblAnimationModifier_Flight::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationModifier_Flight");
    return (UAblAnimationModifier_Flight*)res;
}
