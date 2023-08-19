#include "ECustomInterpType\Type.hpp"
#include "URootMotionModifierProperties.hpp"
#include "URootMotionModifierProperties_ButtSlide.hpp"
URootMotionModifierProperties_ButtSlide* URootMotionModifierProperties_ButtSlide::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RootMotionModifierProperties_ButtSlide");
    return (URootMotionModifierProperties_ButtSlide*)res;
}
