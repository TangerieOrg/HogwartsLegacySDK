#include "FFoliageTypeObject.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UProceduralFoliageSpawner.hpp"
UProceduralFoliageSpawner* UProceduralFoliageSpawner::StaticClass() {
    static auto res = find_uobject("Class /Script/Foliage.ProceduralFoliageSpawner");
    return (UProceduralFoliageSpawner*)res;
}
void UProceduralFoliageSpawner::Simulate(int32_t NumSteps) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Foliage.ProceduralFoliageSpawner.Simulate"));
    struct Params_Simulate {
        int32_t NumSteps; // 0x0
    }; // Size: 0x4
    Params_Simulate params{};
    params.NumSteps = (int32_t)NumSteps;
    ProcessEvent(func, &params);
}
