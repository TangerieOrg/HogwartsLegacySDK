#include "AActor.hpp"
#include "ACameraStackManager.hpp"
#include "AUIDummyActor.hpp"
#include "AUI_BP_DummyActor_C.hpp"
#include "EAvatarPresetType.hpp"
#include "EEndPlayReason\Type.hpp"
#include "EFacialEmotion.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UAnimationComponent.hpp"
#include "UChaosClothConfig.hpp"
#include "UChaosClothingInteractor.hpp"
#include "UClothingInteractor.hpp"
#include "UClothingSimulationInteractor.hpp"
#include "UCustomizableCharacterComponent.hpp"
#include "UFacialComponent.hpp"
#include "UFunction.hpp"
#include "UManagedCharacterComponent.hpp"
#include "USkeletalMeshComponent.hpp"
#include "USpringArmComponent.hpp"
#include "UWidgetComponent.hpp"
AUI_BP_DummyActor_C* AUI_BP_DummyActor_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/UI/UI_BP_DummyActor.UI_BP_DummyActor_C");
    return (AUI_BP_DummyActor_C*)res;
}
void AUI_BP_DummyActor_C::I_SetDummyFullbody(FName PresetName) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_DummyActor.UI_BP_DummyActor_C.I_SetDummyFullbody"));
    struct Params_I_SetDummyFullbody {
        FName PresetName; // 0x0
    }; // Size: 0x8
    Params_I_SetDummyFullbody params{};
    params.PresetName = (FName)PresetName;
    ProcessEvent(func, &params);
}
void AUI_BP_DummyActor_C::I_SetDummyPreset(EAvatarPresetType PresetType, FName PresetName) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_DummyActor.UI_BP_DummyActor_C.I_SetDummyPreset"));
    struct Params_I_SetDummyPreset {
        EAvatarPresetType PresetType; // 0x0
        char pad_1[0x3];
        FName PresetName; // 0x4
    }; // Size: 0xc
    Params_I_SetDummyPreset params{};
    params.PresetType = (EAvatarPresetType)PresetType;
    params.PresetName = (FName)PresetName;
    ProcessEvent(func, &params);
}
void AUI_BP_DummyActor_C::Enable_Cloth_Simulation(bool Enable, USkeletalMeshComponent* CurrentSkeletalMeshComponent, float ClothBlendWeight, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable_1, int32_t CallFunc_Add_IntInt_ReturnValue_1, UClothingSimulationInteractor* CallFunc_GetClothingSimulationInteractor_ReturnValue, bool CallFunc_IsValid_ReturnValue, TArray<FName>& CallFunc_Map_Keys_Keys, int32_t Temp_int_Array_Index_Variable_1, int32_t CallFunc_Array_Length_ReturnValue, FName CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, FString CallFunc_Conv_NameToString_ReturnValue, UClothingInteractor* CallFunc_GetClothingInteractor_ReturnValue, UChaosClothingInteractor* K2Node_DynamicCast_AsChaos_Clothing_Interactor, bool K2Node_DynamicCast_bSuccess, UChaosClothConfig* CallFunc_GetChaosClothConfig_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, TArray<USkeletalMeshComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue_1, USkeletalMeshComponent* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_DummyActor.UI_BP_DummyActor_C.Enable Cloth Simulation"));
    struct Params_Enable_Cloth_Simulation {
        bool Enable; // 0x0
        char pad_1[0x7];
        USkeletalMeshComponent* CurrentSkeletalMeshComponent; // 0x8
        float ClothBlendWeight; // 0x10
        int32_t Temp_int_Loop_Counter_Variable; // 0x14
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x18
        int32_t Temp_int_Array_Index_Variable; // 0x1c
        int32_t Temp_int_Loop_Counter_Variable_1; // 0x20
        int32_t CallFunc_Add_IntInt_ReturnValue_1; // 0x24
        UClothingSimulationInteractor* CallFunc_GetClothingSimulationInteractor_ReturnValue; // 0x28
        bool CallFunc_IsValid_ReturnValue; // 0x30
        char pad_31[0x7];
        TArray<FName> CallFunc_Map_Keys_Keys; // 0x38
        int32_t Temp_int_Array_Index_Variable_1; // 0x48
        int32_t CallFunc_Array_Length_ReturnValue; // 0x4c
        FName CallFunc_Array_Get_Item; // 0x50
        bool CallFunc_Less_IntInt_ReturnValue; // 0x58
        char pad_59[0x7];
        FString CallFunc_Conv_NameToString_ReturnValue; // 0x60
        UClothingInteractor* CallFunc_GetClothingInteractor_ReturnValue; // 0x70
        UChaosClothingInteractor* K2Node_DynamicCast_AsChaos_Clothing_Interactor; // 0x78
        bool K2Node_DynamicCast_bSuccess; // 0x80
        char pad_81[0x7];
        UChaosClothConfig* CallFunc_GetChaosClothConfig_ReturnValue; // 0x88
        bool CallFunc_EqualEqual_FloatFloat_ReturnValue; // 0x90
        char pad_91[0x7];
        TArray<USkeletalMeshComponent*> CallFunc_K2_GetComponentsByClass_ReturnValue; // 0x98
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0xa8
        char pad_ac[0x4];
        USkeletalMeshComponent* CallFunc_Array_Get_Item_1; // 0xb0
        bool CallFunc_Less_IntInt_ReturnValue_1; // 0xb8
    }; // Size: 0xb9
    Params_Enable_Cloth_Simulation params{};
    params.Enable = (bool)Enable;
    params.CurrentSkeletalMeshComponent = (USkeletalMeshComponent*)CurrentSkeletalMeshComponent;
    params.ClothBlendWeight = (float)ClothBlendWeight;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable_1 = (int32_t)Temp_int_Loop_Counter_Variable_1;
    params.CallFunc_Add_IntInt_ReturnValue_1 = (int32_t)CallFunc_Add_IntInt_ReturnValue_1;
    params.CallFunc_GetClothingSimulationInteractor_ReturnValue = (UClothingSimulationInteractor*)CallFunc_GetClothingSimulationInteractor_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_Map_Keys_Keys = (TArray<FName>)CallFunc_Map_Keys_Keys;
    params.Temp_int_Array_Index_Variable_1 = (int32_t)Temp_int_Array_Index_Variable_1;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Array_Get_Item = (FName)CallFunc_Array_Get_Item;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Conv_NameToString_ReturnValue = (FString)CallFunc_Conv_NameToString_ReturnValue;
    params.CallFunc_GetClothingInteractor_ReturnValue = (UClothingInteractor*)CallFunc_GetClothingInteractor_ReturnValue;
    params.K2Node_DynamicCast_AsChaos_Clothing_Interactor = (UChaosClothingInteractor*)K2Node_DynamicCast_AsChaos_Clothing_Interactor;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_GetChaosClothConfig_ReturnValue = (UChaosClothConfig*)CallFunc_GetChaosClothConfig_ReturnValue;
    params.CallFunc_EqualEqual_FloatFloat_ReturnValue = (bool)CallFunc_EqualEqual_FloatFloat_ReturnValue;
    params.CallFunc_K2_GetComponentsByClass_ReturnValue = (TArray<USkeletalMeshComponent*>)CallFunc_K2_GetComponentsByClass_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.CallFunc_Array_Get_Item_1 = (USkeletalMeshComponent*)CallFunc_Array_Get_Item_1;
    params.CallFunc_Less_IntInt_ReturnValue_1 = (bool)CallFunc_Less_IntInt_ReturnValue_1;
    ProcessEvent(func, &params);
    CallFunc_Map_Keys_Keys = params.CallFunc_Map_Keys_Keys;
    CallFunc_K2_GetComponentsByClass_ReturnValue = params.CallFunc_K2_GetComponentsByClass_ReturnValue;
}
void AUI_BP_DummyActor_C::FullBodyPresetLoaded__DelegateSignature() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_DummyActor.UI_BP_DummyActor_C.FullBodyPresetLoaded__DelegateSignature"));
    struct Params_FullBodyPresetLoaded__DelegateSignature {
    }; // Size: 0x0
    Params_FullBodyPresetLoaded__DelegateSignature params{};
    ProcessEvent(func, &params);
}
void AUI_BP_DummyActor_C::DoCameraCutThisFrame(ACameraStackManager* CallFunc_GetPlayerCameraStackManager_ReturnValue, bool CallFunc_IsValid_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_DummyActor.UI_BP_DummyActor_C.DoCameraCutThisFrame"));
    struct Params_DoCameraCutThisFrame {
        ACameraStackManager* CallFunc_GetPlayerCameraStackManager_ReturnValue; // 0x0
        bool CallFunc_IsValid_ReturnValue; // 0x8
    }; // Size: 0x9
    Params_DoCameraCutThisFrame params{};
    params.CallFunc_GetPlayerCameraStackManager_ReturnValue = (ACameraStackManager*)CallFunc_GetPlayerCameraStackManager_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    ProcessEvent(func, &params);
}
void AUI_BP_DummyActor_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_DummyActor.UI_BP_DummyActor_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void AUI_BP_DummyActor_C::ToggleVisibility(bool Visible) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_DummyActor.UI_BP_DummyActor_C.ToggleVisibility"));
    struct Params_ToggleVisibility {
        bool Visible; // 0x0
    }; // Size: 0x1
    Params_ToggleVisibility params{};
    params.Visible = (bool)Visible;
    ProcessEvent(func, &params);
}
void AUI_BP_DummyActor_C::I_SyncDummy(FName CharID) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_DummyActor.UI_BP_DummyActor_C.I_SyncDummy"));
    struct Params_I_SyncDummy {
        FName CharID; // 0x0
    }; // Size: 0x8
    Params_I_SyncDummy params{};
    params.CharID = (FName)CharID;
    ProcessEvent(func, &params);
}
void AUI_BP_DummyActor_C::I_EquipDummyGear(FString GearID) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_DummyActor.UI_BP_DummyActor_C.I_EquipDummyGear"));
    struct Params_I_EquipDummyGear {
        FString GearID; // 0x0
    }; // Size: 0x10
    Params_I_EquipDummyGear params{};
    params.GearID = (FString)GearID;
    ProcessEvent(func, &params);
}
void AUI_BP_DummyActor_C::SetupDelegates() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_DummyActor.UI_BP_DummyActor_C.SetupDelegates"));
    struct Params_SetupDelegates {
    }; // Size: 0x0
    Params_SetupDelegates params{};
    ProcessEvent(func, &params);
}
void AUI_BP_DummyActor_C::SetFullBodyPreset(FName PresetName) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_DummyActor.UI_BP_DummyActor_C.SetFullBodyPreset"));
    struct Params_SetFullBodyPreset {
        FName PresetName; // 0x0
    }; // Size: 0x8
    Params_SetFullBodyPreset params{};
    params.PresetName = (FName)PresetName;
    ProcessEvent(func, &params);
}
void AUI_BP_DummyActor_C::SetSinglePreset(EAvatarPresetType PresetType, FName PresetName) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_DummyActor.UI_BP_DummyActor_C.SetSinglePreset"));
    struct Params_SetSinglePreset {
        EAvatarPresetType PresetType; // 0x0
        char pad_1[0x3];
        FName PresetName; // 0x4
    }; // Size: 0xc
    Params_SetSinglePreset params{};
    params.PresetType = (EAvatarPresetType)PresetType;
    params.PresetName = (FName)PresetName;
    ProcessEvent(func, &params);
}
void AUI_BP_DummyActor_C::GearLoadComplete(AActor* Actor, bool bSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_DummyActor.UI_BP_DummyActor_C.GearLoadComplete"));
    struct Params_GearLoadComplete {
        AActor* Actor; // 0x0
        bool bSuccess; // 0x8
    }; // Size: 0x9
    Params_GearLoadComplete params{};
    params.Actor = (AActor*)Actor;
    params.bSuccess = (bool)bSuccess;
    ProcessEvent(func, &params);
}
void AUI_BP_DummyActor_C::CharLoadComplete(AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_DummyActor.UI_BP_DummyActor_C.CharLoadComplete"));
    struct Params_CharLoadComplete {
        AActor* Actor; // 0x0
    }; // Size: 0x8
    Params_CharLoadComplete params{};
    params.Actor = (AActor*)Actor;
    ProcessEvent(func, &params);
}
void AUI_BP_DummyActor_C::HideDummy0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_DummyActor.UI_BP_DummyActor_C.HideDummy"));
    struct Params_HideDummy {
    }; // Size: 0x0
    Params_HideDummy params{};
    ProcessEvent(func, &params);
}
void AUI_BP_DummyActor_C::ShowDummy0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_DummyActor.UI_BP_DummyActor_C.ShowDummy"));
    struct Params_ShowDummy {
    }; // Size: 0x0
    Params_ShowDummy params{};
    ProcessEvent(func, &params);
}
void AUI_BP_DummyActor_C::OnAddOnMeshesChanged(AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_DummyActor.UI_BP_DummyActor_C.OnAddOnMeshesChanged"));
    struct Params_OnAddOnMeshesChanged {
        AActor* Actor; // 0x0
    }; // Size: 0x8
    Params_OnAddOnMeshesChanged params{};
    params.Actor = (AActor*)Actor;
    ProcessEvent(func, &params);
}
void AUI_BP_DummyActor_C::ReceiveEndPlay(EEndPlayReason::Type EndPlayReason) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_DummyActor.UI_BP_DummyActor_C.ReceiveEndPlay"));
    struct Params_ReceiveEndPlay {
        EEndPlayReason::Type EndPlayReason; // 0x0
    }; // Size: 0x1
    Params_ReceiveEndPlay params{};
    params.EndPlayReason = (EEndPlayReason::Type)EndPlayReason;
    ProcessEvent(func, &params);
}
void AUI_BP_DummyActor_C::OnPresetLoadFinished(AActor* Actor, bool Success) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_DummyActor.UI_BP_DummyActor_C.OnPresetLoadFinished"));
    struct Params_OnPresetLoadFinished {
        AActor* Actor; // 0x0
        bool Success; // 0x8
    }; // Size: 0x9
    Params_OnPresetLoadFinished params{};
    params.Actor = (AActor*)Actor;
    params.Success = (bool)Success;
    ProcessEvent(func, &params);
}
void AUI_BP_DummyActor_C::OnFinishedLoadingFullbodyPreset(AActor* Actor, bool Success) {
    static auto func = (UFunction*)(find_uobject("Function /Game/UI/UI_BP_DummyActor.UI_BP_DummyActor_C.OnFinishedLoadingFullbodyPreset"));
    struct Params_OnFinishedLoadingFullbodyPreset {
        AActor* Actor; // 0x0
        bool Success; // 0x8
    }; // Size: 0x9
    Params_OnFinishedLoadingFullbodyPreset params{};
    params.Actor = (AActor*)Actor;
    params.Success = (bool)Success;
    ProcessEvent(func, &params);
}
void AUI_BP_DummyActor_C::ExecuteUbergraph_UI_BP_DummyActor(int32_t EntryPoint) {}
