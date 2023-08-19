#include "FTransform.hpp"
#include "UAnimationAsset.hpp"
#include "UCreatureSpawnSlotComponent.hpp"
#include "UFunction.hpp"
#include "UPrimitiveComponent.hpp"
UCreatureSpawnSlotComponent* UCreatureSpawnSlotComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CreatureSpawnSlotComponent");
    return (UCreatureSpawnSlotComponent*)res;
}
bool UCreatureSpawnSlotComponent::IsOccupied() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureSpawnSlotComponent.IsOccupied"));
    struct Params_IsOccupied {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsOccupied params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
FTransform UCreatureSpawnSlotComponent::GetSpawnTransform() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreatureSpawnSlotComponent.GetSpawnTransform"));
    struct Params_GetSpawnTransform {
        FTransform ReturnValue; // 0x0
    }; // Size: 0x30
    Params_GetSpawnTransform params{};
    ProcessEvent(func, &params);
    return (FTransform)params.ReturnValue;
}
