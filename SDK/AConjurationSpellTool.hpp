#pragma once
#include <cstdint>
#include "ATransfigurationSpellToolBase.hpp"
#include "FConjuredHistoryItem.hpp"
#include "FLockableTransfigurationItem.hpp"
class UClass;
#pragma pack(push, 1)
class AConjurationSpellTool : public ATransfigurationSpellToolBase {
public:
    int32_t SelectedCategory; // 0xab0
    int32_t SelectedSubcategory; // 0xab4
    int32_t SelectedIcon; // 0xab8
    FName CurrentItemID; // 0xabc
    char pad_ac4[0x3c];
    TArray<FConjuredHistoryItem> LastConjuredItems; // 0xb00
    char pad_b10[0x28];
    float MovementThresholdToSpawnNextPreview; // 0xb38
    float AngleThresholdToSpawnNextPreview; // 0xb3c
    float MinConjurationDuration; // 0xb40
    float MaxConjurationDuration; // 0xb44
    int32_t MaxNumItemsForConjurationDurationMax; // 0xb48
    bool bUseDefaultVanishmentForSingleObjectUndo; // 0xb4c
    char pad_b4d[0x3];
    UClass* UndoPreviewActorClass; // 0xb50
    float MinSecondsBetweenUndoVanishments; // 0xb58
    char pad_b5c[0x4];
    TArray<UClass*> TransformationStyles; // 0xb60
    static AConjurationSpellTool* StaticClass();
    void UpdatePreviewResourceRequirementsMet();
    void UpdateHoldConjuring(float TimeRatio);
    void UndoLastConjuredItem();
    void StartHoldConjuring();
    void ShowItemPreview(FName InItemID, FName InColorID);
    void SetCategory(FName CategoryID);
    TArray<FLockableTransfigurationItem> GetSubCategories(FName CategoryName);
    TArray<FLockableTransfigurationItem> GetItemList();
    FLockableTransfigurationItem GetItemData(FName ItemOrCategoryName);
    FName GetCurrentCategory();
    FString GetCategoryTextKey();
    void FinishHoldConjuring();
    void ConjureMenuFullStop();
    bool CanUndoLastItem();
    void CannotHoldConjuring();
    void CancelHoldConjuring(float TimeRatio);
}; // Size: 0xb70
#pragma pack(pop)
