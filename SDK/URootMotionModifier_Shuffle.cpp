#include "URootMotionModifier.hpp"
#include "URootMotionModifier_Shuffle.hpp"
URootMotionModifier_Shuffle* URootMotionModifier_Shuffle::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RootMotionModifier_Shuffle");
    return (URootMotionModifier_Shuffle*)res;
}
