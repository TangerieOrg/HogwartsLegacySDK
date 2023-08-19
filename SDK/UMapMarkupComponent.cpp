#include "EMapRegionType.hpp"
#include "FDbSingleColumnInfo.hpp"
#include "UActorComponent.hpp"
#include "UFunction.hpp"
#include "UMapMarkupComponent.hpp"
EMapRegionType UMapMarkupComponent::GetType() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapMarkupComponent.GetType"));
    struct Params_GetType {
        EMapRegionType ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetType params{};
    ProcessEvent(func, &params);
    return (EMapRegionType)params.ReturnValue;
}
bool UMapMarkupComponent::IsFloor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapMarkupComponent.IsFloor"));
    struct Params_IsFloor {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsFloor params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UMapMarkupComponent* UMapMarkupComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MapMarkupComponent");
    return (UMapMarkupComponent*)res;
}
bool UMapMarkupComponent::IsStairs() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapMarkupComponent.IsStairs"));
    struct Params_IsStairs {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsStairs params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMapMarkupComponent::IsRoom() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapMarkupComponent.IsRoom"));
    struct Params_IsRoom {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsRoom params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
