#include "FBoneReferenceEx.hpp"
#include "UAblAnimationModifier.hpp"
#include "UAblAnimationModifier_WandCastAim.hpp"
UAblAnimationModifier_WandCastAim* UAblAnimationModifier_WandCastAim::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationModifier_WandCastAim");
    return (UAblAnimationModifier_WandCastAim*)res;
}
