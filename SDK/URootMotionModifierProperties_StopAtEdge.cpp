#include "URootMotionModifierProperties.hpp"
#include "URootMotionModifierProperties_StopAtEdge.hpp"
URootMotionModifierProperties_StopAtEdge* URootMotionModifierProperties_StopAtEdge::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RootMotionModifierProperties_StopAtEdge");
    return (URootMotionModifierProperties_StopAtEdge*)res;
}
