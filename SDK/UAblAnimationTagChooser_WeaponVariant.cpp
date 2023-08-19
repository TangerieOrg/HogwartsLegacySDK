#include "UAblAnimationTagChooser.hpp"
#include "UAblAnimationTagChooser_WeaponVariant.hpp"
UAblAnimationTagChooser_WeaponVariant* UAblAnimationTagChooser_WeaponVariant::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_WeaponVariant");
    return (UAblAnimationTagChooser_WeaponVariant*)res;
}
