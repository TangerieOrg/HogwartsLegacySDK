#include "UAISense_EnemyAITarget.hpp"
#include "UAISense_NPC.hpp"
UAISense_EnemyAITarget* UAISense_EnemyAITarget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AISense_EnemyAITarget");
    return (UAISense_EnemyAITarget*)res;
}
