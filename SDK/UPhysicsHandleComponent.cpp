#include "FRotator.hpp"
#include "FVector.hpp"
#include "UActorComponent.hpp"
#include "UFunction.hpp"
#include "UPhysicsHandleComponent.hpp"
#include "UPrimitiveComponent.hpp"
void UPhysicsHandleComponent::SetTargetRotation(FRotator NewRotation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PhysicsHandleComponent.SetTargetRotation"));
    struct Params_SetTargetRotation {
        FRotator NewRotation; // 0x0
    }; // Size: 0xc
    Params_SetTargetRotation params{};
    params.NewRotation = (FRotator)NewRotation;
    ProcessEvent(func, &params);
}
UPhysicsHandleComponent* UPhysicsHandleComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.PhysicsHandleComponent");
    return (UPhysicsHandleComponent*)res;
}
void UPhysicsHandleComponent::SetInterpolationSpeed(float NewInterpolationSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PhysicsHandleComponent.SetInterpolationSpeed"));
    struct Params_SetInterpolationSpeed {
        float NewInterpolationSpeed; // 0x0
    }; // Size: 0x4
    Params_SetInterpolationSpeed params{};
    params.NewInterpolationSpeed = (float)NewInterpolationSpeed;
    ProcessEvent(func, &params);
}
void UPhysicsHandleComponent::SetTargetLocationAndRotation(FVector NewLocation, FRotator NewRotation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PhysicsHandleComponent.SetTargetLocationAndRotation"));
    struct Params_SetTargetLocationAndRotation {
        FVector NewLocation; // 0x0
        FRotator NewRotation; // 0xc
    }; // Size: 0x18
    Params_SetTargetLocationAndRotation params{};
    params.NewLocation = (FVector)NewLocation;
    params.NewRotation = (FRotator)NewRotation;
    ProcessEvent(func, &params);
}
void UPhysicsHandleComponent::GrabComponentAtLocation(UPrimitiveComponent* Component, FName InBoneName, FVector GrabLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PhysicsHandleComponent.GrabComponentAtLocation"));
    struct Params_GrabComponentAtLocation {
        UPrimitiveComponent* Component; // 0x0
        FName InBoneName; // 0x8
        FVector GrabLocation; // 0x10
    }; // Size: 0x1c
    Params_GrabComponentAtLocation params{};
    params.Component = (UPrimitiveComponent*)Component;
    params.InBoneName = (FName)InBoneName;
    params.GrabLocation = (FVector)GrabLocation;
    ProcessEvent(func, &params);
}
void UPhysicsHandleComponent::SetAngularStiffness(float NewAngularStiffness) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PhysicsHandleComponent.SetAngularStiffness"));
    struct Params_SetAngularStiffness {
        float NewAngularStiffness; // 0x0
    }; // Size: 0x4
    Params_SetAngularStiffness params{};
    params.NewAngularStiffness = (float)NewAngularStiffness;
    ProcessEvent(func, &params);
}
void UPhysicsHandleComponent::SetTargetLocation(FVector NewLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PhysicsHandleComponent.SetTargetLocation"));
    struct Params_SetTargetLocation {
        FVector NewLocation; // 0x0
    }; // Size: 0xc
    Params_SetTargetLocation params{};
    params.NewLocation = (FVector)NewLocation;
    ProcessEvent(func, &params);
}
void UPhysicsHandleComponent::SetLinearStiffness(float NewLinearStiffness) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PhysicsHandleComponent.SetLinearStiffness"));
    struct Params_SetLinearStiffness {
        float NewLinearStiffness; // 0x0
    }; // Size: 0x4
    Params_SetLinearStiffness params{};
    params.NewLinearStiffness = (float)NewLinearStiffness;
    ProcessEvent(func, &params);
}
void UPhysicsHandleComponent::SetLinearDamping(float NewLinearDamping) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PhysicsHandleComponent.SetLinearDamping"));
    struct Params_SetLinearDamping {
        float NewLinearDamping; // 0x0
    }; // Size: 0x4
    Params_SetLinearDamping params{};
    params.NewLinearDamping = (float)NewLinearDamping;
    ProcessEvent(func, &params);
}
void UPhysicsHandleComponent::SetAngularDamping(float NewAngularDamping) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PhysicsHandleComponent.SetAngularDamping"));
    struct Params_SetAngularDamping {
        float NewAngularDamping; // 0x0
    }; // Size: 0x4
    Params_SetAngularDamping params{};
    params.NewAngularDamping = (float)NewAngularDamping;
    ProcessEvent(func, &params);
}
void UPhysicsHandleComponent::ReleaseComponent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PhysicsHandleComponent.ReleaseComponent"));
    struct Params_ReleaseComponent {
    }; // Size: 0x0
    Params_ReleaseComponent params{};
    ProcessEvent(func, &params);
}
void UPhysicsHandleComponent::GrabComponentAtLocationWithRotation(UPrimitiveComponent* Component, FName InBoneName, FVector Location, FRotator Rotation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PhysicsHandleComponent.GrabComponentAtLocationWithRotation"));
    struct Params_GrabComponentAtLocationWithRotation {
        UPrimitiveComponent* Component; // 0x0
        FName InBoneName; // 0x8
        FVector Location; // 0x10
        FRotator Rotation; // 0x1c
    }; // Size: 0x28
    Params_GrabComponentAtLocationWithRotation params{};
    params.Component = (UPrimitiveComponent*)Component;
    params.InBoneName = (FName)InBoneName;
    params.Location = (FVector)Location;
    params.Rotation = (FRotator)Rotation;
    ProcessEvent(func, &params);
}
void UPhysicsHandleComponent::GrabComponent(UPrimitiveComponent* Component, FName InBoneName, FVector GrabLocation, bool bConstrainRotation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PhysicsHandleComponent.GrabComponent"));
    struct Params_GrabComponent {
        UPrimitiveComponent* Component; // 0x0
        FName InBoneName; // 0x8
        FVector GrabLocation; // 0x10
        bool bConstrainRotation; // 0x1c
    }; // Size: 0x1d
    Params_GrabComponent params{};
    params.Component = (UPrimitiveComponent*)Component;
    params.InBoneName = (FName)InBoneName;
    params.GrabLocation = (FVector)GrabLocation;
    params.bConstrainRotation = (bool)bConstrainRotation;
    ProcessEvent(func, &params);
}
void UPhysicsHandleComponent::GetTargetLocationAndRotation(FVector& TargetLocation, FRotator& TargetRotation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PhysicsHandleComponent.GetTargetLocationAndRotation"));
    struct Params_GetTargetLocationAndRotation {
        FVector TargetLocation; // 0x0
        FRotator TargetRotation; // 0xc
    }; // Size: 0x18
    Params_GetTargetLocationAndRotation params{};
    params.TargetLocation = (FVector)TargetLocation;
    params.TargetRotation = (FRotator)TargetRotation;
    ProcessEvent(func, &params);
    TargetLocation = params.TargetLocation;
    TargetRotation = params.TargetRotation;
}
UPrimitiveComponent* UPhysicsHandleComponent::GetGrabbedComponent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PhysicsHandleComponent.GetGrabbedComponent"));
    struct Params_GetGrabbedComponent {
        UPrimitiveComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetGrabbedComponent params{};
    ProcessEvent(func, &params);
    return (UPrimitiveComponent*)params.ReturnValue;
}
