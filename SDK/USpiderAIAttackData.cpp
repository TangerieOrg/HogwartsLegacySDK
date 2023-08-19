#include "UEnemyAIAttackData.hpp"
#include "USpiderAIAttackData.hpp"
USpiderAIAttackData* USpiderAIAttackData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SpiderAIAttackData");
    return (USpiderAIAttackData*)res;
}
