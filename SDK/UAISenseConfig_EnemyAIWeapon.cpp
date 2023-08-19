#include "APerceptionPointArea.hpp"
#include "UAISenseConfig_EnemyAIWeapon.hpp"
#include "UAISenseConfig_NPC.hpp"
#include "UClass.hpp"
UAISenseConfig_EnemyAIWeapon* UAISenseConfig_EnemyAIWeapon::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AISenseConfig_EnemyAIWeapon");
    return (UAISenseConfig_EnemyAIWeapon*)res;
}
