#include "FGeometry.hpp"
#include "FModData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSoftObjectPath.hpp"
#include "UFunction.hpp"
#include "ULevelStreamingDynamic.hpp"
#include "UModLoaderManager_C.hpp"
#include "UModLoaderSave_C.hpp"
#include "UPDA_ApparateModManifest_C.hpp"
#include "UUserWidget.hpp"
UModLoaderManager_C* UModLoaderManager_C::StaticClass() {
    static auto res = find_uobject("WidgetBlueprintGeneratedClass /Game/CustomContent/ModloaderAssets/ModLoaderManager.ModLoaderManager_C");
    return (UModLoaderManager_C*)res;
}
void UModLoaderManager_C::OnInitialLoad() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/ModLoaderManager.ModLoaderManager_C.OnInitialLoad"));
    struct Params_OnInitialLoad {
    }; // Size: 0x0
    Params_OnInitialLoad params{};
    ProcessEvent(func, &params);
}
void UModLoaderManager_C::RemoveMod(FString Mod, FModData CurrentModData, bool CallFunc_Map_Remove_ReturnValue, bool CallFunc_IsValid_ReturnValue, FModData CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/ModLoaderManager.ModLoaderManager_C.RemoveMod"));
    struct Params_RemoveMod {
        FString Mod; // 0x0
        FModData CurrentModData; // 0x10
        bool CallFunc_Map_Remove_ReturnValue; // 0x28
        bool CallFunc_IsValid_ReturnValue; // 0x29
        char pad_2a[0x6];
        FModData CallFunc_Map_Find_Value; // 0x30
        bool CallFunc_Map_Find_ReturnValue; // 0x48
    }; // Size: 0x49
    Params_RemoveMod params{};
    params.Mod = (FString)Mod;
    params.CurrentModData = (FModData)CurrentModData;
    params.CallFunc_Map_Remove_ReturnValue = (bool)CallFunc_Map_Remove_ReturnValue;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.CallFunc_Map_Find_Value = (FModData)CallFunc_Map_Find_Value;
    params.CallFunc_Map_Find_ReturnValue = (bool)CallFunc_Map_Find_ReturnValue;
    ProcessEvent(func, &params);
}
void UModLoaderManager_C::GetModNames(TArray<FString>& Keys, TArray<FString>& CallFunc_Map_Keys_Keys) {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/ModLoaderManager.ModLoaderManager_C.GetModNames"));
    struct Params_GetModNames {
        TArray<FString> Keys; // 0x0
        TArray<FString> CallFunc_Map_Keys_Keys; // 0x10
    }; // Size: 0x20
    Params_GetModNames params{};
    params.Keys = (TArray<FString>)Keys;
    params.CallFunc_Map_Keys_Keys = (TArray<FString>)CallFunc_Map_Keys_Keys;
    ProcessEvent(func, &params);
    Keys = params.Keys;
    CallFunc_Map_Keys_Keys = params.CallFunc_Map_Keys_Keys;
}
void UModLoaderManager_C::SaveModConfigToSave(UModLoaderSave_C* SaveGame, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, TArray<FString>& CallFunc_Map_Keys_Keys, FString CallFunc_Array_Get_Item, bool CallFunc_SaveGameToSlot_ReturnValue, FModData CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_DeleteGameInSlot_ReturnValue, UModLoaderSave_C* CallFunc_CreateSaveGameObject_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/ModLoaderManager.ModLoaderManager_C.SaveModConfigToSave"));
    struct Params_SaveModConfigToSave {
        UModLoaderSave_C* SaveGame; // 0x0
        int32_t Temp_int_Array_Index_Variable; // 0x8
        int32_t Temp_int_Loop_Counter_Variable; // 0xc
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x10
        char pad_14[0x4];
        TArray<FString> CallFunc_Map_Keys_Keys; // 0x18
        FString CallFunc_Array_Get_Item; // 0x28
        bool CallFunc_SaveGameToSlot_ReturnValue; // 0x38
        char pad_39[0x7];
        FModData CallFunc_Map_Find_Value; // 0x40
        bool CallFunc_Map_Find_ReturnValue; // 0x58
        char pad_59[0x3];
        int32_t CallFunc_Array_Length_ReturnValue; // 0x5c
        bool CallFunc_Less_IntInt_ReturnValue; // 0x60
        bool CallFunc_DeleteGameInSlot_ReturnValue; // 0x61
        char pad_62[0x6];
        UModLoaderSave_C* CallFunc_CreateSaveGameObject_ReturnValue; // 0x68
    }; // Size: 0x70
    Params_SaveModConfigToSave params{};
    params.SaveGame = (UModLoaderSave_C*)SaveGame;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_Map_Keys_Keys = (TArray<FString>)CallFunc_Map_Keys_Keys;
    params.CallFunc_Array_Get_Item = (FString)CallFunc_Array_Get_Item;
    params.CallFunc_SaveGameToSlot_ReturnValue = (bool)CallFunc_SaveGameToSlot_ReturnValue;
    params.CallFunc_Map_Find_Value = (FModData)CallFunc_Map_Find_Value;
    params.CallFunc_Map_Find_ReturnValue = (bool)CallFunc_Map_Find_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_DeleteGameInSlot_ReturnValue = (bool)CallFunc_DeleteGameInSlot_ReturnValue;
    params.CallFunc_CreateSaveGameObject_ReturnValue = (UModLoaderSave_C*)CallFunc_CreateSaveGameObject_ReturnValue;
    ProcessEvent(func, &params);
    CallFunc_Map_Keys_Keys = params.CallFunc_Map_Keys_Keys;
}
void UModLoaderManager_C::DEBUG_OnModRemoved(FString Mod) {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/ModLoaderManager.ModLoaderManager_C.DEBUG_OnModRemoved"));
    struct Params_DEBUG_OnModRemoved {
        FString Mod; // 0x0
    }; // Size: 0x10
    Params_DEBUG_OnModRemoved params{};
    params.Mod = (FString)Mod;
    ProcessEvent(func, &params);
}
void UModLoaderManager_C::EnableMod(FString ModName, bool& Success, FModData CurrentModData, bool IsSuccess, bool Temp_bool_True_if_break_was_hit_Variable, int32_t Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, FModData CallFunc_GetModData_ModData, bool CallFunc_GetModData_Exists, bool CallFunc_BooleanAND_ReturnValue, UPDA_ApparateModManifest_C* CallFunc_GetModManifest_Manifest, int32_t Temp_int_Loop_Counter_Variable, FString CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_EnableMod_Success, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue, bool CallFunc__Raw__LoadModLevelInstance__by_Name__bOutSuccess, ULevelStreamingDynamic* CallFunc__Raw__LoadModLevelInstance__by_Name__ReturnValue, FModData CallFunc_GetModData_ModData_1, bool CallFunc_GetModData_Exists_1, FModData K2Node_MakeStruct_ModData, FString CallFunc_Concat_StrStr_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/ModLoaderManager.ModLoaderManager_C.EnableMod"));
    struct Params_EnableMod {
        FString ModName; // 0x0
        bool Success; // 0x10
        char pad_11[0x7];
        FModData CurrentModData; // 0x18
        bool IsSuccess; // 0x30
        bool Temp_bool_True_if_break_was_hit_Variable; // 0x31
        char pad_32[0x2];
        int32_t Temp_int_Array_Index_Variable; // 0x34
        bool CallFunc_Not_PreBool_ReturnValue; // 0x38
        char pad_39[0x7];
        FModData CallFunc_GetModData_ModData; // 0x40
        bool CallFunc_GetModData_Exists; // 0x58
        bool CallFunc_BooleanAND_ReturnValue; // 0x59
        char pad_5a[0x6];
        UPDA_ApparateModManifest_C* CallFunc_GetModManifest_Manifest; // 0x60
        int32_t Temp_int_Loop_Counter_Variable; // 0x68
        char pad_6c[0x4];
        FString CallFunc_Array_Get_Item; // 0x70
        int32_t CallFunc_Array_Length_ReturnValue; // 0x80
        bool CallFunc_EnableMod_Success; // 0x84
        bool CallFunc_Less_IntInt_ReturnValue; // 0x85
        bool CallFunc_BooleanAND_ReturnValue_1; // 0x86
        char pad_87[0x1];
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x88
        bool CallFunc__Raw__LoadModLevelInstance__by_Name__bOutSuccess; // 0x8c
        char pad_8d[0x3];
        ULevelStreamingDynamic* CallFunc__Raw__LoadModLevelInstance__by_Name__ReturnValue; // 0x90
        FModData CallFunc_GetModData_ModData_1; // 0x98
        bool CallFunc_GetModData_Exists_1; // 0xb0
        char pad_b1[0x7];
        FModData K2Node_MakeStruct_ModData; // 0xb8
        FString CallFunc_Concat_StrStr_ReturnValue; // 0xd0
    }; // Size: 0xe0
    Params_EnableMod params{};
    params.ModName = (FString)ModName;
    params.Success = (bool)Success;
    params.CurrentModData = (FModData)CurrentModData;
    params.IsSuccess = (bool)IsSuccess;
    params.Temp_bool_True_if_break_was_hit_Variable = (bool)Temp_bool_True_if_break_was_hit_Variable;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.CallFunc_GetModData_ModData = (FModData)CallFunc_GetModData_ModData;
    params.CallFunc_GetModData_Exists = (bool)CallFunc_GetModData_Exists;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    params.CallFunc_GetModManifest_Manifest = (UPDA_ApparateModManifest_C*)CallFunc_GetModManifest_Manifest;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Array_Get_Item = (FString)CallFunc_Array_Get_Item;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_EnableMod_Success = (bool)CallFunc_EnableMod_Success;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue_1 = (bool)CallFunc_BooleanAND_ReturnValue_1;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc__Raw__LoadModLevelInstance__by_Name__bOutSuccess = (bool)CallFunc__Raw__LoadModLevelInstance__by_Name__bOutSuccess;
    params.CallFunc__Raw__LoadModLevelInstance__by_Name__ReturnValue = (ULevelStreamingDynamic*)CallFunc__Raw__LoadModLevelInstance__by_Name__ReturnValue;
    params.CallFunc_GetModData_ModData_1 = (FModData)CallFunc_GetModData_ModData_1;
    params.CallFunc_GetModData_Exists_1 = (bool)CallFunc_GetModData_Exists_1;
    params.K2Node_MakeStruct_ModData = (FModData)K2Node_MakeStruct_ModData;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    ProcessEvent(func, &params);
    Success = params.Success;
}
ULevelStreamingDynamic* UModLoaderManager_C::_Raw__LoadModLevelInstance__by_Name_(FString ModName, bool& bOutSuccess, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_LoadLevelInstance_bOutSuccess, ULevelStreamingDynamic* CallFunc_LoadLevelInstance_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/ModLoaderManager.ModLoaderManager_C.(Raw) LoadModLevelInstance (by Name)"));
    struct Params__Raw__LoadModLevelInstance__by_Name_ {
        FString ModName; // 0x0
        bool bOutSuccess; // 0x10
        char pad_11[0x7];
        ULevelStreamingDynamic* ReturnValue; // 0x18
        FString CallFunc_Concat_StrStr_ReturnValue; // 0x20
        FString CallFunc_Concat_StrStr_ReturnValue_1; // 0x30
        bool CallFunc_LoadLevelInstance_bOutSuccess; // 0x40
        char pad_41[0x7];
        ULevelStreamingDynamic* CallFunc_LoadLevelInstance_ReturnValue; // 0x48
    }; // Size: 0x50
    Params__Raw__LoadModLevelInstance__by_Name_ params{};
    params.ModName = (FString)ModName;
    params.bOutSuccess = (bool)bOutSuccess;
    params.CallFunc_Concat_StrStr_ReturnValue = (FString)CallFunc_Concat_StrStr_ReturnValue;
    params.CallFunc_Concat_StrStr_ReturnValue_1 = (FString)CallFunc_Concat_StrStr_ReturnValue_1;
    params.CallFunc_LoadLevelInstance_bOutSuccess = (bool)CallFunc_LoadLevelInstance_bOutSuccess;
    params.CallFunc_LoadLevelInstance_ReturnValue = (ULevelStreamingDynamic*)CallFunc_LoadLevelInstance_ReturnValue;
    ProcessEvent(func, &params);
    bOutSuccess = params.bOutSuccess;
    return (ULevelStreamingDynamic*)params.ReturnValue;
}
void UModLoaderManager_C::GetModData(FString Mod, FModData& ModData, bool& Exists, FModData CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/ModLoaderManager.ModLoaderManager_C.GetModData"));
    struct Params_GetModData {
        FString Mod; // 0x0
        FModData ModData; // 0x10
        bool Exists; // 0x28
        char pad_29[0x7];
        FModData CallFunc_Map_Find_Value; // 0x30
        bool CallFunc_Map_Find_ReturnValue; // 0x48
    }; // Size: 0x49
    Params_GetModData params{};
    params.Mod = (FString)Mod;
    params.ModData = (FModData)ModData;
    params.Exists = (bool)Exists;
    params.CallFunc_Map_Find_Value = (FModData)CallFunc_Map_Find_Value;
    params.CallFunc_Map_Find_ReturnValue = (bool)CallFunc_Map_Find_ReturnValue;
    ProcessEvent(func, &params);
    ModData = params.ModData;
    Exists = params.Exists;
}
void UModLoaderManager_C::LoadModConfigFromSave() {}
void UModLoaderManager_C::DisableMod(FString Mod, FModData CurrentModData, bool CallFunc_IsValid_ReturnValue, FModData K2Node_MakeStruct_ModData, FModData CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/ModLoaderManager.ModLoaderManager_C.DisableMod"));
    struct Params_DisableMod {
        FString Mod; // 0x0
        FModData CurrentModData; // 0x10
        bool CallFunc_IsValid_ReturnValue; // 0x28
        char pad_29[0x7];
        FModData K2Node_MakeStruct_ModData; // 0x30
        FModData CallFunc_Map_Find_Value; // 0x48
        bool CallFunc_Map_Find_ReturnValue; // 0x60
    }; // Size: 0x61
    Params_DisableMod params{};
    params.Mod = (FString)Mod;
    params.CurrentModData = (FModData)CurrentModData;
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    params.K2Node_MakeStruct_ModData = (FModData)K2Node_MakeStruct_ModData;
    params.CallFunc_Map_Find_Value = (FModData)CallFunc_Map_Find_Value;
    params.CallFunc_Map_Find_ReturnValue = (bool)CallFunc_Map_Find_ReturnValue;
    ProcessEvent(func, &params);
}
void UModLoaderManager_C::DEBUG_OnModLoadFail(FString Mod) {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/ModLoaderManager.ModLoaderManager_C.DEBUG_OnModLoadFail"));
    struct Params_DEBUG_OnModLoadFail {
        FString Mod; // 0x0
    }; // Size: 0x10
    Params_DEBUG_OnModLoadFail params{};
    params.Mod = (FString)Mod;
    ProcessEvent(func, &params);
}
void UModLoaderManager_C::GetModManifest(FString ModName, UPDA_ApparateModManifest_C*& Manifest, UPDA_ApparateModManifest_C* ManifestObj, UPDA_ApparateModManifest_C* CallFunc_SpawnObject_ReturnValue, UPDA_ApparateModManifest_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, FSoftObjectPath CallFunc_MakeSoftObjectPath_ReturnValue) {}
void UModLoaderManager_C::DEBUG_OnModDisabled(FString Mod) {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/ModLoaderManager.ModLoaderManager_C.DEBUG_OnModDisabled"));
    struct Params_DEBUG_OnModDisabled {
        FString Mod; // 0x0
    }; // Size: 0x10
    Params_DEBUG_OnModDisabled params{};
    params.Mod = (FString)Mod;
    ProcessEvent(func, &params);
}
void UModLoaderManager_C::DebugLogModConfig() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/ModLoaderManager.ModLoaderManager_C.DebugLogModConfig"));
    struct Params_DebugLogModConfig {
    }; // Size: 0x0
    Params_DebugLogModConfig params{};
    ProcessEvent(func, &params);
}
void UModLoaderManager_C::DEBUG_OnModEnabled(FString Mod) {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/ModLoaderManager.ModLoaderManager_C.DEBUG_OnModEnabled"));
    struct Params_DEBUG_OnModEnabled {
        FString Mod; // 0x0
    }; // Size: 0x10
    Params_DEBUG_OnModEnabled params{};
    params.Mod = (FString)Mod;
    ProcessEvent(func, &params);
}
void UModLoaderManager_C::Construct0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/ModLoaderManager.ModLoaderManager_C.Construct"));
    struct Params_Construct {
    }; // Size: 0x0
    Params_Construct params{};
    ProcessEvent(func, &params);
}
void UModLoaderManager_C::PrintToModLoader(FString Message) {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/ModLoaderManager.ModLoaderManager_C.PrintToModLoader"));
    struct Params_PrintToModLoader {
        FString Message; // 0x0
    }; // Size: 0x10
    Params_PrintToModLoader params{};
    params.Message = (FString)Message;
    ProcessEvent(func, &params);
}
void UModLoaderManager_C::Tick0(FGeometry MyGeometry, float InDeltaTime) {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/ModLoaderManager.ModLoaderManager_C.Tick"));
    struct Params_Tick {
        FGeometry MyGeometry; // 0x0
        float InDeltaTime; // 0x38
    }; // Size: 0x3c
    Params_Tick params{};
    params.MyGeometry = (FGeometry)MyGeometry;
    params.InDeltaTime = (float)InDeltaTime;
    ProcessEvent(func, &params);
}
void UModLoaderManager_C::Destruct0() {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/ModLoaderManager.ModLoaderManager_C.Destruct"));
    struct Params_Destruct {
    }; // Size: 0x0
    Params_Destruct params{};
    ProcessEvent(func, &params);
}
void UModLoaderManager_C::ExecuteUbergraph_ModLoaderManager(int32_t EntryPoint, int32_t Temp_int_Loop_Counter_Variable, bool Temp_bool_Has_Been_Initd_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Loop_Counter_Variable_1, int32_t Temp_int_Loop_Counter_Variable_2, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue_2, int32_t Temp_int_Array_Index_Variable, bool Temp_bool_IsClosed_Variable, TArray<FString>& CallFunc_Map_Keys_Keys, FString K2Node_CustomEvent_Mod_3, int32_t CallFunc_Array_Length_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue) {}
void UModLoaderManager_C::OnModDisabled__DelegateSignature(FString Mod) {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/ModLoaderManager.ModLoaderManager_C.OnModDisabled__DelegateSignature"));
    struct Params_OnModDisabled__DelegateSignature {
        FString Mod; // 0x0
    }; // Size: 0x10
    Params_OnModDisabled__DelegateSignature params{};
    params.Mod = (FString)Mod;
    ProcessEvent(func, &params);
}
void UModLoaderManager_C::OnDestructCreation__DelegateSignature(UModLoaderManager_C* NewManager) {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/ModLoaderManager.ModLoaderManager_C.OnDestructCreation__DelegateSignature"));
    struct Params_OnDestructCreation__DelegateSignature {
        UModLoaderManager_C* NewManager; // 0x0
    }; // Size: 0x8
    Params_OnDestructCreation__DelegateSignature params{};
    params.NewManager = (UModLoaderManager_C*)NewManager;
    ProcessEvent(func, &params);
}
void UModLoaderManager_C::OnModLoadFail__DelegateSignature(FString Mod) {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/ModLoaderManager.ModLoaderManager_C.OnModLoadFail__DelegateSignature"));
    struct Params_OnModLoadFail__DelegateSignature {
        FString Mod; // 0x0
    }; // Size: 0x10
    Params_OnModLoadFail__DelegateSignature params{};
    params.Mod = (FString)Mod;
    ProcessEvent(func, &params);
}
void UModLoaderManager_C::OnModRemoved__DelegateSignature(FString Mod) {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/ModLoaderManager.ModLoaderManager_C.OnModRemoved__DelegateSignature"));
    struct Params_OnModRemoved__DelegateSignature {
        FString Mod; // 0x0
    }; // Size: 0x10
    Params_OnModRemoved__DelegateSignature params{};
    params.Mod = (FString)Mod;
    ProcessEvent(func, &params);
}
void UModLoaderManager_C::OnModEnabled__DelegateSignature(FString Mod) {
    static auto func = (UFunction*)(find_uobject("Function /Game/CustomContent/ModloaderAssets/ModLoaderManager.ModLoaderManager_C.OnModEnabled__DelegateSignature"));
    struct Params_OnModEnabled__DelegateSignature {
        FString Mod; // 0x0
    }; // Size: 0x10
    Params_OnModEnabled__DelegateSignature params{};
    params.Mod = (FString)Mod;
    ProcessEvent(func, &params);
}
