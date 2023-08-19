#include "UAblAnimationTagChooser.hpp"
#include "UAblAnimationTagChooser_CreatureBecomeAwareStance.hpp"
UAblAnimationTagChooser_CreatureBecomeAwareStance* UAblAnimationTagChooser_CreatureBecomeAwareStance::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_CreatureBecomeAwareStance");
    return (UAblAnimationTagChooser_CreatureBecomeAwareStance*)res;
}
