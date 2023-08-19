#pragma once
#include <cstdint>
#include "AWandTool.hpp"
#include "EEndPlayReason\Type.hpp"
#include "FComboSplitData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSkeletalMaterial.hpp"
#include "FTimerHandle.hpp"
class USkeletalMesh;
class ABP_OppugnoSpell_C;
class UNiagaraComponent;
class USkeletalMeshComponent;
class UMaterialInstanceDynamic;
class UDataTable;
class ABP_ExpelliarmusSpell_C;
class ACharacter;
class UMeshComponent;
class UTexture2D;
class UMaterialInstanceConstant;
class UObject;
class UMaterialInterface;
class USkinnedMeshComponent;
class ABiped_Player;
#pragma pack(push, 1)
class ABP_WandTool_C : public AWandTool {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x5c0
    USkeletalMeshComponent* SK_Wand; // 0x5c8
    FComboSplitData ComboSplitData; // 0x5d0
    FTimerHandle FinisherTimerHandle; // 0x608
    FTimerHandle ComboTimerHandle; // 0x610
    FComboSplitData HeavyComboSplitData; // 0x618
    FTimerHandle HeavyFinisherTimerHandle; // 0x650
    FTimerHandle HeavyComboTimerHandle; // 0x658
    UNiagaraComponent* ComboFinisherEffect; // 0x660
    bool MothFollowing; // 0x668
    char pad_669[0x7];
    ABP_OppugnoSpell_C* HardRefToOppugnoSpell; // 0x670
    ABP_ExpelliarmusSpell_C* HardRefToExpelliarmusSpell; // 0x678
    UDataTable* WandStyleData; // 0x680
    USkeletalMesh* Current_Wand_Mesh_Asset; // 0x688
    UMaterialInstanceDynamic* Wand_Dynamic_Material; // 0x690
    bool StarterWand; // 0x698
    char pad_699[0x3];
    float StarterWandProjectileSpeedMultiplier; // 0x69c
    FName WandStyle; // 0x6a0
    char pad_6a8[0x8];
    static ABP_WandTool_C* StaticClass();
    UMeshComponent* GetWandMesh0();
    void Create_Wand(USkeletalMesh*& New_Wand_Mesh_Asset, UTexture2D* TipDTexture, UTexture2D* TipNTexture, UTexture2D* TipMROTexture, UTexture2D* HandleDTexture, UTexture2D* HandleNTexture, UTexture2D* HandleMROTexture, bool Force, UMaterialInstanceDynamic*& Wand_MID, UMaterialInstanceConstant* NewLocalVar_0, UMaterialInterface* CallFunc_GetMaterial_ReturnValue, UMaterialInterface* CallFunc_GetMaterial_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
    void Assign_Skeletal_Mesh_Asset(USkinnedMeshComponent*& Mesh_Component, USkeletalMesh*& Mesh_Asset, int32_t Temp_int_Array_Index_Variable, TArray<FSkeletalMaterial>& CallFunc_GetMaterials_ReturnValue, FSkeletalMaterial CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_MaterialPermuterPrepareSetBaseMaterials_Success, bool CallFunc_IsValid_ReturnValue_1, int32_t Temp_int_Loop_Counter_Variable, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue);
    void UserConstructionScript(ACharacter* CallFunc_GetCharacter_ReturnValue, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess, FName CallFunc_GetWandStyle_ReturnValue);
    void OnLoaded_0055B6AC46721F5CE836AA9E366D0F29(UObject* Loaded);
    void OnLoaded_227F03C34C43721E008652B57453C981(UObject* Loaded);
    void OnLoaded_5867A7E746A9CA997A25E3AD69B69E55(UObject* Loaded);
    void OnLoaded_37A9E9014EFC37E0A67828B37114B2E4(UObject* Loaded);
    void OnLoaded_F3B947B4403481EDD5698AA143F14623(UObject* Loaded);
    void OnLoaded_BE44268D4D3D1064BB1C159231E445E0(UObject* Loaded);
    void OnLoaded_A0077CDF44E6650F785A2BAC001D7FA1(UObject* Loaded);
    void FinisherTimerElapsed();
    void CancelComboSplitTimer0();
    void ComboTimerExpired();
    void StartComboSplitTimer0(FComboSplitData ComboSplitData);
    void ResetCombos0();
    void ReceiveEndPlay(EEndPlayReason::Type EndPlayReason);
    void StartHeavyComboSplitTimer0(FComboSplitData ComboSplitData);
    void HeavyFinisherTimerExpired();
    void HeavyComboTimerExpired();
    void HideWand(UObject* Caller);
    void ShowWand(UObject* Caller);
    void CancelHeavyComboSplitTimer0();
    void ResetLightCombo0();
    void ResetHeavyCombo0();
    void SetWandStyle0(FName WandStyle);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_WandTool(int32_t EntryPoint);
}; // Size: 0x6b0
#pragma pack(pop)
