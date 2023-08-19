#include "UManageActionEnergyQualifierTask.hpp"
#include "UQualifierTask.hpp"
UManageActionEnergyQualifierTask* UManageActionEnergyQualifierTask::StaticClass() {
    static auto res = find_uobject("Class /Script/CreatureBehavior.ManageActionEnergyQualifierTask");
    return (UManageActionEnergyQualifierTask*)res;
}
