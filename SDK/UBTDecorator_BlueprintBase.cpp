#include "AAIController.hpp"
#include "AActor.hpp"
#include "APawn.hpp"
#include "EBTNodeResult\Type.hpp"
#include "UBTDecorator.hpp"
#include "UBTDecorator_BlueprintBase.hpp"
#include "UFunction.hpp"
void UBTDecorator_BlueprintBase::ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveTickAI"));
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
UBTDecorator_BlueprintBase* UBTDecorator_BlueprintBase::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.BTDecorator_BlueprintBase");
    return (UBTDecorator_BlueprintBase*)res;
}
void UBTDecorator_BlueprintBase::ReceiveTick(AActor* OwnerActor, float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveTick"));
    struct Params_ReceiveTick {
        AActor* OwnerActor; // 0x0
        float DeltaSeconds; // 0x8
    }; // Size: 0xc
    Params_ReceiveTick params{};
    params.OwnerActor = (AActor*)OwnerActor;
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void UBTDecorator_BlueprintBase::ReceiveObserverDeactivatedAI(AAIController* OwnerController, APawn* ControlledPawn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI"));
    struct Params_ReceiveObserverDeactivatedAI {
        AAIController* OwnerController; // 0x0
        APawn* ControlledPawn; // 0x8
    }; // Size: 0x10
    Params_ReceiveObserverDeactivatedAI params{};
    params.OwnerController = (AAIController*)OwnerController;
    params.ControlledPawn = (APawn*)ControlledPawn;
    ProcessEvent(func, &params);
}
void UBTDecorator_BlueprintBase::ReceiveExecutionStartAI(AAIController* OwnerController, APawn* ControlledPawn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStartAI"));
    struct Params_ReceiveExecutionStartAI {
        AAIController* OwnerController; // 0x0
        APawn* ControlledPawn; // 0x8
    }; // Size: 0x10
    Params_ReceiveExecutionStartAI params{};
    params.OwnerController = (AAIController*)OwnerController;
    params.ControlledPawn = (APawn*)ControlledPawn;
    ProcessEvent(func, &params);
}
void UBTDecorator_BlueprintBase::ReceiveObserverDeactivated(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated"));
    struct Params_ReceiveObserverDeactivated {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveObserverDeactivated params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTDecorator_BlueprintBase::ReceiveObserverActivatedAI(AAIController* OwnerController, APawn* ControlledPawn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivatedAI"));
    struct Params_ReceiveObserverActivatedAI {
        AAIController* OwnerController; // 0x0
        APawn* ControlledPawn; // 0x8
    }; // Size: 0x10
    Params_ReceiveObserverActivatedAI params{};
    params.OwnerController = (AAIController*)OwnerController;
    params.ControlledPawn = (APawn*)ControlledPawn;
    ProcessEvent(func, &params);
}
bool UBTDecorator_BlueprintBase::IsDecoratorObserverActive() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BTDecorator_BlueprintBase.IsDecoratorObserverActive"));
    struct Params_IsDecoratorObserverActive {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsDecoratorObserverActive params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UBTDecorator_BlueprintBase::ReceiveObserverActivated(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated"));
    struct Params_ReceiveObserverActivated {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveObserverActivated params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTDecorator_BlueprintBase::ReceiveExecutionStart(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart"));
    struct Params_ReceiveExecutionStart {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecutionStart params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTDecorator_BlueprintBase::ReceiveExecutionFinishAI(AAIController* OwnerController, APawn* ControlledPawn, EBTNodeResult::Type NodeResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinishAI"));
    struct Params_ReceiveExecutionFinishAI {
        AAIController* OwnerController; // 0x0
        APawn* ControlledPawn; // 0x8
        EBTNodeResult::Type NodeResult; // 0x10
    }; // Size: 0x11
    Params_ReceiveExecutionFinishAI params{};
    params.OwnerController = (AAIController*)OwnerController;
    params.ControlledPawn = (APawn*)ControlledPawn;
    params.NodeResult = (EBTNodeResult::Type)NodeResult;
    ProcessEvent(func, &params);
}
void UBTDecorator_BlueprintBase::ReceiveExecutionFinish(AActor* OwnerActor, EBTNodeResult::Type NodeResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish"));
    struct Params_ReceiveExecutionFinish {
        AActor* OwnerActor; // 0x0
        EBTNodeResult::Type NodeResult; // 0x8
    }; // Size: 0x9
    Params_ReceiveExecutionFinish params{};
    params.OwnerActor = (AActor*)OwnerActor;
    params.NodeResult = (EBTNodeResult::Type)NodeResult;
    ProcessEvent(func, &params);
}
bool UBTDecorator_BlueprintBase::PerformConditionCheckAI(AAIController* OwnerController, APawn* ControlledPawn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BTDecorator_BlueprintBase.PerformConditionCheckAI"));
    struct Params_PerformConditionCheckAI {
        AAIController* OwnerController; // 0x0
        APawn* ControlledPawn; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_PerformConditionCheckAI params{};
    params.OwnerController = (AAIController*)OwnerController;
    params.ControlledPawn = (APawn*)ControlledPawn;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UBTDecorator_BlueprintBase::PerformConditionCheck(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BTDecorator_BlueprintBase.PerformConditionCheck"));
    struct Params_PerformConditionCheck {
        AActor* OwnerActor; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_PerformConditionCheck params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UBTDecorator_BlueprintBase::IsDecoratorExecutionActive() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BTDecorator_BlueprintBase.IsDecoratorExecutionActive"));
    struct Params_IsDecoratorExecutionActive {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsDecoratorExecutionActive params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
