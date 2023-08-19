#include "FVector.hpp"
#include "URootMotionModifier.hpp"
#include "URootMotionModifier_ButtSlide.hpp"
URootMotionModifier_ButtSlide* URootMotionModifier_ButtSlide::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RootMotionModifier_ButtSlide");
    return (URootMotionModifier_ButtSlide*)res;
}
