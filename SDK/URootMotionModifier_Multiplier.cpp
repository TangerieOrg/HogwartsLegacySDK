#include "URootMotionModifier.hpp"
#include "URootMotionModifier_Multiplier.hpp"
URootMotionModifier_Multiplier* URootMotionModifier_Multiplier::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RootMotionModifier_Multiplier");
    return (URootMotionModifier_Multiplier*)res;
}
