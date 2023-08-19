#include "FVector.hpp"
#include "UDataAsset.hpp"
#include "UFlyingBroomMovementComponent.hpp"
#include "UFlyingBroomPhysics.hpp"
#include "UFlyingBroomPhysicsScratch.hpp"
#include "UFunction.hpp"
void UFlyingBroomPhysics::AnimationUpdate(UFlyingBroomMovementComponent* FlyingBroomMovementComponent, UFlyingBroomPhysicsScratch* Scratch) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroomPhysics.AnimationUpdate"));
    struct Params_AnimationUpdate {
        UFlyingBroomMovementComponent* FlyingBroomMovementComponent; // 0x0
        UFlyingBroomPhysicsScratch* Scratch; // 0x8
    }; // Size: 0x10
    Params_AnimationUpdate params{};
    params.FlyingBroomMovementComponent = (UFlyingBroomMovementComponent*)FlyingBroomMovementComponent;
    params.Scratch = (UFlyingBroomPhysicsScratch*)Scratch;
    ProcessEvent(func, &params);
}
UFlyingBroomPhysics* UFlyingBroomPhysics::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FlyingBroomPhysics");
    return (UFlyingBroomPhysics*)res;
}
void UFlyingBroomPhysics::PhysicsUpdate(UFlyingBroomMovementComponent* FlyingBroomMovementComponent, UFlyingBroomPhysicsScratch* Scratch, float DeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroomPhysics.PhysicsUpdate"));
    struct Params_PhysicsUpdate {
        UFlyingBroomMovementComponent* FlyingBroomMovementComponent; // 0x0
        UFlyingBroomPhysicsScratch* Scratch; // 0x8
        float DeltaTime; // 0x10
    }; // Size: 0x14
    Params_PhysicsUpdate params{};
    params.FlyingBroomMovementComponent = (UFlyingBroomMovementComponent*)FlyingBroomMovementComponent;
    params.Scratch = (UFlyingBroomPhysicsScratch*)Scratch;
    params.DeltaTime = (float)DeltaTime;
    ProcessEvent(func, &params);
}
void UFlyingBroomPhysics::PhysicsPostIteration(UFlyingBroomMovementComponent* FlyingBroomMovementComponent, UFlyingBroomPhysicsScratch* Scratch, FVector& Adjusted, float timeTick) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroomPhysics.PhysicsPostIteration"));
    struct Params_PhysicsPostIteration {
        UFlyingBroomMovementComponent* FlyingBroomMovementComponent; // 0x0
        UFlyingBroomPhysicsScratch* Scratch; // 0x8
        FVector Adjusted; // 0x10
        float timeTick; // 0x1c
    }; // Size: 0x20
    Params_PhysicsPostIteration params{};
    params.FlyingBroomMovementComponent = (UFlyingBroomMovementComponent*)FlyingBroomMovementComponent;
    params.Scratch = (UFlyingBroomPhysicsScratch*)Scratch;
    params.Adjusted = (FVector)Adjusted;
    params.timeTick = (float)timeTick;
    ProcessEvent(func, &params);
    Adjusted = params.Adjusted;
}
void UFlyingBroomPhysics::PhysicsRemoved(UFlyingBroomMovementComponent* FlyingBroomMovementComponent, UFlyingBroomPhysicsScratch* Scratch) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroomPhysics.PhysicsRemoved"));
    struct Params_PhysicsRemoved {
        UFlyingBroomMovementComponent* FlyingBroomMovementComponent; // 0x0
        UFlyingBroomPhysicsScratch* Scratch; // 0x8
    }; // Size: 0x10
    Params_PhysicsRemoved params{};
    params.FlyingBroomMovementComponent = (UFlyingBroomMovementComponent*)FlyingBroomMovementComponent;
    params.Scratch = (UFlyingBroomPhysicsScratch*)Scratch;
    ProcessEvent(func, &params);
}
FVector UFlyingBroomPhysics::PhysicsIteration(UFlyingBroomMovementComponent* FlyingBroomMovementComponent, UFlyingBroomPhysicsScratch* Scratch, float timeTick) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroomPhysics.PhysicsIteration"));
    struct Params_PhysicsIteration {
        UFlyingBroomMovementComponent* FlyingBroomMovementComponent; // 0x0
        UFlyingBroomPhysicsScratch* Scratch; // 0x8
        float timeTick; // 0x10
        FVector ReturnValue; // 0x14
    }; // Size: 0x20
    Params_PhysicsIteration params{};
    params.FlyingBroomMovementComponent = (UFlyingBroomMovementComponent*)FlyingBroomMovementComponent;
    params.Scratch = (UFlyingBroomPhysicsScratch*)Scratch;
    params.timeTick = (float)timeTick;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
void UFlyingBroomPhysics::PhysicsAdded(UFlyingBroomMovementComponent* FlyingBroomMovementComponent, UFlyingBroomPhysicsScratch* Scratch) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroomPhysics.PhysicsAdded"));
    struct Params_PhysicsAdded {
        UFlyingBroomMovementComponent* FlyingBroomMovementComponent; // 0x0
        UFlyingBroomPhysicsScratch* Scratch; // 0x8
    }; // Size: 0x10
    Params_PhysicsAdded params{};
    params.FlyingBroomMovementComponent = (UFlyingBroomMovementComponent*)FlyingBroomMovementComponent;
    params.Scratch = (UFlyingBroomPhysicsScratch*)Scratch;
    ProcessEvent(func, &params);
}
UFlyingBroomPhysicsScratch* UFlyingBroomPhysics::CreateScratch(UFlyingBroomMovementComponent* InOwner) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroomPhysics.CreateScratch"));
    struct Params_CreateScratch {
        UFlyingBroomMovementComponent* InOwner; // 0x0
        UFlyingBroomPhysicsScratch* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_CreateScratch params{};
    params.InOwner = (UFlyingBroomMovementComponent*)InOwner;
    ProcessEvent(func, &params);
    return (UFlyingBroomPhysicsScratch*)params.ReturnValue;
}
