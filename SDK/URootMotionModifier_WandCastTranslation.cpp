#include "URootMotionModifier.hpp"
#include "URootMotionModifier_WandCastTranslation.hpp"
URootMotionModifier_WandCastTranslation* URootMotionModifier_WandCastTranslation::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RootMotionModifier_WandCastTranslation");
    return (URootMotionModifier_WandCastTranslation*)res;
}
