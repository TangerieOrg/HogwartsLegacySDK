#include "UActorComponent.hpp"
#include "UAkComponent.hpp"
#include "UFunction.hpp"
#include "UMultiFX2_Base.hpp"
#include "UPrimitiveComponent.hpp"
#include "URollingComponent.hpp"
#include "UStaticMeshComponent.hpp"
URollingComponent* URollingComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RollingComponent");
    return (URollingComponent*)res;
}
void URollingComponent::OnComponentWake(UPrimitiveComponent* OverlappedComponent, FName BoneName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RollingComponent.OnComponentWake"));
    struct Params_OnComponentWake {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        FName BoneName; // 0x8
    }; // Size: 0x10
    Params_OnComponentWake params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.BoneName = (FName)BoneName;
    ProcessEvent(func, &params);
}
void URollingComponent::OnComponentSleep(UPrimitiveComponent* OverlappedComponent, FName BoneName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.RollingComponent.OnComponentSleep"));
    struct Params_OnComponentSleep {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        FName BoneName; // 0x8
    }; // Size: 0x10
    Params_OnComponentSleep params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.BoneName = (FName)BoneName;
    ProcessEvent(func, &params);
}
