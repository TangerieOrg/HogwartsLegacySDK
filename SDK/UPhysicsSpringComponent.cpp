#include "ECollisionChannel.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UPhysicsSpringComponent.hpp"
#include "USceneComponent.hpp"
FVector UPhysicsSpringComponent::GetSpringCurrentEndPoint() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PhysicsSpringComponent.GetSpringCurrentEndPoint"));
    struct Params_GetSpringCurrentEndPoint {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetSpringCurrentEndPoint params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
UPhysicsSpringComponent* UPhysicsSpringComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.PhysicsSpringComponent");
    return (UPhysicsSpringComponent*)res;
}
FVector UPhysicsSpringComponent::GetSpringRestingPoint() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PhysicsSpringComponent.GetSpringRestingPoint"));
    struct Params_GetSpringRestingPoint {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetSpringRestingPoint params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
FVector UPhysicsSpringComponent::GetSpringDirection() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PhysicsSpringComponent.GetSpringDirection"));
    struct Params_GetSpringDirection {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetSpringDirection params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
float UPhysicsSpringComponent::GetNormalizedCompressionScalar() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.PhysicsSpringComponent.GetNormalizedCompressionScalar"));
    struct Params_GetNormalizedCompressionScalar {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetNormalizedCompressionScalar params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
