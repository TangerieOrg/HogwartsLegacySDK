#include "FVector.hpp"
#include "URootMotionModifier.hpp"
#include "URootMotionModifier_Slide.hpp"
URootMotionModifier_Slide* URootMotionModifier_Slide::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RootMotionModifier_Slide");
    return (URootMotionModifier_Slide*)res;
}
