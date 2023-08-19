#include "URootMotionModifier.hpp"
#include "URootMotionModifier_Dueling.hpp"
URootMotionModifier_Dueling* URootMotionModifier_Dueling::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RootMotionModifier_Dueling");
    return (URootMotionModifier_Dueling*)res;
}
