#include "AActor.hpp"
#include "ADynamicFarFoliageManager.hpp"
#include "AInstancedFoliageActor.hpp"
#include "FWorldFoliageData.hpp"
#include "UFoliageInstancedStaticMeshComponent.hpp"
#include "UFunction.hpp"
ADynamicFarFoliageManager* ADynamicFarFoliageManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DynamicFarFoliageManager");
    return (ADynamicFarFoliageManager*)res;
}
void ADynamicFarFoliageManager::MainProcessIteration(float DeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.DynamicFarFoliageManager.MainProcessIteration"));
    struct Params_MainProcessIteration {
        float DeltaTime; // 0x0
    }; // Size: 0x4
    Params_MainProcessIteration params{};
    params.DeltaTime = (float)DeltaTime;
    ProcessEvent(func, &params);
}
