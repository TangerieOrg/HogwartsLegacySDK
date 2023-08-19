#include "ECustomInterpType\Type.hpp"
#include "URootMotionModifierProperties.hpp"
#include "URootMotionModifierProperties_InterpToStop.hpp"
URootMotionModifierProperties_InterpToStop* URootMotionModifierProperties_InterpToStop::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RootMotionModifierProperties_InterpToStop");
    return (URootMotionModifierProperties_InterpToStop*)res;
}
