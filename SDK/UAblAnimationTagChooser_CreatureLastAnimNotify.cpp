#include "UAblAnimationTagChooser.hpp"
#include "UAblAnimationTagChooser_CreatureLastAnimNotify.hpp"
UAblAnimationTagChooser_CreatureLastAnimNotify* UAblAnimationTagChooser_CreatureLastAnimNotify::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_CreatureLastAnimNotify");
    return (UAblAnimationTagChooser_CreatureLastAnimNotify*)res;
}
