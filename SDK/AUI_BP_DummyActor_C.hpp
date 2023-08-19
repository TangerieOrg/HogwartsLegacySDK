#pragma once
#include <cstdint>
#include "AUIDummyActor.hpp"
#include "EAvatarPresetType.hpp"
#include "EEndPlayReason\Type.hpp"
#include "EFacialEmotion.hpp"
#include "FPointerToUberGraphFrame.hpp"
class USpringArmComponent;
class UWidgetComponent;
class UClothingSimulationInteractor;
class USkeletalMeshComponent;
class UManagedCharacterComponent;
class UAnimationComponent;
class UClothingInteractor;
class UFacialComponent;
class UCustomizableCharacterComponent;
class UChaosClothingInteractor;
class UChaosClothConfig;
class ACameraStackManager;
class AActor;
#pragma pack(push, 1)
class AUI_BP_DummyActor_C : public AUIDummyActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x540
    UWidgetComponent* UIWidget; // 0x548
    UManagedCharacterComponent* ManagedCharacter; // 0x550
    UAnimationComponent* Animation; // 0x558
    USpringArmComponent* FaceSpringArm; // 0x560
    UFacialComponent* Facial; // 0x568
    UCustomizableCharacterComponent* CustomizableCharacter; // 0x570
    bool IsGearLoading; // 0x578
    bool IsBodyLoading; // 0x579
    bool bDelegatesSetup; // 0x57a
    bool EnableClothSimulation; // 0x57b
    float ClothSimulationVelocityScale; // 0x57c
    bool Override_Facial_Emotion; // 0x580
    EFacialEmotion Override_Emotion; // 0x581
    bool BeginPlay; // 0x582
    char pad_583[0x1d];
    static AUI_BP_DummyActor_C* StaticClass();
    void Enable_Cloth_Simulation(bool Enable, USkeletalMeshComponent* CurrentSkeletalMeshComponent, float ClothBlendWeight, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue_1, UClothingSimulationInteractor* CallFunc_GetClothingSimulationInteractor_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<FName>& CallFunc_Map_Keys_Keys, int32_t Temp_int_Array_Index_Variable_1, int32_t CallFunc_Array_Length_ReturnValue, FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, UClothingInteractor* CallFunc_GetClothingInteractor_ReturnValue, UChaosClothingInteractor* K2Node_DynamicCast_AsChaos_Clothing_Interactor, bool K2Node_DynamicCast_bSuccess, UChaosClothConfig* CallFunc_GetChaosClothConfig_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, TArray<USkeletalMeshComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, USkeletalMeshComponent* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1);
    void DoCameraCutThisFrame(ACameraStackManager* CallFunc_GetPlayerCameraStackManager_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void ToggleVisibility(bool Visible);
    void I_SetDummyPreset(EAvatarPresetType PresetType, FName PresetName);
    void I_SyncDummy(FName CharID);
    void I_EquipDummyGear(FString GearID);
    void ReceiveBeginPlay();
    void SetFullBodyPreset(FName PresetName);
    void SetSinglePreset(EAvatarPresetType PresetType, FName PresetName);
    void GearLoadComplete(AActor* Actor, bool bSuccess);
    void CharLoadComplete(AActor* Actor);
    void HideDummy0();
    void ShowDummy0();
    void SetupDelegates();
    void OnAddOnMeshesChanged(AActor* Actor);
    void ReceiveEndPlay(EEndPlayReason::Type EndPlayReason);
    void OnPresetLoadFinished(AActor* Actor, bool Success);
    void OnFinishedLoadingFullbodyPreset(AActor* Actor, bool Success);
    void I_SetDummyFullbody(FName PresetName);
    void ExecuteUbergraph_UI_BP_DummyActor(int32_t EntryPoint);
    void FullBodyPresetLoaded__DelegateSignature();
}; // Size: 0x5a0
#pragma pack(pop)
