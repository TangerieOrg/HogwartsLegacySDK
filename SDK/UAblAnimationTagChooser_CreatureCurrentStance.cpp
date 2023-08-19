#include "UAblAnimationTagChooser.hpp"
#include "UAblAnimationTagChooser_CreatureCurrentStance.hpp"
UAblAnimationTagChooser_CreatureCurrentStance* UAblAnimationTagChooser_CreatureCurrentStance::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_CreatureCurrentStance");
    return (UAblAnimationTagChooser_CreatureCurrentStance*)res;
}
