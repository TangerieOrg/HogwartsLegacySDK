#include "AActor.hpp"
#include "APerformTasksForAI.hpp"
#include "EPerformTaskContainerType.hpp"
#include "FAIPerformTaskContainer.hpp"
#include "FDbSingleColumnInfo.hpp"
#include "FDialogueConversationReference.hpp"
#include "FHitResult.hpp"
#include "UAvaAudioDialogueEvent.hpp"
#include "UBoxComponent.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UPrimitiveComponent.hpp"
#include "USceneComponent.hpp"
#include "UScheduledEntity.hpp"
#include "USpellToolRecord.hpp"
#include "USphereComponent.hpp"
#include "UTextRenderComponent.hpp"
void APerformTasksForAI::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PerformTasksForAI.OnOverlapBegin"));
    struct Params_OnOverlapBegin {
        UPrimitiveComponent* OverlappedComp; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
        bool bFromSweep; // 0x1c
        char pad_1d[0x3];
        FHitResult SweepResult; // 0x20
    }; // Size: 0xa8
    Params_OnOverlapBegin params{};
    params.OverlappedComp = (UPrimitiveComponent*)OverlappedComp;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    params.bFromSweep = (bool)bFromSweep;
    params.SweepResult = (FHitResult)SweepResult;
    ProcessEvent(func, &params);
    SweepResult = params.SweepResult;
}
UScheduledEntity* APerformTasksForAI::GetScheduledEntity() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PerformTasksForAI.GetScheduledEntity"));
    struct Params_GetScheduledEntity {
        UScheduledEntity* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetScheduledEntity params{};
    ProcessEvent(func, &params);
    return (UScheduledEntity*)params.ReturnValue;
}
APerformTasksForAI* APerformTasksForAI::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PerformTasksForAI");
    return (APerformTasksForAI*)res;
}
void APerformTasksForAI::SwitchOnBPImplementation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PerformTasksForAI.SwitchOnBPImplementation"));
    struct Params_SwitchOnBPImplementation {
    }; // Size: 0x0
    Params_SwitchOnBPImplementation params{};
    ProcessEvent(func, &params);
}
void APerformTasksForAI::HardExecuteStartPerformTasksForAI() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PerformTasksForAI.HardExecuteStartPerformTasksForAI"));
    struct Params_HardExecuteStartPerformTasksForAI {
    }; // Size: 0x0
    Params_HardExecuteStartPerformTasksForAI params{};
    ProcessEvent(func, &params);
}
FAIPerformTaskContainer APerformTasksForAI::GetTaskAtIndex(int32_t TaskIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PerformTasksForAI.GetTaskAtIndex"));
    struct Params_GetTaskAtIndex {
        int32_t TaskIndex; // 0x0
        char pad_4[0xc];
        FAIPerformTaskContainer ReturnValue; // 0x10
    }; // Size: 0x50
    Params_GetTaskAtIndex params{};
    params.TaskIndex = (int32_t)TaskIndex;
    ProcessEvent(func, &params);
    return (FAIPerformTaskContainer)params.ReturnValue;
}
void APerformTasksForAI::SetScheduledEntity(UScheduledEntity* InAI_ScheduledEntity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PerformTasksForAI.SetScheduledEntity"));
    struct Params_SetScheduledEntity {
        UScheduledEntity* InAI_ScheduledEntity; // 0x0
    }; // Size: 0x8
    Params_SetScheduledEntity params{};
    params.InAI_ScheduledEntity = (UScheduledEntity*)InAI_ScheduledEntity;
    ProcessEvent(func, &params);
}
void APerformTasksForAI::OnFleshLoadComplete(AActor* FleshActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PerformTasksForAI.OnFleshLoadComplete"));
    struct Params_OnFleshLoadComplete {
        AActor* FleshActor; // 0x0
    }; // Size: 0x8
    Params_OnFleshLoadComplete params{};
    params.FleshActor = (AActor*)FleshActor;
    ProcessEvent(func, &params);
}
void APerformTasksForAI::ClearScheduledEntity() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PerformTasksForAI.ClearScheduledEntity"));
    struct Params_ClearScheduledEntity {
    }; // Size: 0x0
    Params_ClearScheduledEntity params{};
    ProcessEvent(func, &params);
}
void APerformTasksForAI::ForceFinishCurrentTask() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PerformTasksForAI.ForceFinishCurrentTask"));
    struct Params_ForceFinishCurrentTask {
    }; // Size: 0x0
    Params_ForceFinishCurrentTask params{};
    ProcessEvent(func, &params);
}
void APerformTasksForAI::FinishPerformTaskTriggerBP() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PerformTasksForAI.FinishPerformTaskTriggerBP"));
    struct Params_FinishPerformTaskTriggerBP {
    }; // Size: 0x0
    Params_FinishPerformTaskTriggerBP params{};
    ProcessEvent(func, &params);
}
TArray<APerformTasksForAI*> APerformTasksForAI::FindMissionActors(FName InMissionID, int32_t InMissionUID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PerformTasksForAI.FindMissionActors"));
    struct Params_FindMissionActors {
        FName InMissionID; // 0x0
        int32_t InMissionUID; // 0x8
        char pad_c[0x4];
        TArray<APerformTasksForAI*> ReturnValue; // 0x10
    }; // Size: 0x20
    Params_FindMissionActors params{};
    params.InMissionID = (FName)InMissionID;
    params.InMissionUID = (int32_t)InMissionUID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<APerformTasksForAI*>)params.ReturnValue;
}
void APerformTasksForAI::ExecuteStartPerformTasksForAI() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PerformTasksForAI.ExecuteStartPerformTasksForAI"));
    struct Params_ExecuteStartPerformTasksForAI {
    }; // Size: 0x0
    Params_ExecuteStartPerformTasksForAI params{};
    ProcessEvent(func, &params);
}
void APerformTasksForAI::CleanUpAndStartNextPerformTask(UScheduledEntity* ScheduledEntity, int32_t ActivityTypeBits) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PerformTasksForAI.CleanUpAndStartNextPerformTask"));
    struct Params_CleanUpAndStartNextPerformTask {
        UScheduledEntity* ScheduledEntity; // 0x0
        int32_t ActivityTypeBits; // 0x8
    }; // Size: 0xc
    Params_CleanUpAndStartNextPerformTask params{};
    params.ScheduledEntity = (UScheduledEntity*)ScheduledEntity;
    params.ActivityTypeBits = (int32_t)ActivityTypeBits;
    ProcessEvent(func, &params);
}
void APerformTasksForAI::CallSwitchOnBP(UObject* InTarget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PerformTasksForAI.CallSwitchOnBP"));
    struct Params_CallSwitchOnBP {
        UObject* InTarget; // 0x0
    }; // Size: 0x8
    Params_CallSwitchOnBP params{};
    params.InTarget = (UObject*)InTarget;
    ProcessEvent(func, &params);
}
void APerformTasksForAI::CallSwitchOffBP(UObject* InTarget) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PerformTasksForAI.CallSwitchOffBP"));
    struct Params_CallSwitchOffBP {
        UObject* InTarget; // 0x0
    }; // Size: 0x8
    Params_CallSwitchOffBP params{};
    params.InTarget = (UObject*)InTarget;
    ProcessEvent(func, &params);
}
