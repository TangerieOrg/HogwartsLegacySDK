#include "AActor.hpp"
#include "EObjectTypeQuery.hpp"
#include "FLinearColor.hpp"
#include "UActorComponent.hpp"
#include "UAkComponent.hpp"
#include "UAnimatedLightComponent.hpp"
#include "UFunction.hpp"
#include "UMaterialBillboardComponent.hpp"
#include "UNiagaraComponent.hpp"
#include "UObjectStateInfo.hpp"
#include "UPointLightComponent.hpp"
#include "UPrimitiveComponent.hpp"
#include "USphereComponent.hpp"
#include "UTorchComponent.hpp"
void UTorchComponent::Propagate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TorchComponent.Propagate"));
    struct Params_Propagate {
    }; // Size: 0x0
    Params_Propagate params{};
    ProcessEvent(func, &params);
}
UTorchComponent* UTorchComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TorchComponent");
    return (UTorchComponent*)res;
}
void UTorchComponent::StartLight() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TorchComponent.StartLight"));
    struct Params_StartLight {
    }; // Size: 0x0
    Params_StartLight params{};
    ProcessEvent(func, &params);
}
void UTorchComponent::OnProxOverlapBegin(AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TorchComponent.OnProxOverlapBegin"));
    struct Params_OnProxOverlapBegin {
        AActor* OtherActor; // 0x0
    }; // Size: 0x8
    Params_OnProxOverlapBegin params{};
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
}
void UTorchComponent::SetOnFire(bool bOnFire) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TorchComponent.SetOnFire"));
    struct Params_SetOnFire {
        bool bOnFire; // 0x0
    }; // Size: 0x1
    Params_SetOnFire params{};
    params.bOnFire = (bool)bOnFire;
    ProcessEvent(func, &params);
}
void UTorchComponent::OnPropagateOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TorchComponent.OnPropagateOverlapBegin"));
    struct Params_OnPropagateOverlapBegin {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
    }; // Size: 0x10
    Params_OnPropagateOverlapBegin params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
}
void UTorchComponent::SequentialLight() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TorchComponent.SequentialLight"));
    struct Params_SequentialLight {
    }; // Size: 0x0
    Params_SequentialLight params{};
    ProcessEvent(func, &params);
}
void UTorchComponent::OnPropagateOverlapEnd(AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TorchComponent.OnPropagateOverlapEnd"));
    struct Params_OnPropagateOverlapEnd {
        AActor* OtherActor; // 0x0
    }; // Size: 0x8
    Params_OnPropagateOverlapEnd params{};
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
}
void UTorchComponent::MidLight() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TorchComponent.MidLight"));
    struct Params_MidLight {
    }; // Size: 0x0
    Params_MidLight params{};
    ProcessEvent(func, &params);
}
void UTorchComponent::ExtinguishLight() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TorchComponent.ExtinguishLight"));
    struct Params_ExtinguishLight {
    }; // Size: 0x0
    Params_ExtinguishLight params{};
    ProcessEvent(func, &params);
}
void UTorchComponent::EndLight() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TorchComponent.EndLight"));
    struct Params_EndLight {
    }; // Size: 0x0
    Params_EndLight params{};
    ProcessEvent(func, &params);
}
