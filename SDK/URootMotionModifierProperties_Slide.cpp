#include "ECustomInterpType\Type.hpp"
#include "URootMotionModifierProperties.hpp"
#include "URootMotionModifierProperties_Slide.hpp"
URootMotionModifierProperties_Slide* URootMotionModifierProperties_Slide::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RootMotionModifierProperties_Slide");
    return (URootMotionModifierProperties_Slide*)res;
}
