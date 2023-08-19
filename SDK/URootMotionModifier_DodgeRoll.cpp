#include "URootMotionModifier.hpp"
#include "URootMotionModifier_DodgeRoll.hpp"
URootMotionModifier_DodgeRoll* URootMotionModifier_DodgeRoll::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RootMotionModifier_DodgeRoll");
    return (URootMotionModifier_DodgeRoll*)res;
}
