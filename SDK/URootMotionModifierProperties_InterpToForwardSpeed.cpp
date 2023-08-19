#include "ERootMotModDesiredSpeed\Type.hpp"
#include "URootMotionModifierProperties.hpp"
#include "URootMotionModifierProperties_InterpToForwardSpeed.hpp"
URootMotionModifierProperties_InterpToForwardSpeed* URootMotionModifierProperties_InterpToForwardSpeed::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RootMotionModifierProperties_InterpToForwardSpeed");
    return (URootMotionModifierProperties_InterpToForwardSpeed*)res;
}
