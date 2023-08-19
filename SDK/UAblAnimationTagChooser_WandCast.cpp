#include "EWandCastCommand\Type.hpp"
#include "FGameplayTagContainer.hpp"
#include "UAblAnimationTagChooser.hpp"
#include "UAblAnimationTagChooser_WandCast.hpp"
UAblAnimationTagChooser_WandCast* UAblAnimationTagChooser_WandCast::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_WandCast");
    return (UAblAnimationTagChooser_WandCast*)res;
}
