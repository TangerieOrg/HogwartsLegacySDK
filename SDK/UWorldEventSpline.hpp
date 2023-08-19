#pragma once
#include <cstdint>
#include "FSplinePointEvents.hpp"
#include "FVector.hpp"
#include "USplineComponent.hpp"
class UBoxComponent;
class AActor;
class UTextRenderComponent;
class UPrimitiveComponent;
struct FHitResult;
struct FTransform;
#pragma pack(push, 1)
class UWorldEventSpline : public USplineComponent {
public:
    char pad_580[0x50];
    TArray<FSplinePointEvents> SplinePointEvents; // 0x5d0
    TArray<UBoxComponent*> SplineTriggerBoxes; // 0x5e0
    TArray<UTextRenderComponent*> EventTexts; // 0x5f0
    FVector TextOffset; // 0x600
    char pad_60c[0x4];
    static UWorldEventSpline* StaticClass();
    void UnbindAllFromEvent(FString TriggerEventName);
    void UnbindAll();
    void Unbind(FString TriggerEventName);
    void OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, FHitResult& SweepResult);
    void FindEventsAtSplinePoint(int32_t SplinePointIndex, TArray<FSplinePointEvents>& InSplinePointEvents, TArray<FString>& OutFoundEventNames);
    void EnableTriggerEvents(bool Enable);
    void Construct(FTransform& Transform);
    void Bind(FString TriggerEventName);
    UTextRenderComponent* AddTextAtSplinePoint(int32_t SplinePointIndex, TArray<FSplinePointEvents>& InSplinePointEvents, FVector Offset, USplineComponent* InSplineComponent);
    UBoxComponent* AddBoxColliderAtSplinePoint(int32_t SplinePointIndex, USplineComponent* InSplineComponent);
}; // Size: 0x610
#pragma pack(pop)
