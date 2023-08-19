#include "UAblAnimationTagChooser_AppendToBaseChooser.hpp"
#include "UAblAppendToBaseChooser_WeaponState.hpp"
UAblAppendToBaseChooser_WeaponState* UAblAppendToBaseChooser_WeaponState::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAppendToBaseChooser_WeaponState");
    return (UAblAppendToBaseChooser_WeaponState*)res;
}
