#include "URootMotionModifier.hpp"
#include "URootMotionModifier_StopAtEdge.hpp"
URootMotionModifier_StopAtEdge* URootMotionModifier_StopAtEdge::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RootMotionModifier_StopAtEdge");
    return (URootMotionModifier_StopAtEdge*)res;
}
