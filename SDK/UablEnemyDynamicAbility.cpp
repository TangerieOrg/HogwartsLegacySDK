#include "UAblAbility.hpp"
#include "UablEnemyDynamicAbility.hpp"
UablEnemyDynamicAbility* UablEnemyDynamicAbility::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablEnemyDynamicAbility");
    return (UablEnemyDynamicAbility*)res;
}
