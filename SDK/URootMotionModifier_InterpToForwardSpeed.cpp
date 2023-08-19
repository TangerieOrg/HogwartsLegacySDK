#include "URootMotionModifier.hpp"
#include "URootMotionModifier_InterpToForwardSpeed.hpp"
URootMotionModifier_InterpToForwardSpeed* URootMotionModifier_InterpToForwardSpeed::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RootMotionModifier_InterpToForwardSpeed");
    return (URootMotionModifier_InterpToForwardSpeed*)res;
}
