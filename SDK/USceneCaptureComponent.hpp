#pragma once
#include <cstdint>
#include "ESceneCapturePrimitiveRenderMode.hpp"
#include "ESceneCaptureSource.hpp"
#include "FEngineShowFlagsSetting.hpp"
#include "USceneComponent.hpp"
class AActor;
class UPrimitiveComponent;
#pragma pack(push, 1)
class USceneCaptureComponent : public USceneComponent {
public:
    TArray<void*> HiddenComponents; // 0x220
    TArray<AActor*> HiddenActors; // 0x230
    bool bSkipRenderNiagaraFX; // 0x240
    char pad_241[0x7];
    TArray<void*> ShowOnlyComponents; // 0x248
    TArray<AActor*> ShowOnlyActors; // 0x258
    float LODDistanceFactor; // 0x268
    float MaxViewDistanceOverride; // 0x26c
    int32_t CaptureSortPriority; // 0x270
    bool bUseRayTracingIfEnabled; // 0x274
    char pad_275[0x3];
    TArray<FEngineShowFlagsSetting> ShowFlagSettings; // 0x278
    char pad_288[0x30];
    FString ProfilingEventName; // 0x2b8
    char pad_2c8[0x18];
    static USceneCaptureComponent* StaticClass();
    void ShowOnlyComponent(UPrimitiveComponent* InComponent);
    void ShowOnlyActorComponents(AActor* InActor, bool bIncludeFromChildActors);
    void SetCaptureSortPriority(int32_t NewCaptureSortPriority);
    void RemoveShowOnlyComponent(UPrimitiveComponent* InComponent);
    void RemoveShowOnlyActorComponents(AActor* InActor, bool bIncludeFromChildActors);
    void HideComponent(UPrimitiveComponent* InComponent);
    void HideActorComponents(AActor* InActor, bool bIncludeFromChildActors);
    void ClearShowOnlyComponents();
    void ClearHiddenComponents();
}; // Size: 0x2e0
#pragma pack(pop)
