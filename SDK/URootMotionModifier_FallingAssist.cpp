#include "FVector.hpp"
#include "URootMotionModifier.hpp"
#include "URootMotionModifier_FallingAssist.hpp"
URootMotionModifier_FallingAssist* URootMotionModifier_FallingAssist::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RootMotionModifier_FallingAssist");
    return (URootMotionModifier_FallingAssist*)res;
}
