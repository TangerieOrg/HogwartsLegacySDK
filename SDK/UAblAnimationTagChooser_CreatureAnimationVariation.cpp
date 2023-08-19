#include "UAblAnimationTagChooser.hpp"
#include "UAblAnimationTagChooser_CreatureAnimationVariation.hpp"
UAblAnimationTagChooser_CreatureAnimationVariation* UAblAnimationTagChooser_CreatureAnimationVariation::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_CreatureAnimationVariation");
    return (UAblAnimationTagChooser_CreatureAnimationVariation*)res;
}
