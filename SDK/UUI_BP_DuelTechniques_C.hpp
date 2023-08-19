#pragma once
#include <cstdint>
#include "FDuelTechnique_UIData.hpp"
#include "FMargin.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UDuelTechniquesHUDBase.hpp"
class UWidgetAnimation;
class UUI_BP_DuelTechnique_Item_C;
class UUMGSequencePlayer;
class UInvalidationBox;
class UVerticalBox;
class UWidget;
class UVerticalBoxSlot;
#pragma pack(push, 1)
class UUI_BP_DuelTechniques_C : public UDuelTechniquesHUDBase {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x300
    UWidgetAnimation* hideDuelingTechniques; // 0x308
    UWidgetAnimation* showDuelingTechniques; // 0x310
    UInvalidationBox* InvalidationBox_DuelTechniques; // 0x318
    UVerticalBox* techniqueList; // 0x320
    static UUI_BP_DuelTechniques_C* StaticClass();
    void SequenceEvent__ENTRYPOINTUI_BP_DuelTechniques_0();
    void ClearTechniques();
    void FindTechnique(FName TechniqueID, UUI_BP_DuelTechnique_Item_C*& TechniqueItem, UUI_BP_DuelTechnique_Item_C* CurItem, FName CallFunc_GetTechniqueID_ID, bool CallFunc_EqualEqual_NameName_ReturnValue, int32_t Temp_int_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_GetChildrenCount_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue, UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, UUI_BP_DuelTechnique_Item_C* K2Node_DynamicCast_AsUI_BP_Duel_Technique_Item, bool K2Node_DynamicCast_bSuccess);
    void UpdateTechnique(FName TechniqueID, int32_t NewValue, UUI_BP_DuelTechnique_Item_C* CurItem, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32_t Temp_int_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_GetChildrenCount_ReturnValue, int32_t CallFunc_Subtract_IntInt_ReturnValue, UWidget* CallFunc_GetChildAt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, UUI_BP_DuelTechnique_Item_C* K2Node_DynamicCast_AsUI_BP_Duel_Technique_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue, FName CallFunc_GetTechniqueID_ID, bool CallFunc_EqualEqual_NameName_ReturnValue);
    void Add_Duel_Techniques(TArray<FDuelTechnique_UIData>& TechniqueData, UUI_BP_DuelTechnique_Item_C* TechniqueItem, FDuelTechnique_UIData CurTechnique, int32_t CallFunc_Array_Length_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, FDuelTechnique_UIData CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, UUI_BP_DuelTechnique_Item_C* CallFunc_Create_ReturnValue, FMargin K2Node_MakeStruct_Margin, UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void OnFadeDuelTechniquesFinished();
    void Construct();
    void OnDuelTechniqueUpdatedByID0(FName TechniqueID, int32_t NewValue);
    void OnDuelTechniquesInitialized0(TArray<FDuelTechnique_UIData>& TechniqueUIData);
    void OnDuelTechniqueProgressCompletedByID0(FName TechniqueID, bool IsNew);
    void OnTimedTechniqueUpdated0(FName TechniqueID);
    void OnDuelTechniqueProgressFailedByID0(FName TechniqueID, bool IsNew);
    void OnDuelTechniquesDone0();
    void ExecuteUbergraph_UI_BP_DuelTechniques(int32_t EntryPoint, FName K2Node_Event_TechniqueID_3, int32_t K2Node_Event_newValue, UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, UUI_BP_DuelTechnique_Item_C* CallFunc_FindTechnique_TechniqueItem, TArray<FDuelTechnique_UIData>& K2Node_Event_TechniqueUIData, bool CallFunc_IsValid_ReturnValue, FName K2Node_Event_TechniqueID_2, bool K2Node_Event_IsNew_1, UUI_BP_DuelTechnique_Item_C* CallFunc_FindTechnique_TechniqueItem_1, bool CallFunc_IsValid_ReturnValue_1, FName K2Node_Event_TechniqueID_1);
}; // Size: 0x328
#pragma pack(pop)
