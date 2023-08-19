#include "ECustomInterpType\Type.hpp"
#include "FVector.hpp"
#include "URootMotionModifierProperties.hpp"
#include "URootMotionModifierProperties_Telescope.hpp"
URootMotionModifierProperties_Telescope* URootMotionModifierProperties_Telescope::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RootMotionModifierProperties_Telescope");
    return (URootMotionModifierProperties_Telescope*)res;
}
