#include "FBurningMaterial.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UIncendioComponent.hpp"
#include "UMaterialPropertyData.hpp"
#include "UMeshComponent.hpp"
#include "USphereComponent.hpp"
#include "UStateEffectComponent.hpp"
#include "UStaticMeshComponent.hpp"
UIncendioComponent* UIncendioComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.IncendioComponent");
    return (UIncendioComponent*)res;
}
bool UIncendioComponent::IsPointOnFire(FVector Point, bool LimitToRing) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.IncendioComponent.IsPointOnFire"));
    struct Params_IsPointOnFire {
        FVector Point; // 0x0
        bool LimitToRing; // 0xc
        bool ReturnValue; // 0xd
    }; // Size: 0xe
    Params_IsPointOnFire params{};
    params.Point = (FVector)Point;
    params.LimitToRing = (bool)LimitToRing;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UIncendioComponent::IsComplete() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.IncendioComponent.IsComplete"));
    struct Params_IsComplete {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsComplete params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
