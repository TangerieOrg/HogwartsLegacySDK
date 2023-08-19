#include "UEnemy_AttackChoice.hpp"
#include "UTroll_AttackChoice_RockThrowBackup.hpp"
UTroll_AttackChoice_RockThrowBackup* UTroll_AttackChoice_RockThrowBackup::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Troll_AttackChoice_RockThrowBackup");
    return (UTroll_AttackChoice_RockThrowBackup*)res;
}
