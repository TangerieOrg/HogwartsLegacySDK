#include "AAIController.hpp"
#include "AActor.hpp"
#include "APawn.hpp"
#include "UBTService.hpp"
#include "UBTService_BlueprintBase.hpp"
#include "UFunction.hpp"
void UBTService_BlueprintBase::ReceiveDeactivationAI(AAIController* OwnerController, APawn* ControlledPawn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BTService_BlueprintBase.ReceiveDeactivationAI"));
    struct Params_ReceiveDeactivationAI {
        AAIController* OwnerController; // 0x0
        APawn* ControlledPawn; // 0x8
    }; // Size: 0x10
    Params_ReceiveDeactivationAI params{};
    params.OwnerController = (AAIController*)OwnerController;
    params.ControlledPawn = (APawn*)ControlledPawn;
    ProcessEvent(func, &params);
}
void UBTService_BlueprintBase::ReceiveSearchStartAI(AAIController* OwnerController, APawn* ControlledPawn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BTService_BlueprintBase.ReceiveSearchStartAI"));
    struct Params_ReceiveSearchStartAI {
        AAIController* OwnerController; // 0x0
        APawn* ControlledPawn; // 0x8
    }; // Size: 0x10
    Params_ReceiveSearchStartAI params{};
    params.OwnerController = (AAIController*)OwnerController;
    params.ControlledPawn = (APawn*)ControlledPawn;
    ProcessEvent(func, &params);
}
UBTService_BlueprintBase* UBTService_BlueprintBase::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.BTService_BlueprintBase");
    return (UBTService_BlueprintBase*)res;
}
void UBTService_BlueprintBase::ReceiveSearchStart(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BTService_BlueprintBase.ReceiveSearchStart"));
    struct Params_ReceiveSearchStart {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveSearchStart params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTService_BlueprintBase::ReceiveActivationAI(AAIController* OwnerController, APawn* ControlledPawn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BTService_BlueprintBase.ReceiveActivationAI"));
    struct Params_ReceiveActivationAI {
        AAIController* OwnerController; // 0x0
        APawn* ControlledPawn; // 0x8
    }; // Size: 0x10
    Params_ReceiveActivationAI params{};
    params.OwnerController = (AAIController*)OwnerController;
    params.ControlledPawn = (APawn*)ControlledPawn;
    ProcessEvent(func, &params);
}
void UBTService_BlueprintBase::ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BTService_BlueprintBase.ReceiveTickAI"));
    struct Params_ReceiveTickAI {
        AAIController* OwnerController; // 0x0
        APawn* ControlledPawn; // 0x8
        float DeltaSeconds; // 0x10
    }; // Size: 0x14
    Params_ReceiveTickAI params{};
    params.OwnerController = (AAIController*)OwnerController;
    params.ControlledPawn = (APawn*)ControlledPawn;
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void UBTService_BlueprintBase::ReceiveTick(AActor* OwnerActor, float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BTService_BlueprintBase.ReceiveTick"));
    struct Params_ReceiveTick {
        AActor* OwnerActor; // 0x0
        float DeltaSeconds; // 0x8
    }; // Size: 0xc
    Params_ReceiveTick params{};
    params.OwnerActor = (AActor*)OwnerActor;
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void UBTService_BlueprintBase::ReceiveDeactivation(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BTService_BlueprintBase.ReceiveDeactivation"));
    struct Params_ReceiveDeactivation {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveDeactivation params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTService_BlueprintBase::ReceiveActivation(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BTService_BlueprintBase.ReceiveActivation"));
    struct Params_ReceiveActivation {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveActivation params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
bool UBTService_BlueprintBase::IsServiceActive() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BTService_BlueprintBase.IsServiceActive"));
    struct Params_IsServiceActive {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsServiceActive params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
