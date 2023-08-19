#include "UDataAsset.hpp"
#include "UEnemyAIPathCheckPropertyData.hpp"
UEnemyAIPathCheckPropertyData* UEnemyAIPathCheckPropertyData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.EnemyAIPathCheckPropertyData");
    return (UEnemyAIPathCheckPropertyData*)res;
}
