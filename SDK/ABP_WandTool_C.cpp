#include "ABP_ExpelliarmusSpell_C.hpp"
#include "ABP_OppugnoSpell_C.hpp"
#include "ABP_WandTool_C.hpp"
#include "ABiped_Player.hpp"
#include "ACharacter.hpp"
#include "AWandTool.hpp"
#include "EEndPlayReason\Type.hpp"
#include "FComboSplitData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSkeletalMaterial.hpp"
#include "FTimerHandle.hpp"
#include "UDataTable.hpp"
#include "UFunction.hpp"
#include "UMaterialInstanceConstant.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UMaterialInterface.hpp"
#include "UMeshComponent.hpp"
#include "UNiagaraComponent.hpp"
#include "UObject.hpp"
#include "USkeletalMesh.hpp"
#include "USkeletalMeshComponent.hpp"
#include "USkinnedMeshComponent.hpp"
#include "UTexture2D.hpp"
void ABP_WandTool_C::OnLoaded_0055B6AC46721F5CE836AA9E366D0F29(UObject* Loaded) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Items/Wand/BP_WandTool.BP_WandTool_C.OnLoaded_0055B6AC46721F5CE836AA9E366D0F29"));
    struct Params_OnLoaded_0055B6AC46721F5CE836AA9E366D0F29 {
        UObject* Loaded; // 0x0
    }; // Size: 0x8
    Params_OnLoaded_0055B6AC46721F5CE836AA9E366D0F29 params{};
    params.Loaded = (UObject*)Loaded;
    ProcessEvent(func, &params);
}
ABP_WandTool_C* ABP_WandTool_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/ToolSet/Items/Wand/BP_WandTool.BP_WandTool_C");
    return (ABP_WandTool_C*)res;
}
void ABP_WandTool_C::OnLoaded_5867A7E746A9CA997A25E3AD69B69E55(UObject* Loaded) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Items/Wand/BP_WandTool.BP_WandTool_C.OnLoaded_5867A7E746A9CA997A25E3AD69B69E55"));
    struct Params_OnLoaded_5867A7E746A9CA997A25E3AD69B69E55 {
        UObject* Loaded; // 0x0
    }; // Size: 0x8
    Params_OnLoaded_5867A7E746A9CA997A25E3AD69B69E55 params{};
    params.Loaded = (UObject*)Loaded;
    ProcessEvent(func, &params);
}
void ABP_WandTool_C::OnLoaded_A0077CDF44E6650F785A2BAC001D7FA1(UObject* Loaded) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Items/Wand/BP_WandTool.BP_WandTool_C.OnLoaded_A0077CDF44E6650F785A2BAC001D7FA1"));
    struct Params_OnLoaded_A0077CDF44E6650F785A2BAC001D7FA1 {
        UObject* Loaded; // 0x0
    }; // Size: 0x8
    Params_OnLoaded_A0077CDF44E6650F785A2BAC001D7FA1 params{};
    params.Loaded = (UObject*)Loaded;
    ProcessEvent(func, &params);
}
void ABP_WandTool_C::OnLoaded_227F03C34C43721E008652B57453C981(UObject* Loaded) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Items/Wand/BP_WandTool.BP_WandTool_C.OnLoaded_227F03C34C43721E008652B57453C981"));
    struct Params_OnLoaded_227F03C34C43721E008652B57453C981 {
        UObject* Loaded; // 0x0
    }; // Size: 0x8
    Params_OnLoaded_227F03C34C43721E008652B57453C981 params{};
    params.Loaded = (UObject*)Loaded;
    ProcessEvent(func, &params);
}
UMeshComponent* ABP_WandTool_C::GetWandMesh0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Items/Wand/BP_WandTool.BP_WandTool_C.GetWandMesh"));
    struct Params_GetWandMesh {
        UMeshComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetWandMesh params{};
    ProcessEvent(func, &params);
    return (UMeshComponent*)params.ReturnValue;
}
void ABP_WandTool_C::Create_Wand(USkeletalMesh*& New_Wand_Mesh_Asset, UTexture2D* TipDTexture, UTexture2D* TipNTexture, UTexture2D* TipMROTexture, UTexture2D* HandleDTexture, UTexture2D* HandleNTexture, UTexture2D* HandleMROTexture, bool Force, UMaterialInstanceDynamic*& Wand_MID, UMaterialInstanceConstant* NewLocalVar_0, UMaterialInterface* CallFunc_GetMaterial_ReturnValue, UMaterialInterface* CallFunc_GetMaterial_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanOR_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Items/Wand/BP_WandTool.BP_WandTool_C.Create Wand"));
    struct Params_Create_Wand {
        USkeletalMesh* New_Wand_Mesh_Asset; // 0x0
        UTexture2D* TipDTexture; // 0x8
        UTexture2D* TipNTexture; // 0x10
        UTexture2D* TipMROTexture; // 0x18
        UTexture2D* HandleDTexture; // 0x20
        UTexture2D* HandleNTexture; // 0x28
        UTexture2D* HandleMROTexture; // 0x30
        bool Force; // 0x38
        char pad_39[0x7];
        UMaterialInstanceDynamic* Wand_MID; // 0x40
        UMaterialInstanceConstant* NewLocalVar_0; // 0x48
        UMaterialInterface* CallFunc_GetMaterial_ReturnValue; // 0x50
        UMaterialInterface* CallFunc_GetMaterial_ReturnValue_1; // 0x58
        bool CallFunc_IsValid_ReturnValue; // 0x60
        char pad_61[0x7];
        UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x68
        UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1; // 0x70
        bool CallFunc_NotEqual_ObjectObject_ReturnValue; // 0x78
        bool CallFunc_BooleanOR_ReturnValue; // 0x79
    }; // Size: 0x7a
    Params_Create_Wand params{};
    params.New_Wand_Mesh_Asset = (USkeletalMesh*)New_Wand_Mesh_Asset;
    params.TipDTexture = (UTexture2D*)TipDTexture;
    params.TipNTexture = (UTexture2D*)TipNTexture;
    params.TipMROTexture = (UTexture2D*)TipMROTexture;
    params.HandleDTexture = (UTexture2D*)HandleDTexture;
    params.HandleNTexture = (UTexture2D*)HandleNTexture;
    params.HandleMROTexture = (UTexture2D*)HandleMROTexture;
    params.Force = (bool)Force;
    params.Wand_MID = (UMaterialInstanceDynamic*)Wand_MID;
    params.NewLocalVar_0 = (UMaterialInstanceConstant*)NewLocalVar_0;
    params.CallFunc_GetMaterial_ReturnValue = (UMaterialInterface*)CallFunc_GetMaterial_ReturnValue;
    params.CallFunc_GetMaterial_ReturnValue_1 = (UMaterialInterface*)CallFunc_GetMaterial_ReturnValue_1;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_CreateDynamicMaterialInstance_ReturnValue = (UMaterialInstanceDynamic*)CallFunc_CreateDynamicMaterialInstance_ReturnValue;
    params.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = (UMaterialInstanceDynamic*)CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
    params.CallFunc_NotEqual_ObjectObject_ReturnValue = (bool)CallFunc_NotEqual_ObjectObject_ReturnValue;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    ProcessEvent(func, &params);
    New_Wand_Mesh_Asset = params.New_Wand_Mesh_Asset;
    Wand_MID = params.Wand_MID;
}
void ABP_WandTool_C::HeavyComboTimerExpired() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Items/Wand/BP_WandTool.BP_WandTool_C.HeavyComboTimerExpired"));
    struct Params_HeavyComboTimerExpired {
    }; // Size: 0x0
    Params_HeavyComboTimerExpired params{};
    ProcessEvent(func, &params);
}
void ABP_WandTool_C::FinisherTimerElapsed() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Items/Wand/BP_WandTool.BP_WandTool_C.FinisherTimerElapsed"));
    struct Params_FinisherTimerElapsed {
    }; // Size: 0x0
    Params_FinisherTimerElapsed params{};
    ProcessEvent(func, &params);
}
void ABP_WandTool_C::Assign_Skeletal_Mesh_Asset(USkinnedMeshComponent*& Mesh_Component, USkeletalMesh*& Mesh_Asset, int32_t Temp_int_Array_Index_Variable, TArray<FSkeletalMaterial>& CallFunc_GetMaterials_ReturnValue, FSkeletalMaterial CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_MaterialPermuterPrepareSetBaseMaterials_Success, bool CallFunc_IsValid_ReturnValue_1, int32_t Temp_int_Loop_Counter_Variable, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Items/Wand/BP_WandTool.BP_WandTool_C.Assign Skeletal Mesh Asset"));
    struct Params_Assign_Skeletal_Mesh_Asset {
        USkinnedMeshComponent* Mesh_Component; // 0x0
        USkeletalMesh* Mesh_Asset; // 0x8
        int32_t Temp_int_Array_Index_Variable; // 0x10
        char pad_14[0x4];
        TArray<FSkeletalMaterial> CallFunc_GetMaterials_ReturnValue; // 0x18
        FSkeletalMaterial CallFunc_Array_Get_Item; // 0x28
        int32_t CallFunc_Array_Length_ReturnValue; // 0x50
        bool CallFunc_IsValid_ReturnValue; // 0x54
        bool CallFunc_MaterialPermuterPrepareSetBaseMaterials_Success; // 0x55
        bool CallFunc_IsValid_ReturnValue_1; // 0x56
        char pad_57[0x1];
        int32_t Temp_int_Loop_Counter_Variable; // 0x58
        bool CallFunc_BooleanAND_ReturnValue; // 0x5c
        bool CallFunc_Less_IntInt_ReturnValue; // 0x5d
        char pad_5e[0x2];
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x60
    }; // Size: 0x64
    Params_Assign_Skeletal_Mesh_Asset params{};
    params.Mesh_Component = (USkinnedMeshComponent*)Mesh_Component;
    params.Mesh_Asset = (USkeletalMesh*)Mesh_Asset;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.CallFunc_GetMaterials_ReturnValue = (TArray<FSkeletalMaterial>)CallFunc_GetMaterials_ReturnValue;
    params.CallFunc_Array_Get_Item = (FSkeletalMaterial)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_MaterialPermuterPrepareSetBaseMaterials_Success = (bool)CallFunc_MaterialPermuterPrepareSetBaseMaterials_Success;
    params.CallFunc_IsValid_ReturnValue_1 = (bool)CallFunc_IsValid_ReturnValue_1;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    ProcessEvent(func, &params);
    Mesh_Component = params.Mesh_Component;
    Mesh_Asset = params.Mesh_Asset;
    CallFunc_GetMaterials_ReturnValue = params.CallFunc_GetMaterials_ReturnValue;
}
void ABP_WandTool_C::UserConstructionScript(ACharacter* CallFunc_GetCharacter_ReturnValue, ABiped_Player* K2Node_DynamicCast_AsBiped_Player, bool K2Node_DynamicCast_bSuccess, FName CallFunc_GetWandStyle_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Items/Wand/BP_WandTool.BP_WandTool_C.UserConstructionScript"));
    struct Params_UserConstructionScript {
        ACharacter* CallFunc_GetCharacter_ReturnValue; // 0x0
        ABiped_Player* K2Node_DynamicCast_AsBiped_Player; // 0x8
        bool K2Node_DynamicCast_bSuccess; // 0x10
        char pad_11[0x3];
        FName CallFunc_GetWandStyle_ReturnValue; // 0x14
    }; // Size: 0x1c
    Params_UserConstructionScript params{};
    params.CallFunc_GetCharacter_ReturnValue = (ACharacter*)CallFunc_GetCharacter_ReturnValue;
    params.K2Node_DynamicCast_AsBiped_Player = (ABiped_Player*)K2Node_DynamicCast_AsBiped_Player;
    params.K2Node_DynamicCast_bSuccess = (bool)K2Node_DynamicCast_bSuccess;
    params.CallFunc_GetWandStyle_ReturnValue = (FName)CallFunc_GetWandStyle_ReturnValue;
    ProcessEvent(func, &params);
}
void ABP_WandTool_C::OnLoaded_37A9E9014EFC37E0A67828B37114B2E4(UObject* Loaded) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Items/Wand/BP_WandTool.BP_WandTool_C.OnLoaded_37A9E9014EFC37E0A67828B37114B2E4"));
    struct Params_OnLoaded_37A9E9014EFC37E0A67828B37114B2E4 {
        UObject* Loaded; // 0x0
    }; // Size: 0x8
    Params_OnLoaded_37A9E9014EFC37E0A67828B37114B2E4 params{};
    params.Loaded = (UObject*)Loaded;
    ProcessEvent(func, &params);
}
void ABP_WandTool_C::OnLoaded_F3B947B4403481EDD5698AA143F14623(UObject* Loaded) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Items/Wand/BP_WandTool.BP_WandTool_C.OnLoaded_F3B947B4403481EDD5698AA143F14623"));
    struct Params_OnLoaded_F3B947B4403481EDD5698AA143F14623 {
        UObject* Loaded; // 0x0
    }; // Size: 0x8
    Params_OnLoaded_F3B947B4403481EDD5698AA143F14623 params{};
    params.Loaded = (UObject*)Loaded;
    ProcessEvent(func, &params);
}
void ABP_WandTool_C::OnLoaded_BE44268D4D3D1064BB1C159231E445E0(UObject* Loaded) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Items/Wand/BP_WandTool.BP_WandTool_C.OnLoaded_BE44268D4D3D1064BB1C159231E445E0"));
    struct Params_OnLoaded_BE44268D4D3D1064BB1C159231E445E0 {
        UObject* Loaded; // 0x0
    }; // Size: 0x8
    Params_OnLoaded_BE44268D4D3D1064BB1C159231E445E0 params{};
    params.Loaded = (UObject*)Loaded;
    ProcessEvent(func, &params);
}
void ABP_WandTool_C::ReceiveEndPlay(EEndPlayReason::Type EndPlayReason) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Items/Wand/BP_WandTool.BP_WandTool_C.ReceiveEndPlay"));
    struct Params_ReceiveEndPlay {
        EEndPlayReason::Type EndPlayReason; // 0x0
    }; // Size: 0x1
    Params_ReceiveEndPlay params{};
    params.EndPlayReason = (EEndPlayReason::Type)EndPlayReason;
    ProcessEvent(func, &params);
}
void ABP_WandTool_C::CancelComboSplitTimer0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Items/Wand/BP_WandTool.BP_WandTool_C.CancelComboSplitTimer"));
    struct Params_CancelComboSplitTimer {
    }; // Size: 0x0
    Params_CancelComboSplitTimer params{};
    ProcessEvent(func, &params);
}
void ABP_WandTool_C::ComboTimerExpired() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Items/Wand/BP_WandTool.BP_WandTool_C.ComboTimerExpired"));
    struct Params_ComboTimerExpired {
    }; // Size: 0x0
    Params_ComboTimerExpired params{};
    ProcessEvent(func, &params);
}
void ABP_WandTool_C::StartComboSplitTimer0(FComboSplitData ComboSplitData) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Items/Wand/BP_WandTool.BP_WandTool_C.StartComboSplitTimer"));
    struct Params_StartComboSplitTimer {
        FComboSplitData ComboSplitData; // 0x0
    }; // Size: 0x38
    Params_StartComboSplitTimer params{};
    params.ComboSplitData = (FComboSplitData)ComboSplitData;
    ProcessEvent(func, &params);
}
void ABP_WandTool_C::ResetCombos0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Items/Wand/BP_WandTool.BP_WandTool_C.ResetCombos"));
    struct Params_ResetCombos {
    }; // Size: 0x0
    Params_ResetCombos params{};
    ProcessEvent(func, &params);
}
void ABP_WandTool_C::CancelHeavyComboSplitTimer0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Items/Wand/BP_WandTool.BP_WandTool_C.CancelHeavyComboSplitTimer"));
    struct Params_CancelHeavyComboSplitTimer {
    }; // Size: 0x0
    Params_CancelHeavyComboSplitTimer params{};
    ProcessEvent(func, &params);
}
void ABP_WandTool_C::StartHeavyComboSplitTimer0(FComboSplitData ComboSplitData) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Items/Wand/BP_WandTool.BP_WandTool_C.StartHeavyComboSplitTimer"));
    struct Params_StartHeavyComboSplitTimer {
        FComboSplitData ComboSplitData; // 0x0
    }; // Size: 0x38
    Params_StartHeavyComboSplitTimer params{};
    params.ComboSplitData = (FComboSplitData)ComboSplitData;
    ProcessEvent(func, &params);
}
void ABP_WandTool_C::HeavyFinisherTimerExpired() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Items/Wand/BP_WandTool.BP_WandTool_C.HeavyFinisherTimerExpired"));
    struct Params_HeavyFinisherTimerExpired {
    }; // Size: 0x0
    Params_HeavyFinisherTimerExpired params{};
    ProcessEvent(func, &params);
}
void ABP_WandTool_C::HideWand(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Items/Wand/BP_WandTool.BP_WandTool_C.HideWand"));
    struct Params_HideWand {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_HideWand params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void ABP_WandTool_C::ShowWand(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Items/Wand/BP_WandTool.BP_WandTool_C.ShowWand"));
    struct Params_ShowWand {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_ShowWand params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void ABP_WandTool_C::ResetHeavyCombo0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Items/Wand/BP_WandTool.BP_WandTool_C.ResetHeavyCombo"));
    struct Params_ResetHeavyCombo {
    }; // Size: 0x0
    Params_ResetHeavyCombo params{};
    ProcessEvent(func, &params);
}
void ABP_WandTool_C::ResetLightCombo0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Items/Wand/BP_WandTool.BP_WandTool_C.ResetLightCombo"));
    struct Params_ResetLightCombo {
    }; // Size: 0x0
    Params_ResetLightCombo params{};
    ProcessEvent(func, &params);
}
void ABP_WandTool_C::SetWandStyle0(FName WandStyle) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Items/Wand/BP_WandTool.BP_WandTool_C.SetWandStyle"));
    struct Params_SetWandStyle {
        FName WandStyle; // 0x0
    }; // Size: 0x8
    Params_SetWandStyle params{};
    params.WandStyle = (FName)WandStyle;
    ProcessEvent(func, &params);
}
void ABP_WandTool_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Gameplay/ToolSet/Items/Wand/BP_WandTool.BP_WandTool_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void ABP_WandTool_C::ExecuteUbergraph_BP_WandTool(int32_t EntryPoint) {}
