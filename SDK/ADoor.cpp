#include "AActor.hpp"
#include "AAkAcousticPortal.hpp"
#include "ADoor.hpp"
#include "ALerpVolume.hpp"
#include "ALockable.hpp"
#include "ARenderSettingsCustomBlendDomainVolume.hpp"
#include "EBlockNavMeshOverride.hpp"
#include "EDoorCurveAdjustment.hpp"
#include "EDoorState.hpp"
#include "EOpenDoorDirection.hpp"
#include "FHitResult.hpp"
#include "UAkAudioEvent.hpp"
#include "UArrowComponent.hpp"
#include "UCurveFloat.hpp"
#include "UDoorBoxComponent.hpp"
#include "UFastTravelForDoorsComponent.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UOdcObstacleComponent.hpp"
#include "UPrimitiveComponent.hpp"
#include "UStaticMeshComponent.hpp"
#include "UWidgetComponent.hpp"
ADoor* ADoor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Door");
    return (ADoor*)res;
}
void ADoor::SwingDoorFinished() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Door.SwingDoorFinished"));
    struct Params_SwingDoorFinished {
    }; // Size: 0x0
    Params_SwingDoorFinished params{};
    ProcessEvent(func, &params);
}
void ADoor::SetState(EDoorState DoorState, bool LockVisible, bool PlaySoundsAndEffects) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Door.SetState"));
    struct Params_SetState {
        EDoorState DoorState; // 0x0
        bool LockVisible; // 0x1
        bool PlaySoundsAndEffects; // 0x2
    }; // Size: 0x3
    Params_SetState params{};
    params.DoorState = (EDoorState)DoorState;
    params.LockVisible = (bool)LockVisible;
    params.PlaySoundsAndEffects = (bool)PlaySoundsAndEffects;
    ProcessEvent(func, &params);
}
void ADoor::RotateDoorToAlpha(float Alpha) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Door.RotateDoorToAlpha"));
    struct Params_RotateDoorToAlpha {
        float Alpha; // 0x0
    }; // Size: 0x4
    Params_RotateDoorToAlpha params{};
    params.Alpha = (float)Alpha;
    ProcessEvent(func, &params);
}
void ADoor::SetLockLevel(UObject* Caller, int32_t int) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Door.SetLockLevel"));
    struct Params_SetLockLevel {
        UObject* Caller; // 0x0
        int32_t int; // 0x8
    }; // Size: 0xc
    Params_SetLockLevel params{};
    params.Caller = (UObject*)Caller;
    params.int = (int32_t)int;
    ProcessEvent(func, &params);
}
void ADoor::OnPlayerNearTriggerBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* ActorInTrigger, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Door.OnPlayerNearTriggerBeginOverlap"));
    struct Params_OnPlayerNearTriggerBeginOverlap {
        UPrimitiveComponent* OverlappedComp; // 0x0
        AActor* ActorInTrigger; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
        bool bFromSweep; // 0x1c
        char pad_1d[0x3];
        FHitResult SweepResult; // 0x20
    }; // Size: 0xa8
    Params_OnPlayerNearTriggerBeginOverlap params{};
    params.OverlappedComp = (UPrimitiveComponent*)OverlappedComp;
    params.ActorInTrigger = (AActor*)ActorInTrigger;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    params.bFromSweep = (bool)bFromSweep;
    params.SweepResult = (FHitResult)SweepResult;
    ProcessEvent(func, &params);
    SweepResult = params.SweepResult;
}
void ADoor::SetKeepDoorOpen(bool InKeepDoorOpen) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Door.SetKeepDoorOpen"));
    struct Params_SetKeepDoorOpen {
        bool InKeepDoorOpen; // 0x0
    }; // Size: 0x1
    Params_SetKeepDoorOpen params{};
    params.InKeepDoorOpen = (bool)InKeepDoorOpen;
    ProcessEvent(func, &params);
}
void ADoor::OpenDoor(bool KeepOpen, float SecondsToDelayClosing, bool bPushedOpen, EOpenDoorDirection Direction, bool AllowStreamingDoorsToKeepOpen) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Door.OpenDoor"));
    struct Params_OpenDoor {
        bool KeepOpen; // 0x0
        char pad_1[0x3];
        float SecondsToDelayClosing; // 0x4
        bool bPushedOpen; // 0x8
        EOpenDoorDirection Direction; // 0x9
        bool AllowStreamingDoorsToKeepOpen; // 0xa
    }; // Size: 0xb
    Params_OpenDoor params{};
    params.KeepOpen = (bool)KeepOpen;
    params.SecondsToDelayClosing = (float)SecondsToDelayClosing;
    params.bPushedOpen = (bool)bPushedOpen;
    params.Direction = (EOpenDoorDirection)Direction;
    params.AllowStreamingDoorsToKeepOpen = (bool)AllowStreamingDoorsToKeepOpen;
    ProcessEvent(func, &params);
}
void ADoor::OnEnterTriggerEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* ActorInTrigger, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Door.OnEnterTriggerEndOverlap"));
    struct Params_OnEnterTriggerEndOverlap {
        UPrimitiveComponent* OverlappedComp; // 0x0
        AActor* ActorInTrigger; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
    }; // Size: 0x1c
    Params_OnEnterTriggerEndOverlap params{};
    params.OverlappedComp = (UPrimitiveComponent*)OverlappedComp;
    params.ActorInTrigger = (AActor*)ActorInTrigger;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    ProcessEvent(func, &params);
}
void ADoor::OnEnterTriggerBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* ActorInTrigger, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Door.OnEnterTriggerBeginOverlap"));
    struct Params_OnEnterTriggerBeginOverlap {
        UPrimitiveComponent* OverlappedComp; // 0x0
        AActor* ActorInTrigger; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
        bool bFromSweep; // 0x1c
        char pad_1d[0x3];
        FHitResult SweepResult; // 0x20
    }; // Size: 0xa8
    Params_OnEnterTriggerBeginOverlap params{};
    params.OverlappedComp = (UPrimitiveComponent*)OverlappedComp;
    params.ActorInTrigger = (AActor*)ActorInTrigger;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    params.bFromSweep = (bool)bFromSweep;
    params.SweepResult = (FHitResult)SweepResult;
    ProcessEvent(func, &params);
    SweepResult = params.SweepResult;
}
void ADoor::ObjectPickedUp(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Door.ObjectPickedUp"));
    struct Params_ObjectPickedUp {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_ObjectPickedUp params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void ADoor::DestroyWidgetComponentSpinner() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Door.DestroyWidgetComponentSpinner"));
    struct Params_DestroyWidgetComponentSpinner {
    }; // Size: 0x0
    Params_DestroyWidgetComponentSpinner params{};
    ProcessEvent(func, &params);
}
void ADoor::CloseDoor(bool ForceClose) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Door.CloseDoor"));
    struct Params_CloseDoor {
        bool ForceClose; // 0x0
    }; // Size: 0x1
    Params_CloseDoor params{};
    params.ForceClose = (bool)ForceClose;
    ProcessEvent(func, &params);
}
void ADoor::BlockPlayer(bool ShouldBlock) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Door.BlockPlayer"));
    struct Params_BlockPlayer {
        bool ShouldBlock; // 0x0
    }; // Size: 0x1
    Params_BlockPlayer params{};
    params.ShouldBlock = (bool)ShouldBlock;
    ProcessEvent(func, &params);
}
void ADoor::BlockOrUnblockDoor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Door.BlockOrUnblockDoor"));
    struct Params_BlockOrUnblockDoor {
    }; // Size: 0x0
    Params_BlockOrUnblockDoor params{};
    ProcessEvent(func, &params);
}
void ADoor::BlockNavMesh(bool ShouldBlock, EBlockNavMeshOverride Override) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Door.BlockNavMesh"));
    struct Params_BlockNavMesh {
        bool ShouldBlock; // 0x0
        EBlockNavMeshOverride Override; // 0x1
    }; // Size: 0x2
    Params_BlockNavMesh params{};
    params.ShouldBlock = (bool)ShouldBlock;
    params.Override = (EBlockNavMeshOverride)Override;
    ProcessEvent(func, &params);
}
