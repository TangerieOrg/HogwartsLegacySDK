#include "UFunction.hpp"
#include "UInterface.hpp"
#include "UModdableCustomGather.hpp"
#include "UObject.hpp"
UModdableCustomGather* UModdableCustomGather::StaticClass() {
    static auto res = find_uobject("Class /Script/GameplayMods.ModdableCustomGather");
    return (UModdableCustomGather*)res;
}
TArray<UObject*> UModdableCustomGather::GatherAssociatedModdables() {
    static auto func = (UFunction*)(find_uobject("Function /Script/GameplayMods.ModdableCustomGather.GatherAssociatedModdables"));
    struct Params_GatherAssociatedModdables {
        TArray<UObject*> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GatherAssociatedModdables params{};
    ProcessEvent(func, &params);
    return (TArray<UObject*>)params.ReturnValue;
}
