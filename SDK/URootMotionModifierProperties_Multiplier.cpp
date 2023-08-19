#include "EMultiplierType.hpp"
#include "URootMotionModifierProperties.hpp"
#include "URootMotionModifierProperties_Multiplier.hpp"
URootMotionModifierProperties_Multiplier* URootMotionModifierProperties_Multiplier::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RootMotionModifierProperties_Multiplier");
    return (URootMotionModifierProperties_Multiplier*)res;
}
