#include "URootMotionModifierProperties.hpp"
#include "URootMotionModifierProperties_Shuffle.hpp"
URootMotionModifierProperties_Shuffle* URootMotionModifierProperties_Shuffle::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RootMotionModifierProperties_Shuffle");
    return (URootMotionModifierProperties_Shuffle*)res;
}
