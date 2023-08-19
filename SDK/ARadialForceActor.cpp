#include "ARadialForceActor.hpp"
#include "ARigidBodyBase.hpp"
#include "UFunction.hpp"
#include "URadialForceComponent.hpp"
void ARadialForceActor::ToggleForce() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.RadialForceActor.ToggleForce"));
    struct Params_ToggleForce {
    }; // Size: 0x0
    Params_ToggleForce params{};
    ProcessEvent(func, &params);
}
ARadialForceActor* ARadialForceActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.RadialForceActor");
    return (ARadialForceActor*)res;
}
void ARadialForceActor::EnableForce() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.RadialForceActor.EnableForce"));
    struct Params_EnableForce {
    }; // Size: 0x0
    Params_EnableForce params{};
    ProcessEvent(func, &params);
}
void ARadialForceActor::FireImpulse() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.RadialForceActor.FireImpulse"));
    struct Params_FireImpulse {
    }; // Size: 0x0
    Params_FireImpulse params{};
    ProcessEvent(func, &params);
}
void ARadialForceActor::DisableForce() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.RadialForceActor.DisableForce"));
    struct Params_DisableForce {
    }; // Size: 0x0
    Params_DisableForce params{};
    ProcessEvent(func, &params);
}
