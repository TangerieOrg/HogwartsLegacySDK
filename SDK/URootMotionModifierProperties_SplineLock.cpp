#include "ECustomInterpType\Type.hpp"
#include "URootMotionModifierProperties.hpp"
#include "URootMotionModifierProperties_SplineLock.hpp"
URootMotionModifierProperties_SplineLock* URootMotionModifierProperties_SplineLock::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RootMotionModifierProperties_SplineLock");
    return (URootMotionModifierProperties_SplineLock*)res;
}
