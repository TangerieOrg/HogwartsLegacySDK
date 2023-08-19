#pragma once
#include <cstdint>
#include "ECreaturePregnancyState.hpp"
#include "EInputEvent.hpp"
#include "ESlateVisibility.hpp"
#include "EUMGInputAction.hpp"
#include "FLegendItemData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UPhoenixUserWidget.hpp"
class UWidgetAnimation;
class UCreatureState;
class UHorizontalBox;
class UUI_BP_Legend_Horizontal_Screen_C;
class UPhoenixTextBlock;
struct FVector2D;
class AActor;
class UUI_BP_CreatureStatusWidget_C;
class UPhoenixRichTextBlock;
class UUI_BP_CreatureAbandonWidget_C;
class ULegendItem;
class UCallOutComponent;
class UUI_BP_CreatureManagementScreen_C;
class UCreatureManager;
class ACreature_Character;
class UScreen;
class UTextInputScreen;
class ABiped_Player;
class ACharacter;
class APlayerController;
class UUMGSequencePlayer;
class UUserWidget;
class UObject;
#pragma pack(push, 1)
class UUI_BP_CreatureFollowScreen_C : public UPhoenixUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x328
    UWidgetAnimation* Legend_OUT; // 0x330
    UWidgetAnimation* ShowErrorMessage; // 0x338
    UPhoenixTextBlock* CreatureNameText; // 0x340
    UUI_BP_CreatureStatusWidget_C* creatureStatusWidget; // 0x348
    UPhoenixRichTextBlock* DPad_Left; // 0x350
    UPhoenixRichTextBlock* Dpad_Right; // 0x358
    UHorizontalBox* dpadSwitcher; // 0x360
    UPhoenixTextBlock* ErrorMessageText; // 0x368
    UUI_BP_Legend_Horizontal_Screen_C* ScreenLegend; // 0x370
    AActor* Creature; // 0x378
    UCreatureState* CreatureState; // 0x380
    char pad_388[0x10];
    float SpecialHoldRequiredDuration; // 0x398
    bool RenamePopupIsOpen; // 0x39c
    bool IsScreenExitingToRenamePopup; // 0x39d
    char pad_39e[0x2];
    UUI_BP_CreatureAbandonWidget_C* AbandonWidget; // 0x3a0
    ULegendItem* LegendItemHarvestReturn; // 0x3a8
    ULegendItem* LegendItemRename; // 0x3b0
    ULegendItem* LegendItemRelease; // 0x3b8
    ULegendItem* LegendItemShowHide; // 0x3c0
    ULegendItem* LegendItemBack; // 0x3c8
    ULegendItem* LegendSummonCreature; // 0x3d0
    bool UIVisible; // 0x3d8
    bool IsScreenExitingFromCreatureReleased; // 0x3d9
    bool HidNurturingHUDSocket; // 0x3da
    bool RenamePopupLoading; // 0x3db
    char pad_3dc[0x4];
    TArray<FLegendItemData> LegendData; // 0x3e0
    int32_t LegendIdx; // 0x3f0
    char pad_3f4[0x14];
    bool CreatureIsSummoned; // 0x408
    char pad_409[0x7];
    UUI_BP_CreatureManagementScreen_C* ParentCreatureManagementScreen; // 0x410
    static UUI_BP_CreatureFollowScreen_C* StaticClass();
    void GetAsyncWrapperRenderSize(FVector2D& RenderSize);
    TArray<FString> GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue);
    bool IsInAbandonConfirmation(bool CallFunc_IsVisible_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void UpdateDPadVisibility(bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, UCreatureManager* CallFunc_Get_ReturnValue, FName CallFunc_GetNurturingSpaceID_ReturnValue, TArray<UCreatureState*>& CallFunc_GetAllCreaturesInNurturingSpace_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, ESlateVisibility K2Node_Select_Default);
    void SwitchToPreviousCreature(UCreatureManager* CallFunc_Get_ReturnValue, UCreatureManager* CallFunc_Get_ReturnValue_1, int32_t Temp_int_Array_Index_Variable, FName CallFunc_GetNurturingSpaceID_ReturnValue, TArray<UCreatureState*>& CallFunc_GetAllCreaturesInNurturingSpace_ReturnValue, UCreatureState* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, int32_t K2Node_MathExpression_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, UCreatureState* CallFunc_Array_Get_Item_1, int32_t CallFunc_GetCreatureUID_ReturnValue, AActor* CallFunc_FindCreatureActorByUID_ReturnValue, ACreature_Character* K2Node_DynamicCast_AsCreature_Character, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
    void SwitchToNextCreature(UCreatureManager* CallFunc_Get_ReturnValue, UCreatureManager* CallFunc_Get_ReturnValue_1, int32_t Temp_int_Array_Index_Variable, FName CallFunc_GetNurturingSpaceID_ReturnValue, TArray<UCreatureState*>& CallFunc_GetAllCreaturesInNurturingSpace_ReturnValue, UCreatureState* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, int32_t K2Node_MathExpression_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, UCreatureState* CallFunc_Array_Get_Item_1, int32_t CallFunc_GetCreatureUID_ReturnValue, AActor* CallFunc_FindCreatureActorByUID_ReturnValue, ACreature_Character* K2Node_DynamicCast_AsCreature_Character, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
    void RenamePopupLoaded(UScreen* LoadedScreen, UTextInputScreen* K2Node_DynamicCast_AsText_Input_Screen, bool K2Node_DynamicCast_bSuccess);
    bool BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, bool CallFunc_IsInAbandonConfirmation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsInAbandonConfirmation_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_Get_Can_Summon_Creature_CanMoveCreature, FString CallFunc_Get_Can_Summon_Creature_ErrorMsgKey, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, UCreatureManager* CallFunc_Get_ReturnValue, FString CallFunc_SummonCreature_OutErrorKey, bool CallFunc_SummonCreature_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsVisible_ReturnValue_1, bool CallFunc_IsUnlocked_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_5, bool CallFunc_Not_PreBool_ReturnValue_6, bool CallFunc_BooleanAND_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue, ECreaturePregnancyState CallFunc_GetPregnancyState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6, bool CallFunc_EqualEqual_ByteByte_ReturnValue_7, bool CallFunc_IsInAbandonConfirmation_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_7, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_6, bool CallFunc_BooleanAND_ReturnValue_7, bool CallFunc_EqualEqual_ByteByte_ReturnValue_8, bool CallFunc_EqualEqual_ByteByte_ReturnValue_9, bool CallFunc_EqualEqual_ByteByte_ReturnValue_10);
    void ToggleUIVisible(int32_t CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1);
    void Start_or_Harvest_Byproduct(FString CallFunc_GetIsByproductHarvestableByPlayer_OutErrorKey, bool CallFunc_GetIsByproductHarvestableByPlayer_ReturnValue, bool K2Node_SwitchString_CmpSuccess);
    void RenameCreature();
    void ShowAbandonPopup();
    void TriggerExitScreen(bool ToRenameScreen, int32_t Temp_int_Variable, bool Temp_bool_Variable, int32_t Temp_int_Variable_1, int32_t Temp_int_Variable_2, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_Not_PreBool_ReturnValue, ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t K2Node_Select_Default, int32_t K2Node_Select_Default_1);
    void GiveFocusToStatusWidget(APlayerController* CallFunc_GetPlayerController_ReturnValue);
    void UpdateLegend(ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility Temp_byte_Variable_2, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable_3, ESlateVisibility Temp_byte_Variable_4, bool Temp_bool_Variable_2, ESlateVisibility Temp_byte_Variable_5, ESlateVisibility Temp_byte_Variable_6, bool CallFunc_GetCanReturnToWild_ReturnValue, bool CallFunc_Get_Can_Summon_Creature_CanMoveCreature, FString CallFunc_Get_Can_Summon_Creature_ErrorMsgKey, bool CallFunc_GetCanMoveCreatureOutOfNurtureSpace_CanMoveCreature, FString CallFunc_GetCanMoveCreatureOutOfNurtureSpace_ErrorMsgKey, bool CallFunc_IsUnlocked_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, ESlateVisibility Temp_byte_Variable_7, ESlateVisibility K2Node_Select_Default, bool Temp_bool_Variable_3, bool CallFunc_GetCanRename_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, ESlateVisibility K2Node_Select_Default_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, ESlateVisibility K2Node_Select_Default_2, bool CallFunc_BooleanAND_ReturnValue_4, ESlateVisibility K2Node_Select_Default_3);
    void DisplayErrorMessage(FString Message, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void Initialize();
    void InEditorPostConstruct();
    void SetParent(UUserWidget* Parent);
    void Construct();
    void Destruct();
    void OnRenameConfirmed();
    void OnRenameCancelled();
    void OnCreatureDestroyed(AActor* DestroyedActor);
    void SetCamera(bool RotateToFaceCreature);
    void OnNeedsChanged();
    void CreatureAbandon_OnClosed(UObject* Caller);
    void CreatureAbandon_OnConfirm(UObject* Caller);
    void OnByproductCooldownEnded();
    void OnCreatureActorSpawned();
    void OnIntroStarted(int32_t IntroType, float IntroDuration);
    void OnOutroStarted(int32_t OutroType, float OutroDuration);
    void OnOutroEnded(int32_t OutroType);
    void OnIntroEnded(int32_t IntroType);
    void ExecuteUbergraph_UI_BP_CreatureFollowScreen(int32_t EntryPoint, bool CallFunc_IsValid_ReturnValue, APlayerController* CallFunc_GetPlayerController_ReturnValue, int32_t Temp_int_Variable, int32_t Temp_int_Variable_1, int32_t CallFunc_PostEventAtLocation_ReturnValue, APlayerController* CallFunc_GetPlayerController_ReturnValue_1, UCreatureManager* CallFunc_Get_ReturnValue, int32_t CallFunc_GetCreatureUID_ReturnValue, APlayerController* CallFunc_GetPlayerControllerFromID_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, UCallOutComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue);
    void OnCreatureSummoned__DelegateSignature();
    void OnCreatureChanged__DelegateSignature();
}; // Size: 0x418
#pragma pack(pop)
