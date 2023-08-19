#pragma once
#include <cstdint>
#include "FGeometry.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRuntimeFloatCurve.hpp"
#include "UPhoenixUserWidget.hpp"
class UWidgetAnimation;
class UImage;
class URetainerBox;
class UHorizontalBox;
class UPhoenixTextBlock;
class UUI_BP_FancyEnemyHealthBar_C;
class UOverlay;
class UObjectStateInfo;
class ANPC_Character;
class UMaterialInstanceDynamic;
class UWidget;
class UPhoenixGameInstance;
class AActor;
class UCallOutComponent;
#pragma pack(push, 1)
class UUI_BP_EnemyCallout_C : public UPhoenixUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UWidgetAnimation* Outro_SparksTime; // 0x330
    UWidgetAnimation* Outro_Erode; // 0x338
    UWidgetAnimation* Outro_Normal; // 0x340
    UWidgetAnimation* Intro; // 0x348
    UImage* EmbersCard; // 0x350
    UImage* EnemyLevelTriangle; // 0x358
    UImage* EnemyLevelTriangleShadow; // 0x360
    URetainerBox* ErosionEffect; // 0x368
    UUI_BP_FancyEnemyHealthBar_C* FancyHealthBar; // 0x370
    UOverlay* FrameMain; // 0x378
    UPhoenixTextBlock* LevelText; // 0x380
    UHorizontalBox* nameBox; // 0x388
    UOverlay* NPCStatus_Level; // 0x390
    UPhoenixTextBlock* TargetName_Label; // 0x398
    UObjectStateInfo* ObjectStateInfo; // 0x3a0
    ANPC_Character* NPC_Character; // 0x3a8
    FRuntimeFloatCurve IntroCurve; // 0x3b0
    FRuntimeFloatCurve OutroCurve; // 0x438
    UMaterialInstanceDynamic* ErosionMaterial; // 0x4c0
    static UUI_BP_EnemyCallout_C* StaticClass();
    UWidget* GetOffscreenIndicator();
    float GetOutroDuration(int32_t OutroType, bool K2Node_SwitchInteger_CmpSuccess);
    void NPC_Character_State_Setup(ANPC_Character* NPC_Character, bool CallFunc_IsValid_ReturnValue, UPhoenixGameInstance* CallFunc_GetPhoenixGameInstance_ReturnValue, bool CallFunc_GetPlayingDemoBuild_ReturnValue);
    void HealthChanged(AActor* Target, float InHealthChange, bool IndicateHUD);
    void ShowWidget(bool Revealio);
    void SetupWidget(AActor* Parent, UCallOutComponent* CallOutComponent);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void OnIntroStarted(int32_t IntroType, float IntroDuration);
    void OnOutroStarted(int32_t OutroType, float OutroDuration);
    void Construct();
    void UpdateCallOutUI(FName CharacterID, float BarPercent);
    void SetIsOffscreenCallout(bool IsOffscreen);
    void SetHasOffscreenProxyActive(bool HasOffscreenProxy);
    void AwareStateInfoChanged(bool bFromUpdate);
    void AttackThreatDataChange(bool Revealio);
    void ExecuteUbergraph_UI_BP_EnemyCallout(int32_t EntryPoint, FName CallFunc_GetDbId_ReturnValue, float CallFunc_GetLevel_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue);
}; // Size: 0x4c8
#pragma pack(pop)
