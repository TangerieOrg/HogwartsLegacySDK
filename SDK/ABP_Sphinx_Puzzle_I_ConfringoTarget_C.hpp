#pragma once
#include <cstdint>
#include "ABP_SphinxPuzzle_Base_C.hpp"
#include "EInteractiveState.hpp"
#include "FGameplayTagContainer.hpp"
#include "FHitResult.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSTR_Sphinx_Confringo_Target.hpp"
#include "FVector.hpp"
class UChildActorComponent;
class ABP_Sphinx_Puzzle_I_Part_C;
class ABP_Sphinx_Puzzle_I_Manager_C;
class ASpellTool;
class AActor;
class UInteractionArchitectAsset;
class USpellToolRecord;
#pragma pack(push, 1)
class ABP_Sphinx_Puzzle_I_ConfringoTarget_C : public ABP_SphinxPuzzle_Base_C {
public:
    UChildActorComponent* Manager; // 0x3c0
    TArray<FSTR_Sphinx_Confringo_Target> StoneLocations; // 0x3c8
    TArray<ABP_Sphinx_Puzzle_I_Part_C*> StoneArray; // 0x3d8
    float CrystalDegree; // 0x3e8
    char pad_3ec[0x4];
    static ABP_Sphinx_Puzzle_I_ConfringoTarget_C* StaticClass();
    void Build0(int32_t Temp_int_Loop_Counter_Variable, int32_t Temp_int_Array_Index_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, FSTR_Sphinx_Confringo_Target CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue_1, UChildActorComponent* CallFunc_AddComponent_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, ABP_Sphinx_Puzzle_I_Part_C* K2Node_DynamicCast_AsBP_Sphinx_Puzzle_I_Part, bool K2Node_DynamicCast_bSuccess, int32_t CallFunc_Array_Add_ReturnValue, ABP_Sphinx_Puzzle_I_Manager_C* K2Node_DynamicCast_AsBP_Sphinx_Puzzle_I_Manager, bool K2Node_DynamicCast_bSuccess_1);
    void UserConstructionScript();
    void OnAffectedBySpell(ASpellTool* SpellTool, AActor* Instigator, TArray<UInteractionArchitectAsset*>& DataAssets, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact, FHitResult& Hit, FVector& ImpactDirection);
    void OnAffectedBySpellEnd(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact);
    void OnHitBySpell(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FHitResult& Hit, FVector& ImpactDirection);
    void OnOverlappedBySpell(ASpellTool* SpellTool, AActor* Instigator, USpellToolRecord* SpellToolRecord, FName SpellType, FGameplayTagContainer Impact, FVector& MunitionLocation);
    void OnSpellEffective(AActor* Instigator);
    void OnSpellIneffective(AActor* Instigator);
    void OnSpellTooWeak(AActor* Instigator);
    void NotifyCurrentState0(EInteractiveState CurrentObjectState);
    void NotifyBeginPuzzle0(EInteractiveState State);
    void Solved();
    void ReceiveBeginPlay0();
    void PuzzleStart();
    void BndEvt__Gazebo_K2Node_ComponentBoundEvent_0_Activated__DelegateSignature();
    void ExecuteUbergraph_BP_Sphinx_Puzzle_I_ConfringoTarget(int32_t EntryPoint, int32_t Temp_int_Variable, int32_t Temp_int_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t Temp_int_Variable_2, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, int32_t CallFunc_Add_IntInt_ReturnValue_2, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, int32_t Temp_int_Variable_3, int32_t CallFunc_Add_IntInt_ReturnValue_3, bool CallFunc_AutoSaveGameData_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_IsClosed_Variable_1, bool Temp_bool_Has_Been_Initd_Variable_2, ASpellTool* K2Node_Event_SpellTool_3, AActor* K2Node_Event_Instigator_6, TArray<UInteractionArchitectAsset*>& K2Node_Event_DataAssets, USpellToolRecord* K2Node_Event_SpellToolRecord_3, FName K2Node_Event_SpellType_3, FGameplayTagContainer K2Node_Event_Impact_2, FHitResult K2Node_Event_Hit_1, FVector K2Node_Event_ImpactDirection_1, ASpellTool* K2Node_Event_SpellTool_2, AActor* K2Node_Event_Instigator_5, USpellToolRecord* K2Node_Event_SpellToolRecord_2, FName K2Node_Event_SpellType_2, FGameplayTagContainer K2Node_Event_Impact_1, ASpellTool* K2Node_Event_SpellTool_1, AActor* K2Node_Event_Instigator_4, USpellToolRecord* K2Node_Event_SpellToolRecord_1, FName K2Node_Event_SpellType_1, FHitResult K2Node_Event_Hit, FVector K2Node_Event_ImpactDirection, ASpellTool* K2Node_Event_SpellTool, AActor* K2Node_Event_Instigator_3, USpellToolRecord* K2Node_Event_SpellToolRecord, FName K2Node_Event_SpellType, FGameplayTagContainer K2Node_Event_Impact, FVector K2Node_Event_MunitionLocation, AActor* K2Node_Event_Instigator_2, AActor* K2Node_Event_Instigator_1, AActor* K2Node_Event_Instigator, EInteractiveState K2Node_Event_CurrentObjectState, EInteractiveState K2Node_Event_state, bool Temp_bool_IsClosed_Variable_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, ABP_Sphinx_Puzzle_I_Part_C* CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, ABP_Sphinx_Puzzle_I_Part_C* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, ABP_Sphinx_Puzzle_I_Part_C* CallFunc_Array_Get_Item_2, int32_t CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2, ABP_Sphinx_Puzzle_I_Part_C* CallFunc_Array_Get_Item_3, int32_t CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_3);
}; // Size: 0x3f0
#pragma pack(pop)
