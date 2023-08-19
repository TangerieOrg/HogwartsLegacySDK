#include "FVector.hpp"
#include "UAvoidanceManager.hpp"
#include "UFunction.hpp"
#include "UMovementComponent.hpp"
#include "UObject.hpp"
int32_t UAvoidanceManager::GetNewAvoidanceUID() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AvoidanceManager.GetNewAvoidanceUID"));
    struct Params_GetNewAvoidanceUID {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetNewAvoidanceUID params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
UAvoidanceManager* UAvoidanceManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.AvoidanceManager");
    return (UAvoidanceManager*)res;
}
bool UAvoidanceManager::RegisterMovementComponent(UMovementComponent* MovementComp, float AvoidanceWeight) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AvoidanceManager.RegisterMovementComponent"));
    struct Params_RegisterMovementComponent {
        UMovementComponent* MovementComp; // 0x0
        float AvoidanceWeight; // 0x8
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_RegisterMovementComponent params{};
    params.MovementComp = (UMovementComponent*)MovementComp;
    params.AvoidanceWeight = (float)AvoidanceWeight;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
int32_t UAvoidanceManager::GetObjectCount() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AvoidanceManager.GetObjectCount"));
    struct Params_GetObjectCount {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetObjectCount params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
FVector UAvoidanceManager::GetAvoidanceVelocityForComponent(UMovementComponent* MovementComp) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.AvoidanceManager.GetAvoidanceVelocityForComponent"));
    struct Params_GetAvoidanceVelocityForComponent {
        UMovementComponent* MovementComp; // 0x0
        FVector ReturnValue; // 0x8
    }; // Size: 0x14
    Params_GetAvoidanceVelocityForComponent params{};
    params.MovementComp = (UMovementComponent*)MovementComp;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
