#include "UCreatureCage_Interface.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
#include "USceneComponent.hpp"
UCreatureCage_Interface* UCreatureCage_Interface::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CreatureCage_Interface");
    return (UCreatureCage_Interface*)res;
}
USceneComponent* UCreatureCage_Interface::GetWalkoutTarget() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureCage_Interface.GetWalkoutTarget"));
    struct Params_GetWalkoutTarget {
        USceneComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetWalkoutTarget params{};
    ProcessEvent(func, &params);
    return (USceneComponent*)params.ReturnValue;
}
bool UCreatureCage_Interface::IsCageOpen() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureCage_Interface.IsCageOpen"));
    struct Params_IsCageOpen {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsCageOpen params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
