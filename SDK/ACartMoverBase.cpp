#include "AActor.hpp"
#include "ACartMoverBase.hpp"
#include "AWorldEventActor.hpp"
#include "FCartSetup.hpp"
#include "FHitResult.hpp"
#include "FTimerHandle.hpp"
#include "UFunction.hpp"
#include "UPrimitiveComponent.hpp"
#include "UTimelineComponent.hpp"
ACartMoverBase* ACartMoverBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CartMoverBase");
    return (ACartMoverBase*)res;
}
void ACartMoverBase::OnSlowDownBoxBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CartMoverBase.OnSlowDownBoxBeginOverlap"));
    struct Params_OnSlowDownBoxBeginOverlap {
        UPrimitiveComponent* OverlappedComp; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
        bool bFromSweep; // 0x1c
        char pad_1d[0x3];
        FHitResult SweepResult; // 0x20
    }; // Size: 0xa8
    Params_OnSlowDownBoxBeginOverlap params{};
    params.OverlappedComp = (UPrimitiveComponent*)OverlappedComp;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    params.bFromSweep = (bool)bFromSweep;
    params.SweepResult = (FHitResult)SweepResult;
    ProcessEvent(func, &params);
    SweepResult = params.SweepResult;
}
void ACartMoverBase::MoveAlongSpline(FCartSetup& InCartSetup, float DeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CartMoverBase.MoveAlongSpline"));
    struct Params_MoveAlongSpline {
        FCartSetup InCartSetup; // 0x0
        float DeltaTime; // 0x208
    }; // Size: 0x20c
    Params_MoveAlongSpline params{};
    params.InCartSetup = (FCartSetup)InCartSetup;
    params.DeltaTime = (float)DeltaTime;
    ProcessEvent(func, &params);
    InCartSetup = params.InCartSetup;
}
void ACartMoverBase::ResumeMovement() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CartMoverBase.ResumeMovement"));
    struct Params_ResumeMovement {
    }; // Size: 0x0
    Params_ResumeMovement params{};
    ProcessEvent(func, &params);
}
void ACartMoverBase::SetMaxSpeed(float InMaxSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CartMoverBase.SetMaxSpeed"));
    struct Params_SetMaxSpeed {
        float InMaxSpeed; // 0x0
    }; // Size: 0x4
    Params_SetMaxSpeed params{};
    params.InMaxSpeed = (float)InMaxSpeed;
    ProcessEvent(func, &params);
}
void ACartMoverBase::PauseMovement() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CartMoverBase.PauseMovement"));
    struct Params_PauseMovement {
    }; // Size: 0x0
    Params_PauseMovement params{};
    ProcessEvent(func, &params);
}
void ACartMoverBase::OnStopBoxEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CartMoverBase.OnStopBoxEndOverlap"));
    struct Params_OnStopBoxEndOverlap {
        UPrimitiveComponent* OverlappedComp; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
    }; // Size: 0x1c
    Params_OnStopBoxEndOverlap params{};
    params.OverlappedComp = (UPrimitiveComponent*)OverlappedComp;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    ProcessEvent(func, &params);
}
void ACartMoverBase::OnStopBoxBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CartMoverBase.OnStopBoxBeginOverlap"));
    struct Params_OnStopBoxBeginOverlap {
        UPrimitiveComponent* OverlappedComp; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
        bool bFromSweep; // 0x1c
        char pad_1d[0x3];
        FHitResult SweepResult; // 0x20
    }; // Size: 0xa8
    Params_OnStopBoxBeginOverlap params{};
    params.OverlappedComp = (UPrimitiveComponent*)OverlappedComp;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    params.bFromSweep = (bool)bFromSweep;
    params.SweepResult = (FHitResult)SweepResult;
    ProcessEvent(func, &params);
    SweepResult = params.SweepResult;
}
void ACartMoverBase::OnSlowDownBoxEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CartMoverBase.OnSlowDownBoxEndOverlap"));
    struct Params_OnSlowDownBoxEndOverlap {
        UPrimitiveComponent* OverlappedComp; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
    }; // Size: 0x1c
    Params_OnSlowDownBoxEndOverlap params{};
    params.OverlappedComp = (UPrimitiveComponent*)OverlappedComp;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    ProcessEvent(func, &params);
}
bool ACartMoverBase::IsCartBlocking(AActor* ObstructingActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CartMoverBase.IsCartBlocking"));
    struct Params_IsCartBlocking {
        AActor* ObstructingActor; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsCartBlocking params{};
    params.ObstructingActor = (AActor*)ObstructingActor;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ACartMoverBase::OnDetectedEnemyDeath(AActor* EnemyAI) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CartMoverBase.OnDetectedEnemyDeath"));
    struct Params_OnDetectedEnemyDeath {
        AActor* EnemyAI; // 0x0
    }; // Size: 0x8
    Params_OnDetectedEnemyDeath params{};
    params.EnemyAI = (AActor*)EnemyAI;
    ProcessEvent(func, &params);
}
bool ACartMoverBase::IsCharacter(AActor* ObstructingActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CartMoverBase.IsCharacter"));
    struct Params_IsCharacter {
        AActor* ObstructingActor; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_IsCharacter params{};
    params.ObstructingActor = (AActor*)ObstructingActor;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ACartMoverBase::HasStopped() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CartMoverBase.HasStopped"));
    struct Params_HasStopped {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasStopped params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool ACartMoverBase::HasReachedEndOfSpline() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CartMoverBase.HasReachedEndOfSpline"));
    struct Params_HasReachedEndOfSpline {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasReachedEndOfSpline params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ACartMoverBase::BeginMovement(FCartSetup& InCartSetup, bool bStartFromBeginning) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CartMoverBase.BeginMovement"));
    struct Params_BeginMovement {
        FCartSetup InCartSetup; // 0x0
        bool bStartFromBeginning; // 0x208
    }; // Size: 0x209
    Params_BeginMovement params{};
    params.InCartSetup = (FCartSetup)InCartSetup;
    params.bStartFromBeginning = (bool)bStartFromBeginning;
    ProcessEvent(func, &params);
    InCartSetup = params.InCartSetup;
}
