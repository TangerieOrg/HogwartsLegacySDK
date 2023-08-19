#include "URootMotionModifier.hpp"
#include "URootMotionModifier_InterpToStop.hpp"
URootMotionModifier_InterpToStop* URootMotionModifier_InterpToStop::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RootMotionModifier_InterpToStop");
    return (URootMotionModifier_InterpToStop*)res;
}
