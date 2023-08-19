#include "URootMotionModifierProperties.hpp"
#include "URootMotionModifierProperties_Dueling.hpp"
URootMotionModifierProperties_Dueling* URootMotionModifierProperties_Dueling::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RootMotionModifierProperties_Dueling");
    return (URootMotionModifierProperties_Dueling*)res;
}
