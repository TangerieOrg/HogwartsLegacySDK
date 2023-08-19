#include "AActor.hpp"
#include "FHitResult.hpp"
#include "FSplinePointEvents.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UBoxComponent.hpp"
#include "UFunction.hpp"
#include "UPrimitiveComponent.hpp"
#include "USplineComponent.hpp"
#include "UTextRenderComponent.hpp"
#include "UWorldEventSpline.hpp"
void UWorldEventSpline::UnbindAll() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventSpline.UnbindAll"));
    struct Params_UnbindAll {
    }; // Size: 0x0
    Params_UnbindAll params{};
    ProcessEvent(func, &params);
}
UWorldEventSpline* UWorldEventSpline::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WorldEventSpline");
    return (UWorldEventSpline*)res;
}
void UWorldEventSpline::Construct(FTransform& Transform) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventSpline.Construct"));
    struct Params_Construct {
        FTransform Transform; // 0x0
    }; // Size: 0x30
    Params_Construct params{};
    params.Transform = (FTransform)Transform;
    ProcessEvent(func, &params);
    Transform = params.Transform;
}
void UWorldEventSpline::UnbindAllFromEvent(FString TriggerEventName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventSpline.UnbindAllFromEvent"));
    struct Params_UnbindAllFromEvent {
        FString TriggerEventName; // 0x0
    }; // Size: 0x10
    Params_UnbindAllFromEvent params{};
    params.TriggerEventName = (FString)TriggerEventName;
    ProcessEvent(func, &params);
}
void UWorldEventSpline::EnableTriggerEvents(bool Enable) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventSpline.EnableTriggerEvents"));
    struct Params_EnableTriggerEvents {
        bool Enable; // 0x0
    }; // Size: 0x1
    Params_EnableTriggerEvents params{};
    params.Enable = (bool)Enable;
    ProcessEvent(func, &params);
}
void UWorldEventSpline::FindEventsAtSplinePoint(int32_t SplinePointIndex, TArray<FSplinePointEvents>& InSplinePointEvents, TArray<FString>& OutFoundEventNames) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventSpline.FindEventsAtSplinePoint"));
    struct Params_FindEventsAtSplinePoint {
        int32_t SplinePointIndex; // 0x0
        char pad_4[0x4];
        TArray<FSplinePointEvents> InSplinePointEvents; // 0x8
        TArray<FString> OutFoundEventNames; // 0x18
    }; // Size: 0x28
    Params_FindEventsAtSplinePoint params{};
    params.SplinePointIndex = (int32_t)SplinePointIndex;
    params.InSplinePointEvents = (TArray<FSplinePointEvents>)InSplinePointEvents;
    params.OutFoundEventNames = (TArray<FString>)OutFoundEventNames;
    ProcessEvent(func, &params);
    InSplinePointEvents = params.InSplinePointEvents;
    OutFoundEventNames = params.OutFoundEventNames;
}
void UWorldEventSpline::Unbind(FString TriggerEventName) {}
void UWorldEventSpline::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventSpline.OnOverlapBegin"));
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
void UWorldEventSpline::Bind(FString TriggerEventName) {}
UTextRenderComponent* UWorldEventSpline::AddTextAtSplinePoint(int32_t SplinePointIndex, TArray<FSplinePointEvents>& InSplinePointEvents, FVector Offset, USplineComponent* InSplineComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventSpline.AddTextAtSplinePoint"));
    struct Params_AddTextAtSplinePoint {
        int32_t SplinePointIndex; // 0x0
        char pad_4[0x4];
        TArray<FSplinePointEvents> InSplinePointEvents; // 0x8
        FVector Offset; // 0x18
        char pad_24[0x4];
        USplineComponent* InSplineComponent; // 0x28
        UTextRenderComponent* ReturnValue; // 0x30
    }; // Size: 0x38
    Params_AddTextAtSplinePoint params{};
    params.SplinePointIndex = (int32_t)SplinePointIndex;
    params.InSplinePointEvents = (TArray<FSplinePointEvents>)InSplinePointEvents;
    params.Offset = (FVector)Offset;
    params.InSplineComponent = (USplineComponent*)InSplineComponent;
    ProcessEvent(func, &params);
    InSplinePointEvents = params.InSplinePointEvents;
    return (UTextRenderComponent*)params.ReturnValue;
}
UBoxComponent* UWorldEventSpline::AddBoxColliderAtSplinePoint(int32_t SplinePointIndex, USplineComponent* InSplineComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WorldEventSpline.AddBoxColliderAtSplinePoint"));
    struct Params_AddBoxColliderAtSplinePoint {
        int32_t SplinePointIndex; // 0x0
        char pad_4[0x4];
        USplineComponent* InSplineComponent; // 0x8
        UBoxComponent* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_AddBoxColliderAtSplinePoint params{};
    params.SplinePointIndex = (int32_t)SplinePointIndex;
    params.InSplineComponent = (USplineComponent*)InSplineComponent;
    ProcessEvent(func, &params);
    return (UBoxComponent*)params.ReturnValue;
}
