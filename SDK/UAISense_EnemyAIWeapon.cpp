#include "UAISense_EnemyAIWeapon.hpp"
#include "UAISense_NPC.hpp"
UAISense_EnemyAIWeapon* UAISense_EnemyAIWeapon::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AISense_EnemyAIWeapon");
    return (UAISense_EnemyAIWeapon*)res;
}
