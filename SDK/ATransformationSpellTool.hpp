#pragma once
#include <cstdint>
#include "ATransfigurationSpellToolBase.hpp"
#include "FVector.hpp"
class ATransfigurationPreviewActor;
class UClass;
class ATransfigurationPlaceholder;
class AActor;
#pragma pack(push, 1)
class ATransformationSpellTool : public ATransfigurationSpellToolBase {
public:
    FName TargetObjectName; // 0xab0
    char pad_ab8[0x70];
    ATransfigurationPreviewActor* LeftBehindPreviewActor; // 0xb28
    char pad_b30[0x4];
    float TransformationDuration; // 0xb34
    TArray<UClass*> TransformationStyles; // 0xb38
    char pad_b48[0x8];
    static ATransformationSpellTool* StaticClass();
    void TransformPlaceholder(ATransfigurationPlaceholder* Placeholder, AActor* ExistingActor, FVector FxInfoCenter, FVector FxInfoExtent);
    void StartHoldTransforming();
    void SpawnPlaceholderNow(ATransfigurationPlaceholder* Placeholder);
    void OnPreviewDestroyed(AActor* DestroyedActor);
    void FinishHoldTransforming();
    void ExitTransformAll();
    void EnterTransformAll();
    void CancelHoldTransforming();
}; // Size: 0xb50
#pragma pack(pop)
