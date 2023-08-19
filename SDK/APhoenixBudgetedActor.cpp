#include "AActor.hpp"
#include "APhoenixBudgetedActor.hpp"
#include "ESignificanceBiasEnum.hpp"
APhoenixBudgetedActor* APhoenixBudgetedActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PhoenixBudgetedActor");
    return (APhoenixBudgetedActor*)res;
}
