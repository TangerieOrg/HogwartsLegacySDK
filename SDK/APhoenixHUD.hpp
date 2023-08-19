#pragma once
#include <cstdint>
#include "ACharacterStateHUD.hpp"
#include "EStandardManagedPriority.hpp"
#include "FMailEntry.hpp"
class UFont;
class UTexture2D;
class UObject;
class UMaterialInterface;
class UClass;
class UPhoenixHUDWidget;
class UCurveFloat;
class UReticule;
#pragma pack(push, 1)
class APhoenixHUD : public ACharacterStateHUD {
public:
    char pad_338[0x10];
    UFont* VerdanaFont; // 0x348
    UFont* UE4Font; // 0x350
    float DefaultFontScale; // 0x358
    float GlobalHUDMult; // 0x35c
    UTexture2D* CursorMain; // 0x360
    UTexture2D* CursorHoveringButton; // 0x368
    UTexture2D* ButtonBackground; // 0x370
    UMaterialInterface* MaterialBackground; // 0x378
    float m_subReticuleMoveToTargetTime; // 0x380
    char pad_384[0x4];
    UClass* m_ReticuleWidgetClass; // 0x388
    UClass* LoadingScreenWidgetClass; // 0x390
    UPhoenixHUDWidget* HUDWidgetRef; // 0x398
    bool KnowledgeNotificationShown; // 0x3a0
    char pad_3a1[0x7];
    FString KnowledgeNotificationSubject; // 0x3a8
    char pad_3b8[0x1f0];
    bool bShowAnimDebugInfo; // 0x5a8
    char pad_5a9[0x3];
    float StickX; // 0x5ac
    float StickY; // 0x5b0
    float ModifiedStickX; // 0x5b4
    float ModifiedStickY; // 0x5b8
    char pad_5bc[0x4];
    UCurveFloat* DeadZoneCurve; // 0x5c0
    UCurveFloat* SpeedCurve; // 0x5c8
    char pad_5d0[0x40];
    static APhoenixHUD* StaticClass();
    void ToggleHUD(bool Show, bool AllowSelectiveTicking, bool AllowAnimation);
    void StartSettingHUDVisible(bool bNewValue, EStandardManagedPriority Priority, UObject* Provider, bool AllowAnimation);
    void ShowHUDGroup(FString GroupName, UObject* Provider);
    void SetDefaultHUDVisible(bool bDefaultValue, bool AllowSelectiveTicking);
    void ReadActiveOwlMail();
    void OnMailRecieved(FMailEntry Entry, int32_t DisplayPriority);
    void HideHUDGroup(FString GroupName, UObject* Provider);
    void HandleHUDGroupUnregistration(UObject* i_caller, FName& HUDGroupName);
    void HandleHUDGroupRegistration(UObject* i_caller, FName& HUDGroupName);
    UReticule* GetReticuleWidget();
    void FinishSettingHUDVisible(EStandardManagedPriority Priority, UObject* Provider, bool AllowAnimation);
    void EnableAnimDebugInfo(bool bInFlag);
}; // Size: 0x610
#pragma pack(pop)
