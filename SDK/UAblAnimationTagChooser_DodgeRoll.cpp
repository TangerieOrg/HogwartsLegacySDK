#include "UAblAnimationTagChooser.hpp"
#include "UAblAnimationTagChooser_DodgeRoll.hpp"
UAblAnimationTagChooser_DodgeRoll* UAblAnimationTagChooser_DodgeRoll::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_DodgeRoll");
    return (UAblAnimationTagChooser_DodgeRoll*)res;
}
