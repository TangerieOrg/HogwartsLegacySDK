#include "AActor.hpp"
#include "ABiped_Player.hpp"
#include "ACharacter.hpp"
#include "ACreature_Character.hpp"
#include "APlayerController.hpp"
#include "ECreaturePregnancyState.hpp"
#include "EInputEvent.hpp"
#include "ESlateVisibility.hpp"
#include "EUMGInputAction.hpp"
#include "FLegendItemData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FVector2D.hpp"
#include "UCallOutComponent.hpp"
#include "UCreatureManager.hpp"
#include "UCreatureState.hpp"
#include "UFunction.hpp"
#include "UHorizontalBox.hpp"
#include "ULegendItem.hpp"
#include "UObject.hpp"
#include "UPhoenixRichTextBlock.hpp"
#include "UPhoenixTextBlock.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UScreen.hpp"
#include "UTextInputScreen.hpp"
#include "UUI_BP_CreatureAbandonWidget_C.hpp"
#include "UUI_BP_CreatureFollowScreen_C.hpp"
#include "UUI_BP_CreatureManagementScreen_C.hpp"
#include "UUI_BP_CreatureStatusWidget_C.hpp"
#include "UUI_BP_Legend_Horizontal_Screen_C.hpp"
#include "UUMGSequencePlayer.hpp"
#include "UUserWidget.hpp"
#include "UWidgetAnimation.hpp"
void UUI_BP_CreatureFollowScreen_C::RenamePopupLoaded(UScreen* LoadedScreen, UTextInputScreen* K2Node_DynamicCast_AsText_Input_Screen, bool K2Node_DynamicCast_bSuccess) {}
void UUI_BP_CreatureFollowScreen_C::UpdateDPadVisibility(bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, UCreatureManager* CallFunc_Get_ReturnValue, FName CallFunc_GetNurturingSpaceID_ReturnValue, TArray<UCreatureState*>& CallFunc_GetAllCreaturesInNurturingSpace_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, ESlateVisibility K2Node_Select_Default) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureFollowScreen.UI_BP_CreatureFollowScreen_C.UpdateDPadVisibility"));
    struct Params_UpdateDPadVisibility {
        bool Temp_bool_Variable; // 0x0
        ESlateVisibility Temp_byte_Variable; // 0x1
        ESlateVisibility Temp_byte_Variable_1; // 0x2
        char pad_3[0x5];
        UCreatureManager* CallFunc_Get_ReturnValue; // 0x8
        FName CallFunc_GetNurturingSpaceID_ReturnValue; // 0x10
        TArray<UCreatureState*> CallFunc_GetAllCreaturesInNurturingSpace_ReturnValue; // 0x18
        int32_t CallFunc_Array_Length_ReturnValue; // 0x28
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x2c
        ESlateVisibility K2Node_Select_Default; // 0x2d
    }; // Size: 0x2e
    Params_UpdateDPadVisibility params{};
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.Temp_byte_Variable = (ESlateVisibility)Temp_byte_Variable;
    params.Temp_byte_Variable_1 = (ESlateVisibility)Temp_byte_Variable_1;
    params.CallFunc_Get_ReturnValue = (UCreatureManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_GetNurturingSpaceID_ReturnValue = (FName)CallFunc_GetNurturingSpaceID_ReturnValue;
    params.CallFunc_GetAllCreaturesInNurturingSpace_ReturnValue = (TArray<UCreatureState*>)CallFunc_GetAllCreaturesInNurturingSpace_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    params.K2Node_Select_Default = (ESlateVisibility)K2Node_Select_Default;
    ProcessEvent(func, &params);
    CallFunc_GetAllCreaturesInNurturingSpace_ReturnValue = params.CallFunc_GetAllCreaturesInNurturingSpace_ReturnValue;
}
void UUI_BP_CreatureFollowScreen_C::GetAsyncWrapperRenderSize(FVector2D& RenderSize) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureFollowScreen.UI_BP_CreatureFollowScreen_C.GetAsyncWrapperRenderSize"));
    struct Params_GetAsyncWrapperRenderSize {
        FVector2D RenderSize; // 0x0
    }; // Size: 0x8
    Params_GetAsyncWrapperRenderSize params{};
    params.RenderSize = (FVector2D)RenderSize;
    ProcessEvent(func, &params);
    RenderSize = params.RenderSize;
}
UUI_BP_CreatureFollowScreen_C* UUI_BP_CreatureFollowScreen_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/UI/Nurturing/Creatures/UI_BP_CreatureFollowScreen.UI_BP_CreatureFollowScreen_C");
    return (UUI_BP_CreatureFollowScreen_C*)res;
}
void UUI_BP_CreatureFollowScreen_C::OnRenameConfirmed() {}
TArray<FString> UUI_BP_CreatureFollowScreen_C::GatherMenuReaderStrings(int32_t DepthLevel, TArray<FString> TempGatheredStrings, TArray<FString>& CallFunc_GatherMenuReaderStrings_ReturnValue) {}
bool UUI_BP_CreatureFollowScreen_C::IsInAbandonConfirmation(bool CallFunc_IsVisible_ReturnValue, bool CallFunc_IsValid_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureFollowScreen.UI_BP_CreatureFollowScreen_C.IsInAbandonConfirmation"));
    struct Params_IsInAbandonConfirmation {
        bool ReturnValue; // 0x0
        bool CallFunc_IsVisible_ReturnValue; // 0x1
        bool CallFunc_IsValid_ReturnValue; // 0x2
    }; // Size: 0x3
    Params_IsInAbandonConfirmation params{};
    params.CallFunc_IsVisible_ReturnValue = (bool)CallFunc_IsVisible_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUI_BP_CreatureFollowScreen_C::SwitchToNextCreature(UCreatureManager* CallFunc_Get_ReturnValue, UCreatureManager* CallFunc_Get_ReturnValue_1, int32_t Temp_int_Array_Index_Variable, FName CallFunc_GetNurturingSpaceID_ReturnValue, TArray<UCreatureState*>& CallFunc_GetAllCreaturesInNurturingSpace_ReturnValue, UCreatureState* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, int32_t K2Node_MathExpression_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, UCreatureState* CallFunc_Array_Get_Item_1, int32_t CallFunc_GetCreatureUID_ReturnValue, AActor* CallFunc_FindCreatureActorByUID_ReturnValue, ACreature_Character* K2Node_DynamicCast_AsCreature_Character, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureFollowScreen.UI_BP_CreatureFollowScreen_C.SwitchToNextCreature"));
    struct Params_SwitchToNextCreature {
        UCreatureManager* CallFunc_Get_ReturnValue; // 0x0
        UCreatureManager* CallFunc_Get_ReturnValue_1; // 0x8
        int32_t Temp_int_Array_Index_Variable; // 0x10
        FName CallFunc_GetNurturingSpaceID_ReturnValue; // 0x14
        char pad_1c[0x4];
        TArray<UCreatureState*> CallFunc_GetAllCreaturesInNurturingSpace_ReturnValue; // 0x20
        UCreatureState* CallFunc_Array_Get_Item; // 0x30
        int32_t CallFunc_Array_Length_ReturnValue; // 0x38
        bool CallFunc_EqualEqual_ObjectObject_ReturnValue; // 0x3c
        char pad_3d[0x3];
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0x40
        int32_t K2Node_MathExpression_ReturnValue; // 0x44
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x48
        char pad_49[0x7];
        UCreatureState* CallFunc_Array_Get_Item_1; // 0x50
        int32_t CallFunc_GetCreatureUID_ReturnValue; // 0x58
        char pad_5c[0x4];
        AActor* CallFunc_FindCreatureActorByUID_ReturnValue; // 0x60
        ACreature_Character* K2Node_DynamicCast_AsCreature_Character; // 0x68
        bool K2Node_DynamicCast_bSuccess; // 0x70
        bool Temp_bool_True_if_break_was_hit_Variable; // 0x71
        bool CallFunc_Not_PreBool_ReturnValue; // 0x72
        char pad_73[0x1];
        int32_t Temp_int_Loop_Counter_Variable; // 0x74
        bool CallFunc_Less_IntInt_ReturnValue; // 0x78
        char pad_79[0x3];
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x7c
        bool CallFunc_BooleanAND_ReturnValue; // 0x80
    }; // Size: 0x81
    Params_SwitchToNextCreature params{};
    params.CallFunc_Get_ReturnValue = (UCreatureManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_Get_ReturnValue_1 = (UCreatureManager*)CallFunc_Get_ReturnValue_1;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.CallFunc_GetNurturingSpaceID_ReturnValue = (FName)CallFunc_GetNurturingSpaceID_ReturnValue;
    params.CallFunc_GetAllCreaturesInNurturingSpace_ReturnValue = (TArray<UCreatureState*>)CallFunc_GetAllCreaturesInNurturingSpace_ReturnValue;
    params.CallFunc_Array_Get_Item = (UCreatureState*)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_EqualEqual_ObjectObject_ReturnValue = (bool)CallFunc_EqualEqual_ObjectObject_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.K2Node_MathExpression_ReturnValue = (int32_t)K2Node_MathExpression_ReturnValue;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    params.CallFunc_Array_Get_Item_1 = (UCreatureState*)CallFunc_Array_Get_Item_1;
    params.CallFunc_GetCreatureUID_ReturnValue = (int32_t)CallFunc_GetCreatureUID_ReturnValue;
    params.CallFunc_FindCreatureActorByUID_ReturnValue = (AActor*)CallFunc_FindCreatureActorByUID_ReturnValue;
    params.K2Node_DynamicCast_AsCreature_Character = (ACreature_Character*)K2Node_DynamicCast_AsCreature_Character;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.Temp_bool_True_if_break_was_hit_Variable = (bool)Temp_bool_True_if_break_was_hit_Variable;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    ProcessEvent(func, &params);
    CallFunc_GetAllCreaturesInNurturingSpace_ReturnValue = params.CallFunc_GetAllCreaturesInNurturingSpace_ReturnValue;
}
void UUI_BP_CreatureFollowScreen_C::OnByproductCooldownEnded() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureFollowScreen.UI_BP_CreatureFollowScreen_C.OnByproductCooldownEnded"));
    struct Params_OnByproductCooldownEnded {
    }; // Size: 0x0
    Params_OnByproductCooldownEnded params{};
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureFollowScreen_C::SwitchToPreviousCreature(UCreatureManager* CallFunc_Get_ReturnValue, UCreatureManager* CallFunc_Get_ReturnValue_1, int32_t Temp_int_Array_Index_Variable, FName CallFunc_GetNurturingSpaceID_ReturnValue, TArray<UCreatureState*>& CallFunc_GetAllCreaturesInNurturingSpace_ReturnValue, UCreatureState* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, int32_t K2Node_MathExpression_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, UCreatureState* CallFunc_Array_Get_Item_1, int32_t CallFunc_GetCreatureUID_ReturnValue, AActor* CallFunc_FindCreatureActorByUID_ReturnValue, ACreature_Character* K2Node_DynamicCast_AsCreature_Character, bool K2Node_DynamicCast_bSuccess, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureFollowScreen.UI_BP_CreatureFollowScreen_C.SwitchToPreviousCreature"));
    struct Params_SwitchToPreviousCreature {
        UCreatureManager* CallFunc_Get_ReturnValue; // 0x0
        UCreatureManager* CallFunc_Get_ReturnValue_1; // 0x8
        int32_t Temp_int_Array_Index_Variable; // 0x10
        FName CallFunc_GetNurturingSpaceID_ReturnValue; // 0x14
        char pad_1c[0x4];
        TArray<UCreatureState*> CallFunc_GetAllCreaturesInNurturingSpace_ReturnValue; // 0x20
        UCreatureState* CallFunc_Array_Get_Item; // 0x30
        int32_t CallFunc_Array_Length_ReturnValue; // 0x38
        bool CallFunc_EqualEqual_ObjectObject_ReturnValue; // 0x3c
        char pad_3d[0x3];
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0x40
        int32_t K2Node_MathExpression_ReturnValue; // 0x44
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x48
        char pad_49[0x7];
        UCreatureState* CallFunc_Array_Get_Item_1; // 0x50
        int32_t CallFunc_GetCreatureUID_ReturnValue; // 0x58
        char pad_5c[0x4];
        AActor* CallFunc_FindCreatureActorByUID_ReturnValue; // 0x60
        ACreature_Character* K2Node_DynamicCast_AsCreature_Character; // 0x68
        bool K2Node_DynamicCast_bSuccess; // 0x70
        bool Temp_bool_True_if_break_was_hit_Variable; // 0x71
        bool CallFunc_Not_PreBool_ReturnValue; // 0x72
        char pad_73[0x1];
        int32_t Temp_int_Loop_Counter_Variable; // 0x74
        bool CallFunc_Less_IntInt_ReturnValue; // 0x78
        char pad_79[0x3];
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x7c
        bool CallFunc_BooleanAND_ReturnValue; // 0x80
    }; // Size: 0x81
    Params_SwitchToPreviousCreature params{};
    params.CallFunc_Get_ReturnValue = (UCreatureManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_Get_ReturnValue_1 = (UCreatureManager*)CallFunc_Get_ReturnValue_1;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.CallFunc_GetNurturingSpaceID_ReturnValue = (FName)CallFunc_GetNurturingSpaceID_ReturnValue;
    params.CallFunc_GetAllCreaturesInNurturingSpace_ReturnValue = (TArray<UCreatureState*>)CallFunc_GetAllCreaturesInNurturingSpace_ReturnValue;
    params.CallFunc_Array_Get_Item = (UCreatureState*)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_EqualEqual_ObjectObject_ReturnValue = (bool)CallFunc_EqualEqual_ObjectObject_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.K2Node_MathExpression_ReturnValue = (int32_t)K2Node_MathExpression_ReturnValue;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    params.CallFunc_Array_Get_Item_1 = (UCreatureState*)CallFunc_Array_Get_Item_1;
    params.CallFunc_GetCreatureUID_ReturnValue = (int32_t)CallFunc_GetCreatureUID_ReturnValue;
    params.CallFunc_FindCreatureActorByUID_ReturnValue = (AActor*)CallFunc_FindCreatureActorByUID_ReturnValue;
    params.K2Node_DynamicCast_AsCreature_Character = (ACreature_Character*)K2Node_DynamicCast_AsCreature_Character;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.Temp_bool_True_if_break_was_hit_Variable = (bool)Temp_bool_True_if_break_was_hit_Variable;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    ProcessEvent(func, &params);
    CallFunc_GetAllCreaturesInNurturingSpace_ReturnValue = params.CallFunc_GetAllCreaturesInNurturingSpace_ReturnValue;
}
bool UUI_BP_CreatureFollowScreen_C::BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent, bool CallFunc_IsInAbandonConfirmation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_IsInAbandonConfirmation_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_Get_Can_Summon_Creature_CanMoveCreature, FString CallFunc_Get_Can_Summon_Creature_ErrorMsgKey, ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue, UCreatureManager* CallFunc_Get_ReturnValue, FString CallFunc_SummonCreature_OutErrorKey, bool CallFunc_SummonCreature_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsVisible_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsVisible_ReturnValue_1, bool CallFunc_IsUnlocked_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_5, bool CallFunc_Not_PreBool_ReturnValue_6, bool CallFunc_BooleanAND_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue, ECreaturePregnancyState CallFunc_GetPregnancyState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6, bool CallFunc_EqualEqual_ByteByte_ReturnValue_7, bool CallFunc_IsInAbandonConfirmation_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_7, bool CallFunc_BooleanAND_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_4, bool CallFunc_BooleanAND_ReturnValue_5, bool CallFunc_BooleanAND_ReturnValue_6, bool CallFunc_BooleanAND_ReturnValue_7, bool CallFunc_EqualEqual_ByteByte_ReturnValue_8, bool CallFunc_EqualEqual_ByteByte_ReturnValue_9, bool CallFunc_EqualEqual_ByteByte_ReturnValue_10) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureFollowScreen.UI_BP_CreatureFollowScreen_C.BlueprintOnUMGInputAction"));
    struct Params_BlueprintOnUMGInputAction {
        EUMGInputAction InputAction; // 0x0
        EInputEvent InputEvent; // 0x1
        bool ReturnValue; // 0x2
        bool CallFunc_IsInAbandonConfirmation_ReturnValue; // 0x3
        bool CallFunc_Not_PreBool_ReturnValue; // 0x4
        bool CallFunc_Not_PreBool_ReturnValue_1; // 0x5
        bool CallFunc_Not_PreBool_ReturnValue_2; // 0x6
        bool CallFunc_EqualEqual_ByteByte_ReturnValue; // 0x7
        bool CallFunc_IsInAbandonConfirmation_ReturnValue_1; // 0x8
        bool CallFunc_Not_PreBool_ReturnValue_3; // 0x9
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_1; // 0xa
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_2; // 0xb
        bool CallFunc_Get_Can_Summon_Creature_CanMoveCreature; // 0xc
        char pad_d[0x3];
        FString CallFunc_Get_Can_Summon_Creature_ErrorMsgKey; // 0x10
        ABiped_Player* CallFunc_GetTheBipedPlayer_ReturnValue; // 0x20
        UCreatureManager* CallFunc_Get_ReturnValue; // 0x28
        FString CallFunc_SummonCreature_OutErrorKey; // 0x30
        bool CallFunc_SummonCreature_ReturnValue; // 0x40
        bool CallFunc_Not_PreBool_ReturnValue_4; // 0x41
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_3; // 0x42
        bool CallFunc_IsValid_ReturnValue; // 0x43
        bool CallFunc_IsVisible_ReturnValue; // 0x44
        bool CallFunc_IsValid_ReturnValue_1; // 0x45
        bool CallFunc_IsVisible_ReturnValue_1; // 0x46
        bool CallFunc_IsUnlocked_ReturnValue; // 0x47
        bool CallFunc_Not_PreBool_ReturnValue_5; // 0x48
        bool CallFunc_Not_PreBool_ReturnValue_6; // 0x49
        bool CallFunc_BooleanAND_ReturnValue; // 0x4a
        char pad_4b[0x1];
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x4c
        ECreaturePregnancyState CallFunc_GetPregnancyState_ReturnValue; // 0x50
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_4; // 0x51
        bool CallFunc_BooleanAND_ReturnValue_1; // 0x52
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_5; // 0x53
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_6; // 0x54
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_7; // 0x55
        bool CallFunc_IsInAbandonConfirmation_ReturnValue_2; // 0x56
        bool CallFunc_BooleanAND_ReturnValue_2; // 0x57
        bool CallFunc_Not_PreBool_ReturnValue_7; // 0x58
        bool CallFunc_BooleanAND_ReturnValue_3; // 0x59
        bool CallFunc_BooleanAND_ReturnValue_4; // 0x5a
        bool CallFunc_BooleanAND_ReturnValue_5; // 0x5b
        bool CallFunc_BooleanAND_ReturnValue_6; // 0x5c
        bool CallFunc_BooleanAND_ReturnValue_7; // 0x5d
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_8; // 0x5e
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_9; // 0x5f
        bool CallFunc_EqualEqual_ByteByte_ReturnValue_10; // 0x60
    }; // Size: 0x61
    Params_BlueprintOnUMGInputAction params{};
    params.InputAction = (EUMGInputAction)InputAction;
    params.InputEvent = (EInputEvent)InputEvent;
    params.CallFunc_IsInAbandonConfirmation_ReturnValue = (bool)CallFunc_IsInAbandonConfirmation_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue_1 = (bool)CallFunc_Not_PreBool_ReturnValue_1;
    params.CallFunc_Not_PreBool_ReturnValue_2 = (bool)CallFunc_Not_PreBool_ReturnValue_2;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue;
    params.CallFunc_IsInAbandonConfirmation_ReturnValue_1 = (bool)CallFunc_IsInAbandonConfirmation_ReturnValue_1;
    params.CallFunc_Not_PreBool_ReturnValue_3 = (bool)CallFunc_Not_PreBool_ReturnValue_3;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_1;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_2;
    params.CallFunc_Get_Can_Summon_Creature_CanMoveCreature = (bool)CallFunc_Get_Can_Summon_Creature_CanMoveCreature;
    params.CallFunc_Get_Can_Summon_Creature_ErrorMsgKey = (FString)CallFunc_Get_Can_Summon_Creature_ErrorMsgKey;
    params.CallFunc_GetTheBipedPlayer_ReturnValue = (ABiped_Player*)CallFunc_GetTheBipedPlayer_ReturnValue;
    params.CallFunc_Get_ReturnValue = (UCreatureManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_SummonCreature_OutErrorKey = (FString)CallFunc_SummonCreature_OutErrorKey;
    params.CallFunc_SummonCreature_ReturnValue = (bool)CallFunc_SummonCreature_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue_4 = (bool)CallFunc_Not_PreBool_ReturnValue_4;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_3;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_IsVisible_ReturnValue = (bool)CallFunc_IsVisible_ReturnValue;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    params.CallFunc_IsVisible_ReturnValue_1 = (bool)CallFunc_IsVisible_ReturnValue_1;
    params.CallFunc_IsUnlocked_ReturnValue = (bool)CallFunc_IsUnlocked_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue_5 = (bool)CallFunc_Not_PreBool_ReturnValue_5;
    params.CallFunc_Not_PreBool_ReturnValue_6 = (bool)CallFunc_Not_PreBool_ReturnValue_6;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_GetPregnancyState_ReturnValue = (ECreaturePregnancyState)CallFunc_GetPregnancyState_ReturnValue;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_4;
    params.CallFunc_BooleanAND_ReturnValue_1 = (bool)CallFunc_BooleanAND_ReturnValue_1;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_5 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_5;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_6 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_6;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_7 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_7;
    params.CallFunc_IsInAbandonConfirmation_ReturnValue_2 = (bool)CallFunc_IsInAbandonConfirmation_ReturnValue_2;
    params.CallFunc_BooleanAND_ReturnValue_2 = (bool)CallFunc_BooleanAND_ReturnValue_2;
    params.CallFunc_Not_PreBool_ReturnValue_7 = (bool)CallFunc_Not_PreBool_ReturnValue_7;
    params.CallFunc_BooleanAND_ReturnValue_3 = (bool)CallFunc_BooleanAND_ReturnValue_3;
    params.CallFunc_BooleanAND_ReturnValue_4 = (bool)CallFunc_BooleanAND_ReturnValue_4;
    params.CallFunc_BooleanAND_ReturnValue_5 = (bool)CallFunc_BooleanAND_ReturnValue_5;
    params.CallFunc_BooleanAND_ReturnValue_6 = (bool)CallFunc_BooleanAND_ReturnValue_6;
    params.CallFunc_BooleanAND_ReturnValue_7 = (bool)CallFunc_BooleanAND_ReturnValue_7;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_8 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_8;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_9 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_9;
    params.CallFunc_EqualEqual_ByteByte_ReturnValue_10 = (bool)CallFunc_EqualEqual_ByteByte_ReturnValue_10;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UUI_BP_CreatureFollowScreen_C::ToggleUIVisible(int32_t CallFunc_PostEventAtLocation_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureFollowScreen.UI_BP_CreatureFollowScreen_C.ToggleUIVisible"));
    struct Params_ToggleUIVisible {
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x0
        bool CallFunc_Not_PreBool_ReturnValue; // 0x4
        char pad_5[0x3];
        int32_t CallFunc_PostEventAtLocation_ReturnValue_1; // 0x8
    }; // Size: 0xc
    Params_ToggleUIVisible params{};
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.CallFunc_PostEventAtLocation_ReturnValue_1 = (int32_t)CallFunc_PostEventAtLocation_ReturnValue_1;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureFollowScreen_C::Start_or_Harvest_Byproduct(FString CallFunc_GetIsByproductHarvestableByPlayer_OutErrorKey, bool CallFunc_GetIsByproductHarvestableByPlayer_ReturnValue, bool K2Node_SwitchString_CmpSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureFollowScreen.UI_BP_CreatureFollowScreen_C.Start or Harvest Byproduct"));
    struct Params_Start_or_Harvest_Byproduct {
        FString CallFunc_GetIsByproductHarvestableByPlayer_OutErrorKey; // 0x0
        bool CallFunc_GetIsByproductHarvestableByPlayer_ReturnValue; // 0x10
        bool K2Node_SwitchString_CmpSuccess; // 0x11
    }; // Size: 0x12
    Params_Start_or_Harvest_Byproduct params{};
    params.CallFunc_GetIsByproductHarvestableByPlayer_OutErrorKey = (FString)CallFunc_GetIsByproductHarvestableByPlayer_OutErrorKey;
    params.CallFunc_GetIsByproductHarvestableByPlayer_ReturnValue = (bool)CallFunc_GetIsByproductHarvestableByPlayer_ReturnValue;
    params.K2Node_SwitchString_CmpSuccess = (bool)K2Node_SwitchString_CmpSuccess;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureFollowScreen_C::OnCreatureSummoned__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureFollowScreen.UI_BP_CreatureFollowScreen_C.OnCreatureSummoned__DelegateSignature"));
    struct Params_OnCreatureSummoned__DelegateSignature {
    }; // Size: 0x0
    Params_OnCreatureSummoned__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureFollowScreen_C::RenameCreature() {}
void UUI_BP_CreatureFollowScreen_C::ShowAbandonPopup() {}
void UUI_BP_CreatureFollowScreen_C::TriggerExitScreen(bool ToRenameScreen, int32_t Temp_int_Variable, bool Temp_bool_Variable, int32_t Temp_int_Variable_1, int32_t Temp_int_Variable_2, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_Not_PreBool_ReturnValue, ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, int32_t CallFunc_PostEventAtLocation_ReturnValue, int32_t K2Node_Select_Default, int32_t K2Node_Select_Default_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureFollowScreen.UI_BP_CreatureFollowScreen_C.TriggerExitScreen"));
    struct Params_TriggerExitScreen {
        bool ToRenameScreen; // 0x0
        char pad_1[0x3];
        int32_t Temp_int_Variable; // 0x4
        bool Temp_bool_Variable; // 0x8
        char pad_9[0x3];
        int32_t Temp_int_Variable_1; // 0xc
        int32_t Temp_int_Variable_2; // 0x10
        bool CallFunc_IsValid_ReturnValue; // 0x14
        bool Temp_bool_Variable_1; // 0x15
        bool CallFunc_Not_PreBool_ReturnValue; // 0x16
        char pad_17[0x1];
        ACharacter* CallFunc_GetPlayerCharacter_ReturnValue; // 0x18
        APlayerController* CallFunc_GetPlayerController_ReturnValue; // 0x20
        bool CallFunc_BooleanOR_ReturnValue; // 0x28
        char pad_29[0x3];
        int32_t CallFunc_PostEventAtLocation_ReturnValue; // 0x2c
        int32_t K2Node_Select_Default; // 0x30
        int32_t K2Node_Select_Default_1; // 0x34
    }; // Size: 0x38
    Params_TriggerExitScreen params{};
    params.ToRenameScreen = (bool)ToRenameScreen;
    params.Temp_int_Variable = (int32_t)Temp_int_Variable;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.Temp_int_Variable_1 = (int32_t)Temp_int_Variable_1;
    params.Temp_int_Variable_2 = (int32_t)Temp_int_Variable_2;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.Temp_bool_Variable_1 = (bool)Temp_bool_Variable_1;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.CallFunc_GetPlayerCharacter_ReturnValue = (ACharacter*)CallFunc_GetPlayerCharacter_ReturnValue;
    params.CallFunc_GetPlayerController_ReturnValue = (APlayerController*)CallFunc_GetPlayerController_ReturnValue;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_PostEventAtLocation_ReturnValue = (int32_t)CallFunc_PostEventAtLocation_ReturnValue;
    params.K2Node_Select_Default = (int32_t)K2Node_Select_Default;
    params.K2Node_Select_Default_1 = (int32_t)K2Node_Select_Default_1;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureFollowScreen_C::Construct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureFollowScreen.UI_BP_CreatureFollowScreen_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureFollowScreen_C::GiveFocusToStatusWidget(APlayerController* CallFunc_GetPlayerController_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureFollowScreen.UI_BP_CreatureFollowScreen_C.GiveFocusToStatusWidget"));
    struct Params_GiveFocusToStatusWidget {
        APlayerController* CallFunc_GetPlayerController_ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GiveFocusToStatusWidget params{};
    params.CallFunc_GetPlayerController_ReturnValue = (APlayerController*)CallFunc_GetPlayerController_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureFollowScreen_C::UpdateLegend(ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility Temp_byte_Variable_2, bool Temp_bool_Variable_1, ESlateVisibility Temp_byte_Variable_3, ESlateVisibility Temp_byte_Variable_4, bool Temp_bool_Variable_2, ESlateVisibility Temp_byte_Variable_5, ESlateVisibility Temp_byte_Variable_6, bool CallFunc_GetCanReturnToWild_ReturnValue, bool CallFunc_Get_Can_Summon_Creature_CanMoveCreature, FString CallFunc_Get_Can_Summon_Creature_ErrorMsgKey, bool CallFunc_GetCanMoveCreatureOutOfNurtureSpace_CanMoveCreature, FString CallFunc_GetCanMoveCreatureOutOfNurtureSpace_ErrorMsgKey, bool CallFunc_IsUnlocked_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, ESlateVisibility Temp_byte_Variable_7, ESlateVisibility K2Node_Select_Default, bool Temp_bool_Variable_3, bool CallFunc_GetCanRename_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, ESlateVisibility K2Node_Select_Default_1, bool CallFunc_BooleanAND_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_3, ESlateVisibility K2Node_Select_Default_2, bool CallFunc_BooleanAND_ReturnValue_4, ESlateVisibility K2Node_Select_Default_3) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureFollowScreen.UI_BP_CreatureFollowScreen_C.UpdateLegend"));
    struct Params_UpdateLegend {
        ESlateVisibility Temp_byte_Variable; // 0x0
        bool Temp_bool_Variable; // 0x1
        ESlateVisibility Temp_byte_Variable_1; // 0x2
        ESlateVisibility Temp_byte_Variable_2; // 0x3
        bool Temp_bool_Variable_1; // 0x4
        ESlateVisibility Temp_byte_Variable_3; // 0x5
        ESlateVisibility Temp_byte_Variable_4; // 0x6
        bool Temp_bool_Variable_2; // 0x7
        ESlateVisibility Temp_byte_Variable_5; // 0x8
        ESlateVisibility Temp_byte_Variable_6; // 0x9
        bool CallFunc_GetCanReturnToWild_ReturnValue; // 0xa
        bool CallFunc_Get_Can_Summon_Creature_CanMoveCreature; // 0xb
        char pad_c[0x4];
        FString CallFunc_Get_Can_Summon_Creature_ErrorMsgKey; // 0x10
        bool CallFunc_GetCanMoveCreatureOutOfNurtureSpace_CanMoveCreature; // 0x20
        char pad_21[0x7];
        FString CallFunc_GetCanMoveCreatureOutOfNurtureSpace_ErrorMsgKey; // 0x28
        bool CallFunc_IsUnlocked_ReturnValue; // 0x38
        bool CallFunc_BooleanAND_ReturnValue; // 0x39
        ESlateVisibility Temp_byte_Variable_7; // 0x3a
        ESlateVisibility K2Node_Select_Default; // 0x3b
        bool Temp_bool_Variable_3; // 0x3c
        bool CallFunc_GetCanRename_ReturnValue; // 0x3d
        bool CallFunc_BooleanAND_ReturnValue_1; // 0x3e
        ESlateVisibility K2Node_Select_Default_1; // 0x3f
        bool CallFunc_BooleanAND_ReturnValue_2; // 0x40
        bool CallFunc_BooleanAND_ReturnValue_3; // 0x41
        ESlateVisibility K2Node_Select_Default_2; // 0x42
        bool CallFunc_BooleanAND_ReturnValue_4; // 0x43
        ESlateVisibility K2Node_Select_Default_3; // 0x44
    }; // Size: 0x45
    Params_UpdateLegend params{};
    params.Temp_byte_Variable = (ESlateVisibility)Temp_byte_Variable;
    params.Temp_bool_Variable = (bool)Temp_bool_Variable;
    params.Temp_byte_Variable_1 = (ESlateVisibility)Temp_byte_Variable_1;
    params.Temp_byte_Variable_2 = (ESlateVisibility)Temp_byte_Variable_2;
    params.Temp_bool_Variable_1 = (bool)Temp_bool_Variable_1;
    params.Temp_byte_Variable_3 = (ESlateVisibility)Temp_byte_Variable_3;
    params.Temp_byte_Variable_4 = (ESlateVisibility)Temp_byte_Variable_4;
    params.Temp_bool_Variable_2 = (bool)Temp_bool_Variable_2;
    params.Temp_byte_Variable_5 = (ESlateVisibility)Temp_byte_Variable_5;
    params.Temp_byte_Variable_6 = (ESlateVisibility)Temp_byte_Variable_6;
    params.CallFunc_GetCanReturnToWild_ReturnValue = (bool)CallFunc_GetCanReturnToWild_ReturnValue;
    params.CallFunc_Get_Can_Summon_Creature_CanMoveCreature = (bool)CallFunc_Get_Can_Summon_Creature_CanMoveCreature;
    params.CallFunc_Get_Can_Summon_Creature_ErrorMsgKey = (FString)CallFunc_Get_Can_Summon_Creature_ErrorMsgKey;
    params.CallFunc_GetCanMoveCreatureOutOfNurtureSpace_CanMoveCreature = (bool)CallFunc_GetCanMoveCreatureOutOfNurtureSpace_CanMoveCreature;
    params.CallFunc_GetCanMoveCreatureOutOfNurtureSpace_ErrorMsgKey = (FString)CallFunc_GetCanMoveCreatureOutOfNurtureSpace_ErrorMsgKey;
    params.CallFunc_IsUnlocked_ReturnValue = (bool)CallFunc_IsUnlocked_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.Temp_byte_Variable_7 = (ESlateVisibility)Temp_byte_Variable_7;
    params.K2Node_Select_Default = (ESlateVisibility)K2Node_Select_Default;
    params.Temp_bool_Variable_3 = (bool)Temp_bool_Variable_3;
    params.CallFunc_GetCanRename_ReturnValue = (bool)CallFunc_GetCanRename_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue_1 = (bool)CallFunc_BooleanAND_ReturnValue_1;
    params.K2Node_Select_Default_1 = (ESlateVisibility)K2Node_Select_Default_1;
    params.CallFunc_BooleanAND_ReturnValue_2 = (bool)CallFunc_BooleanAND_ReturnValue_2;
    params.CallFunc_BooleanAND_ReturnValue_3 = (bool)CallFunc_BooleanAND_ReturnValue_3;
    params.K2Node_Select_Default_2 = (ESlateVisibility)K2Node_Select_Default_2;
    params.CallFunc_BooleanAND_ReturnValue_4 = (bool)CallFunc_BooleanAND_ReturnValue_4;
    params.K2Node_Select_Default_3 = (ESlateVisibility)K2Node_Select_Default_3;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureFollowScreen_C::DisplayErrorMessage(FString Message, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureFollowScreen.UI_BP_CreatureFollowScreen_C.DisplayErrorMessage"));
    struct Params_DisplayErrorMessage {
        FString Message; // 0x0
        UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue; // 0x10
    }; // Size: 0x18
    Params_DisplayErrorMessage params{};
    params.Message = (FString)Message;
    params.CallFunc_PlayAnimation_ReturnValue = (UUMGSequencePlayer*)CallFunc_PlayAnimation_ReturnValue;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureFollowScreen_C::Initialize() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureFollowScreen.UI_BP_CreatureFollowScreen_C.Initialize"));
    struct Params_Initialize {
    }; // Size: 0x0
    Params_Initialize params{};
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureFollowScreen_C::InEditorPostConstruct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureFollowScreen.UI_BP_CreatureFollowScreen_C.InEditorPostConstruct"));
    struct Params_InEditorPostConstruct {
    }; // Size: 0x0
    Params_InEditorPostConstruct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureFollowScreen_C::SetParent(UUserWidget* Parent) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureFollowScreen.UI_BP_CreatureFollowScreen_C.SetParent"));
    struct Params_SetParent {
        UUserWidget* Parent; // 0x0
    }; // Size: 0x8
    Params_SetParent params{};
    params.Parent = (UUserWidget*)Parent;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureFollowScreen_C::Destruct() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureFollowScreen.UI_BP_CreatureFollowScreen_C.Destruct"));
    struct Params_Destruct {
    }; // Size: 0x0
    Params_Destruct params{};
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureFollowScreen_C::OnRenameCancelled() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureFollowScreen.UI_BP_CreatureFollowScreen_C.OnRenameCancelled"));
    struct Params_OnRenameCancelled {
    }; // Size: 0x0
    Params_OnRenameCancelled params{};
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureFollowScreen_C::OnCreatureDestroyed(AActor* DestroyedActor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureFollowScreen.UI_BP_CreatureFollowScreen_C.OnCreatureDestroyed"));
    struct Params_OnCreatureDestroyed {
        AActor* DestroyedActor; // 0x0
    }; // Size: 0x8
    Params_OnCreatureDestroyed params{};
    params.DestroyedActor = (AActor*)DestroyedActor;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureFollowScreen_C::SetCamera(bool RotateToFaceCreature) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureFollowScreen.UI_BP_CreatureFollowScreen_C.SetCamera"));
    struct Params_SetCamera {
        bool RotateToFaceCreature; // 0x0
    }; // Size: 0x1
    Params_SetCamera params{};
    params.RotateToFaceCreature = (bool)RotateToFaceCreature;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureFollowScreen_C::OnNeedsChanged() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureFollowScreen.UI_BP_CreatureFollowScreen_C.OnNeedsChanged"));
    struct Params_OnNeedsChanged {
    }; // Size: 0x0
    Params_OnNeedsChanged params{};
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureFollowScreen_C::CreatureAbandon_OnClosed(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureFollowScreen.UI_BP_CreatureFollowScreen_C.CreatureAbandon_OnClosed"));
    struct Params_CreatureAbandon_OnClosed {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_CreatureAbandon_OnClosed params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureFollowScreen_C::CreatureAbandon_OnConfirm(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureFollowScreen.UI_BP_CreatureFollowScreen_C.CreatureAbandon_OnConfirm"));
    struct Params_CreatureAbandon_OnConfirm {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_CreatureAbandon_OnConfirm params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureFollowScreen_C::OnCreatureActorSpawned() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureFollowScreen.UI_BP_CreatureFollowScreen_C.OnCreatureActorSpawned"));
    struct Params_OnCreatureActorSpawned {
    }; // Size: 0x0
    Params_OnCreatureActorSpawned params{};
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureFollowScreen_C::OnIntroStarted(int32_t IntroType, float IntroDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureFollowScreen.UI_BP_CreatureFollowScreen_C.OnIntroStarted"));
    struct Params_OnIntroStarted {
        int32_t IntroType; // 0x0
        float IntroDuration; // 0x4
    }; // Size: 0x8
    Params_OnIntroStarted params{};
    params.IntroType = (int32_t)IntroType;
    params.IntroDuration = (float)IntroDuration;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureFollowScreen_C::OnOutroStarted(int32_t OutroType, float OutroDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureFollowScreen.UI_BP_CreatureFollowScreen_C.OnOutroStarted"));
    struct Params_OnOutroStarted {
        int32_t OutroType; // 0x0
        float OutroDuration; // 0x4
    }; // Size: 0x8
    Params_OnOutroStarted params{};
    params.OutroType = (int32_t)OutroType;
    params.OutroDuration = (float)OutroDuration;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureFollowScreen_C::OnOutroEnded(int32_t OutroType) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureFollowScreen.UI_BP_CreatureFollowScreen_C.OnOutroEnded"));
    struct Params_OnOutroEnded {
        int32_t OutroType; // 0x0
    }; // Size: 0x4
    Params_OnOutroEnded params{};
    params.OutroType = (int32_t)OutroType;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureFollowScreen_C::OnIntroEnded(int32_t IntroType) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureFollowScreen.UI_BP_CreatureFollowScreen_C.OnIntroEnded"));
    struct Params_OnIntroEnded {
        int32_t IntroType; // 0x0
    }; // Size: 0x4
    Params_OnIntroEnded params{};
    params.IntroType = (int32_t)IntroType;
    ProcessEvent(func, &params);
}
void UUI_BP_CreatureFollowScreen_C::ExecuteUbergraph_UI_BP_CreatureFollowScreen(int32_t EntryPoint, bool CallFunc_IsValid_ReturnValue, APlayerController* CallFunc_GetPlayerController_ReturnValue, int32_t Temp_int_Variable, int32_t Temp_int_Variable_1, int32_t CallFunc_PostEventAtLocation_ReturnValue, APlayerController* CallFunc_GetPlayerController_ReturnValue_1, UCreatureManager* CallFunc_Get_ReturnValue, int32_t CallFunc_GetCreatureUID_ReturnValue, APlayerController* CallFunc_GetPlayerControllerFromID_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, UCallOutComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue) {}
void UUI_BP_CreatureFollowScreen_C::OnCreatureChanged__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/Nurturing/Creatures/UI_BP_CreatureFollowScreen.UI_BP_CreatureFollowScreen_C.OnCreatureChanged__DelegateSignature"));
    struct Params_OnCreatureChanged__DelegateSignature {
    }; // Size: 0x0
    Params_OnCreatureChanged__DelegateSignature params{};
    ProcessEvent(func, &params);
}
