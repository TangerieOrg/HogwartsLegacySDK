#include "EEnemy_WeaponSource.hpp"
#include "UAblAnimationTagChooser.hpp"
#include "UAblAnimationTagChooser_EnemyWeapon.hpp"
UAblAnimationTagChooser_EnemyWeapon* UAblAnimationTagChooser_EnemyWeapon::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_EnemyWeapon");
    return (UAblAnimationTagChooser_EnemyWeapon*)res;
}
