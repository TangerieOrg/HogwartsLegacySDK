#include "AActor.hpp"
#include "ABaseDestructibleArmor.hpp"
#include "APhoenixBudgetedActor.hpp"
#include "UFunction.hpp"
ABaseDestructibleArmor* ABaseDestructibleArmor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BaseDestructibleArmor");
    return (ABaseDestructibleArmor*)res;
}
void ABaseDestructibleArmor::HandlePeeves(AActor* Other) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BaseDestructibleArmor.HandlePeeves"));
    struct Params_HandlePeeves {
        AActor* Other; // 0x0
    }; // Size: 0x8
    Params_HandlePeeves params{};
    params.Other = (AActor*)Other;
    ProcessEvent(func, &params);
}
