#include "EEnemy_AbilityEvent.hpp"
#include "UAblAnimNotify.hpp"
#include "UAblEnemyAnimNotify.hpp"
UAblEnemyAnimNotify* UAblEnemyAnimNotify::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblEnemyAnimNotify");
    return (UAblEnemyAnimNotify*)res;
}
