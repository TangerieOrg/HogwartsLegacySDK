#include "UEnemy_AttackChoice.hpp"
#include "USpider_AttackChoice_RockThrowBackup.hpp"
USpider_AttackChoice_RockThrowBackup* USpider_AttackChoice_RockThrowBackup::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Spider_AttackChoice_RockThrowBackup");
    return (USpider_AttackChoice_RockThrowBackup*)res;
}
