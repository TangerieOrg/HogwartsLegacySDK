#include "URootMotionModifier.hpp"
#include "URootMotionModifier_Telescope.hpp"
URootMotionModifier_Telescope* URootMotionModifier_Telescope::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RootMotionModifier_Telescope");
    return (URootMotionModifier_Telescope*)res;
}
