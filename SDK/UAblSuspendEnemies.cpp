#include "UAblAbilityTask.hpp"
#include "UAblSuspendEnemies.hpp"
UAblSuspendEnemies* UAblSuspendEnemies::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblSuspendEnemies");
    return (UAblSuspendEnemies*)res;
}
