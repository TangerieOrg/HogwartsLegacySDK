#include "FDbSingleColumnInfo.hpp"
#include "FEnemyStateData.hpp"
#include "UBaseStateComponent.hpp"
#include "UEnemyStateComponent.hpp"
UEnemyStateComponent* UEnemyStateComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.EnemyStateComponent");
    return (UEnemyStateComponent*)res;
}
