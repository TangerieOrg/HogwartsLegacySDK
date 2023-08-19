#pragma once
#include <cstdint>
#include "FGeometry.hpp"
#include "FModData.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSoftObjectPath.hpp"
#include "UUserWidget.hpp"
class UPDA_ApparateModManifest_C;
class ULevelStreamingDynamic;
class UModLoaderSave_C;
#pragma pack(push, 1)
class UModLoaderManager_C : public UUserWidget {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x268
    char pad_270[0x140];
    static UModLoaderManager_C* StaticClass();
    void RemoveMod(FString Mod, FModData CurrentModData, bool CallFunc_Map_Remove_ReturnValue, bool CallFunc_IsValid_ReturnValue, FModData CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
    void GetModNames(TArray<FString>& Keys, TArray<FString>& CallFunc_Map_Keys_Keys);
    void EnableMod(FString ModName, bool& Success, FModData CurrentModData, bool IsSuccess, bool Temp_bool_True_if_break_was_hit_Variable, int32_t Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, FModData CallFunc_GetModData_ModData, bool CallFunc_GetModData_Exists, bool CallFunc_BooleanAND_ReturnValue, UPDA_ApparateModManifest_C* CallFunc_GetModManifest_Manifest, int32_t Temp_int_Loop_Counter_Variable, FString CallFunc_Array_Get_Item, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_EnableMod_Success, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue, bool CallFunc__Raw__LoadModLevelInstance__by_Name__bOutSuccess, ULevelStreamingDynamic* CallFunc__Raw__LoadModLevelInstance__by_Name__ReturnValue, FModData CallFunc_GetModData_ModData_1, bool CallFunc_GetModData_Exists_1, FModData K2Node_MakeStruct_ModData, FString CallFunc_Concat_StrStr_ReturnValue);
    ULevelStreamingDynamic* _Raw__LoadModLevelInstance__by_Name_(FString ModName, bool& bOutSuccess, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_LoadLevelInstance_bOutSuccess, ULevelStreamingDynamic* CallFunc_LoadLevelInstance_ReturnValue);
    void DisableMod(FString Mod, FModData CurrentModData, bool CallFunc_IsValid_ReturnValue, FModData K2Node_MakeStruct_ModData, FModData CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
    void SaveModConfigToSave(UModLoaderSave_C* SaveGame, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, TArray<FString>& CallFunc_Map_Keys_Keys, FString CallFunc_Array_Get_Item, bool CallFunc_SaveGameToSlot_ReturnValue, FModData CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_DeleteGameInSlot_ReturnValue, UModLoaderSave_C* CallFunc_CreateSaveGameObject_ReturnValue);
    void GetModData(FString Mod, FModData& ModData, bool& Exists, FModData CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
    void GetModManifest(FString ModName, UPDA_ApparateModManifest_C*& Manifest, UPDA_ApparateModManifest_C* ManifestObj, UPDA_ApparateModManifest_C* CallFunc_SpawnObject_ReturnValue, UPDA_ApparateModManifest_C* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue_1, FSoftObjectPath CallFunc_MakeSoftObjectPath_ReturnValue);
    void LoadModConfigFromSave();
    void DEBUG_OnModDisabled(FString Mod);
    void DebugLogModConfig();
    void DEBUG_OnModRemoved(FString Mod);
    void DEBUG_OnModLoadFail(FString Mod);
    void DEBUG_OnModEnabled(FString Mod);
    void Construct0();
    void PrintToModLoader(FString Message);
    void Tick0(FGeometry MyGeometry, float InDeltaTime);
    void OnInitialLoad();
    void Destruct0();
    void ExecuteUbergraph_ModLoaderManager(int32_t EntryPoint, int32_t Temp_int_Loop_Counter_Variable, bool Temp_bool_Has_Been_Initd_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t Temp_int_Loop_Counter_Variable_1, int32_t Temp_int_Loop_Counter_Variable_2, int32_t CallFunc_Add_IntInt_ReturnValue_1, int32_t CallFunc_Add_IntInt_ReturnValue_2, int32_t Temp_int_Array_Index_Variable, bool Temp_bool_IsClosed_Variable, TArray<FString>& CallFunc_Map_Keys_Keys, FString K2Node_CustomEvent_Mod_3, int32_t CallFunc_Array_Length_ReturnValue, FString CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
    void OnModDisabled__DelegateSignature(FString Mod);
    void OnDestructCreation__DelegateSignature(UModLoaderManager_C* NewManager);
    void OnModLoadFail__DelegateSignature(FString Mod);
    void OnModRemoved__DelegateSignature(FString Mod);
    void OnModEnabled__DelegateSignature(FString Mod);
}; // Size: 0x3b0
#pragma pack(pop)
