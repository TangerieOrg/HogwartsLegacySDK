#include "FEnemyStateData.hpp"
#include "UEnemyStateDataContainer.hpp"
#include "UObjectStateDataContainerBase.hpp"
UEnemyStateDataContainer* UEnemyStateDataContainer::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.EnemyStateDataContainer");
    return (UEnemyStateDataContainer*)res;
}
