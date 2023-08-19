#include "URootMotionModifierUltimate.hpp"
#include "URootMotionModifierUltimate_SplineLock.hpp"
URootMotionModifierUltimate_SplineLock* URootMotionModifierUltimate_SplineLock::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RootMotionModifierUltimate_SplineLock");
    return (URootMotionModifierUltimate_SplineLock*)res;
}
