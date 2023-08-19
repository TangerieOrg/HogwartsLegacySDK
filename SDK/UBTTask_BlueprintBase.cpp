#include "AAIController.hpp"
#include "AActor.hpp"
#include "APawn.hpp"
#include "FIntervalCountdown.hpp"
#include "UBTTaskNode.hpp"
#include "UBTTask_BlueprintBase.hpp"
#include "UFunction.hpp"
void UBTTask_BlueprintBase::ReceiveTickAI(AAIController* OwnerController, APawn* ControlledPawn, float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BTTask_BlueprintBase.ReceiveTickAI"));
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
void UBTTask_BlueprintBase::SetFinishOnMessageWithId(FName MessageName, int32_t RequestID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BTTask_BlueprintBase.SetFinishOnMessageWithId"));
    struct Params_SetFinishOnMessageWithId {
        FName MessageName; // 0x0
        int32_t RequestID; // 0x8
    }; // Size: 0xc
    Params_SetFinishOnMessageWithId params{};
    params.MessageName = (FName)MessageName;
    params.RequestID = (int32_t)RequestID;
    ProcessEvent(func, &params);
}
UBTTask_BlueprintBase* UBTTask_BlueprintBase::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.BTTask_BlueprintBase");
    return (UBTTask_BlueprintBase*)res;
}
void UBTTask_BlueprintBase::ReceiveExecuteAI(AAIController* OwnerController, APawn* ControlledPawn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BTTask_BlueprintBase.ReceiveExecuteAI"));
    struct Params_ReceiveExecuteAI {
        AAIController* OwnerController; // 0x0
        APawn* ControlledPawn; // 0x8
    }; // Size: 0x10
    Params_ReceiveExecuteAI params{};
    params.OwnerController = (AAIController*)OwnerController;
    params.ControlledPawn = (APawn*)ControlledPawn;
    ProcessEvent(func, &params);
}
void UBTTask_BlueprintBase::SetFinishOnMessage(FName MessageName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BTTask_BlueprintBase.SetFinishOnMessage"));
    struct Params_SetFinishOnMessage {
        FName MessageName; // 0x0
    }; // Size: 0x8
    Params_SetFinishOnMessage params{};
    params.MessageName = (FName)MessageName;
    ProcessEvent(func, &params);
}
void UBTTask_BlueprintBase::ReceiveTick(AActor* OwnerActor, float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BTTask_BlueprintBase.ReceiveTick"));
    struct Params_ReceiveTick {
        AActor* OwnerActor; // 0x0
        float DeltaSeconds; // 0x8
    }; // Size: 0xc
    Params_ReceiveTick params{};
    params.OwnerActor = (AActor*)OwnerActor;
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void UBTTask_BlueprintBase::ReceiveExecute(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BTTask_BlueprintBase.ReceiveExecute"));
    struct Params_ReceiveExecute {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveExecute params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
void UBTTask_BlueprintBase::ReceiveAbortAI(AAIController* OwnerController, APawn* ControlledPawn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BTTask_BlueprintBase.ReceiveAbortAI"));
    struct Params_ReceiveAbortAI {
        AAIController* OwnerController; // 0x0
        APawn* ControlledPawn; // 0x8
    }; // Size: 0x10
    Params_ReceiveAbortAI params{};
    params.OwnerController = (AAIController*)OwnerController;
    params.ControlledPawn = (APawn*)ControlledPawn;
    ProcessEvent(func, &params);
}
void UBTTask_BlueprintBase::ReceiveAbort(AActor* OwnerActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BTTask_BlueprintBase.ReceiveAbort"));
    struct Params_ReceiveAbort {
        AActor* OwnerActor; // 0x0
    }; // Size: 0x8
    Params_ReceiveAbort params{};
    params.OwnerActor = (AActor*)OwnerActor;
    ProcessEvent(func, &params);
}
bool UBTTask_BlueprintBase::IsTaskExecuting() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BTTask_BlueprintBase.IsTaskExecuting"));
    struct Params_IsTaskExecuting {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsTaskExecuting params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UBTTask_BlueprintBase::IsTaskAborting() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BTTask_BlueprintBase.IsTaskAborting"));
    struct Params_IsTaskAborting {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsTaskAborting params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UBTTask_BlueprintBase::FinishExecute(bool bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BTTask_BlueprintBase.FinishExecute"));
    struct Params_FinishExecute {
        bool bSuccess; // 0x0
    }; // Size: 0x1
    Params_FinishExecute params{};
    params.bSuccess = (bool)bSuccess;
    ProcessEvent(func, &params);
}
void UBTTask_BlueprintBase::FinishAbort() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.BTTask_BlueprintBase.FinishAbort"));
    struct Params_FinishAbort {
    }; // Size: 0x0
    Params_FinishAbort params{};
    ProcessEvent(func, &params);
}
