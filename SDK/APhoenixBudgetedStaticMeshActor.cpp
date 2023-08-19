#include "APhoenixBudgetedStaticMeshActor.hpp"
#include "AStaticMeshActor.hpp"
#include "ESignificanceBiasEnum.hpp"
APhoenixBudgetedStaticMeshActor* APhoenixBudgetedStaticMeshActor::StaticClass() {
    static auto res = find_uobject("Class /Script/PhoenixSignificanceManager.PhoenixBudgetedStaticMeshActor");
    return (APhoenixBudgetedStaticMeshActor*)res;
}
