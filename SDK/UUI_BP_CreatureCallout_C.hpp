#pragma once
#include <cstdint>
#include "ESlateVisibility.hpp"
#include "FGeometry.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FRotator.hpp"
#include "FSlateBrush.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UHUDElementGroup.hpp"
class UProgressBar;
class UBorder;
class UImage;
class UPhoenixTextBlock;
class UHorizontalBox;
class UCreatureState;
class UCanvasPanel;
class UUI_BP_CreatureStatusSummary_C;
class AActor;
class UCreature_NurtureComponent;
class UObjectStateInfo;
class UWidget;
class ACreature_Character;
class UCreatureManager;
class ANPC_Character;
class UPhoenixGameInstance;
class UUIManager;
class APawn;
class UCreatureDefinition;
class UCallOutComponent;
#pragma pack(push, 1)
class UUI_BP_CreatureCallout_C : public UHUDElementGroup {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x2e8
    UBorder* Border_AlbinoColour; // 0x2f0
    UBorder* Border_GenderColor; // 0x2f8
    UImage* Creature_AlbinoIcon; // 0x300
    UImage* Creature_GenderIcon; // 0x308
    UHorizontalBox* CreaturePanel; // 0x310
    UUI_BP_CreatureStatusSummary_C* CreatureStatusSummary; // 0x318
    UImage* EnemyLevelTriangle; // 0x320
    UProgressBar* HealthBar; // 0x328
    UBorder* HealthBorder; // 0x330
    UPhoenixTextBlock* LevelText; // 0x338
    UBorder* nameBorder; // 0x340
    UHorizontalBox* nameBox; // 0x348
    UCanvasPanel* NPCStatus_Bottom; // 0x350
    UBorder* npcStatusBorder; // 0x358
    UPhoenixTextBlock* TargetName_Label; // 0x360
    AActor* ParentActor; // 0x368
    bool Hide_bar_when_full; // 0x370
    bool bHasSetCreatureName; // 0x371
    char pad_372[0x6];
    UCreature_NurtureComponent* NurtureComponent; // 0x378
    UCreatureState* CreatureState; // 0x380
    AActor* CreatureCharacter; // 0x388
    bool Allies; // 0x390
    bool ForceHideBar; // 0x391
    char pad_392[0x6];
    UObjectStateInfo* ObjectStateInfo; // 0x398
    static UUI_BP_CreatureCallout_C* StaticClass();
    UWidget* GetOffscreenIndicator();
    float GetOutroDuration(int32_t OutroType);
    void IsCreatureTame(ACreature_Character* Creature, bool& bIsTame, UCreatureManager* CallFunc_Get_ReturnValue, UCreatureState* CallFunc_BP_GetCreatureStateByActor_ReturnValue, FName CallFunc_GetNurturingSpaceID_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue);
    void UpdateBarPercent(float HealthPercent, float DamageAmount, bool PreviouslyHidden, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void targeted(ANPC_Character* NPC_Character, bool ShowName, bool ShowHealth, bool ShowBadge, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable_4, ESlateVisibility Temp_byte_Variable_5, bool CallFunc_Not_PreBool_ReturnValue, UPhoenixGameInstance* CallFunc_GetPhoenixGameInstance_ReturnValue, bool CallFunc_GetPlayingDemoBuild_ReturnValue, bool CallFunc_ShouldShowName_ReturnValue, bool CallFunc_ShouldShowHealthBar_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, UUIManager* CallFunc_Get_ReturnValue, bool CallFunc_ShouldShowBadge_ReturnValue, APawn* CallFunc_GetPlayerPawn_ReturnValue, bool CallFunc_AreAllies_ReturnValue, ESlateVisibility K2Node_Select_Default, ESlateVisibility K2Node_Select_Default_1, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue, bool Temp_bool_Variable_2, bool CallFunc_IsNearDeathKneeling_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, ESlateVisibility K2Node_Select_Default_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, ANPC_Character* K2Node_DynamicCast_AsNPC_Character, bool K2Node_DynamicCast_bSuccess);
    void SetupCreatureSpecificUIWild(AActor* CreatureCharacterActor, bool CallFunc_IsValid_ReturnValue, UCreature_NurtureComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, UCreatureManager* CallFunc_Get_ReturnValue, bool Temp_bool_Variable, UCreatureDefinition* CallFunc_BP_GetCreatureDefinitionForActor_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_GetCanBeCaptured_ReturnValue, bool CallFunc_GetIsAlbino_ReturnValue, bool CallFunc_GetIsMale_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, FSlateBrush CallFunc_MakeBrushFromTexture_ReturnValue, FSlateBrush CallFunc_MakeBrushFromTexture_ReturnValue_1, FSlateBrush K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_4, FString CallFunc_GetCreatureName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, UCreatureManager* CallFunc_Get_ReturnValue_1, UCreatureState* CallFunc_BP_GetCreatureStateByActor_ReturnValue);
    void UpdateCreatureSpecificUI(UCreatureState* CreatureState, bool ShouldMinimize, bool CallFunc_IsAlbino_ReturnValue, bool CallFunc_IsValid_ReturnValue, FTransform CallFunc_GetPlayerViewTransform_ReturnValue, FVector CallFunc_BreakTransform_Location, FRotator CallFunc_BreakTransform_Rotation, FVector CallFunc_BreakTransform_Scale, FVector CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_Vector_DistanceSquared_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue);
    void SetupCreatureSpecificUI(AActor* CreatureCharacterActor, bool CallFunc_IsValid_ReturnValue, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue, float CallFunc_GetUIHealthPercent_ReturnValue, FSlateBrush CallFunc_MakeBrushFromTexture_ReturnValue, FSlateBrush CallFunc_MakeBrushFromTexture_ReturnValue_1, UCreatureManager* CallFunc_Get_ReturnValue, UCreatureState* CallFunc_BP_GetCreatureStateByActor_ReturnValue, bool CallFunc_IsAlbino_ReturnValue, bool CallFunc_GetIsMale_ReturnValue, bool Temp_bool_Variable, FSlateBrush K2Node_Select_Default);
    void SetCalloutVisibility(bool IsVisible);
    void AttackThreatDataChange(bool Revealio);
    void AwareStateInfoChanged(bool bFromUpdate);
    void SetHasOffscreenProxyActive(bool HasOffscreenProxy);
    void SetIsOffscreenCallout(bool IsOffscreen);
    void UpdateCallOutUI(FName CharacterID, float BarPercent);
    void SetupWidget(AActor* Parent, UCallOutComponent* CallOutComponent);
    void ShowWidget(bool Revealio);
    void SetupCreatureUI(AActor* CreatureActor, bool IsTamed);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void HealthBarUpdate(AActor* Target, float InHealthChange, bool IndicateHUD);
    void ExecuteUbergraph_UI_BP_CreatureCallout(int32_t EntryPoint, bool K2Node_Event_IsVisible, bool K2Node_Event_Revealio_1, bool K2Node_Event_bFromUpdate, bool K2Node_Event_HasOffscreenProxy, bool K2Node_Event_IsOffscreen, FName K2Node_Event_CharacterID, float K2Node_Event_BarPercent, AActor* K2Node_Event_Parent, UCallOutComponent* K2Node_Event_CallOutComponent, bool K2Node_Event_Revealio, AActor* K2Node_Event_CreatureActor, bool K2Node_Event_IsTamed, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, UCreatureManager* CallFunc_Get_ReturnValue, bool CallFunc_IsValid_ReturnValue, FName CallFunc_GetDbId_ReturnValue, UCreatureState* CallFunc_BP_GetCreatureStateByActor_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, AActor* K2Node_CustomEvent_Target, float K2Node_CustomEvent_InHealthChange, bool K2Node_CustomEvent_IndicateHUD, ACreature_Character* K2Node_DynamicCast_AsCreature_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsCreatureTame_bIsTame, UObjectStateInfo* CallFunc_GetObjectStateInfo_ReturnValue);
}; // Size: 0x3a0
#pragma pack(pop)
