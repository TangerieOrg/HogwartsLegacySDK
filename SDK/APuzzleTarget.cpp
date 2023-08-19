#include "AActor.hpp"
#include "APuzzleTarget.hpp"
#include "FHitResult.hpp"
#include "FVector.hpp"
#include "UBillboardComponent.hpp"
#include "UBoxComponent.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UPrimitiveComponent.hpp"
APuzzleTarget* APuzzleTarget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PuzzleTarget");
    return (APuzzleTarget*)res;
}
void APuzzleTarget::StartMove(AActor* OtherActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PuzzleTarget.StartMove"));
    struct Params_StartMove {
        AActor* OtherActor; // 0x0
    }; // Size: 0x8
    Params_StartMove params{};
    params.OtherActor = (AActor*)OtherActor;
    ProcessEvent(func, &params);
}
FVector APuzzleTarget::GetNewVelocity(UPrimitiveComponent* PrimComp) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PuzzleTarget.GetNewVelocity"));
    struct Params_GetNewVelocity {
        UPrimitiveComponent* PrimComp; // 0x0
        FVector ReturnValue; // 0x8
    }; // Size: 0x14
    Params_GetNewVelocity params{};
    params.PrimComp = (UPrimitiveComponent*)PrimComp;
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
void APuzzleTarget::OnTargetReached__DelegateSignature(AActor* newActor) {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.PuzzleTarget.OnTargetReached__DelegateSignature"));
    struct Params_OnTargetReached__DelegateSignature {
        AActor* newActor; // 0x0
    }; // Size: 0x8
    Params_OnTargetReached__DelegateSignature params{};
    params.newActor = (AActor*)newActor;
    ProcessEvent(func, &params);
}
void APuzzleTarget::OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PuzzleTarget.OnOverlapEnd"));
    struct Params_OnOverlapEnd {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
    }; // Size: 0x1c
    Params_OnOverlapEnd params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    ProcessEvent(func, &params);
}
void APuzzleTarget::OnTargetFinished__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("DelegateFunction /Script/Phoenix.PuzzleTarget.OnTargetFinished__DelegateSignature"));
    struct Params_OnTargetFinished__DelegateSignature {
    }; // Size: 0x0
    Params_OnTargetFinished__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void APuzzleTarget::OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.PuzzleTarget.OnOverlapBegin"));
    struct Params_OnOverlapBegin {
        UPrimitiveComponent* OverlappedComponent; // 0x0
        AActor* OtherActor; // 0x8
        UPrimitiveComponent* OtherComp; // 0x10
        int32_t OtherBodyIndex; // 0x18
        bool bFromSweep; // 0x1c
        char pad_1d[0x3];
        FHitResult SweepResult; // 0x20
    }; // Size: 0xa8
    Params_OnOverlapBegin params{};
    params.OverlappedComponent = (UPrimitiveComponent*)OverlappedComponent;
    params.OtherActor = (AActor*)OtherActor;
    params.OtherComp = (UPrimitiveComponent*)OtherComp;
    params.OtherBodyIndex = (int32_t)OtherBodyIndex;
    params.bFromSweep = (bool)bFromSweep;
    params.SweepResult = (FHitResult)SweepResult;
    ProcessEvent(func, &params);
    SweepResult = params.SweepResult;
}
