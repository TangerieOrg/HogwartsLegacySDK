#pragma once
#include <cstdint>
#include "EStandardManagedPriority.hpp"
#include "UActorComponent.hpp"
class UToolRecord;
class UObject;
class USceneComponent;
class ATool;
#pragma pack(push, 1)
class UToolSetComponent : public UActorComponent {
public:
    TArray<UToolRecord*> ToolRecords; // 0xc8
    char pad_d8[0x2d0];
    static UToolSetComponent* StaticClass();
    void StartSettingWhitelistedTools(TArray<UToolRecord*>& InTools, EStandardManagedPriority InPriority, UObject* InProvider);
    void StartSettingBlacklistedTools(TArray<UToolRecord*>& InTools, EStandardManagedPriority InPriority, UObject* InProvider);
    void SetAttachmentParent(USceneComponent* InOwnerMesh);
    void OnActiveToolChanged__DelegateSignature(ATool* Activated, ATool* Deactivated);
    bool IsToolUsageAllowed(UToolRecord* ToolRecord);
    TArray<UToolRecord*> GetToolRecords();
    int32_t GetToolRecordIndex(UToolRecord* ToolRecord);
    UToolRecord* GetToolRecordByName(FName Name);
    USceneComponent* GetAttachmentParent();
    int32_t GetActiveToolRecordIndex();
    ATool* GetActiveTool();
    void FinishSettingWhitelistedTools(EStandardManagedPriority InPriority, UObject* InProvider);
    void FinishSettingBlacklistedTools(EStandardManagedPriority InPriority, UObject* InProvider);
    ATool* ClearActiveTool();
    void AsyncLoadToolByName(FName Name);
    ATool* ActivateToolByName(FName Name);
    ATool* ActivateTool(UToolRecord* ToolRecord);
    ATool* ActivateExistingTool(ATool* Tool);
}; // Size: 0x3a8
#pragma pack(pop)
