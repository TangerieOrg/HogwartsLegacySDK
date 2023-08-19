#include "URootMotionModifierProperties.hpp"
#include "URootMotionModifierProperties_WandCastTranslation.hpp"
URootMotionModifierProperties_WandCastTranslation* URootMotionModifierProperties_WandCastTranslation::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RootMotionModifierProperties_WandCastTranslation");
    return (URootMotionModifierProperties_WandCastTranslation*)res;
}
