#include "AActor.hpp"
#include "AFrontendMapScript.hpp"
#include "AFrontend_C.hpp"
#include "APlayerController.hpp"
#include "ASceneRigActor.hpp"
#include "AUIDummyActor.hpp"
#include "AUI_BP_DummyActor_C.hpp"
#include "EEndPlayReason\Type.hpp"
#include "EGenderEnum.hpp"
#include "ESanctuaryIdentity.hpp"
#include "FCharacterSaveGameInfo.hpp"
#include "FDateTime.hpp"
#include "FFrontendPlayerState.hpp"
#include "FLinearColor.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "FSaveGameInfo.hpp"
#include "FVector.hpp"
#include "UAnimationComponent.hpp"
#include "UFunction.hpp"
#include "UGearManager.hpp"
#include "ULevelStreamingDynamic.hpp"
#include "UObject.hpp"
#include "USceneRig.hpp"
#include "USceneRigPlayer.hpp"
#include "UUIManager.hpp"
#include "UUIOnlineManager.hpp"
#include "UUI_BP_FrontEnd_Menu_C.hpp"
#include "UUI_BP_PSO_FS_C.hpp"
#include "UUI_BP_StartPage_C.hpp"
void AFrontend_C::PrintString(FString String, FLinearColor Color, int64_t CallFunc_GetFrameCount_ReturnValue) {}
AFrontend_C* AFrontend_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/UI/Frontend_LevelInstance_2.Frontend_C");
    return (AFrontend_C*)res;
}
void AFrontend_C::SetDummyVisible(bool Override_Full_Game_Check, AUIDummyActor* DUMMY, UUIOnlineManager* CallFunc_GetUIOnlineManagerPure_ReturnValue, bool CallFunc_IsFullGameInstalled_ReturnValue, bool CallFunc_BooleanOR_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/UI/Frontend_LevelInstance_2.Frontend_C.SetDummyVisible"));
    struct Params_SetDummyVisible {
        bool Override_Full_Game_Check; // 0x0
        char pad_1[0x7];
        AUIDummyActor* DUMMY; // 0x8
        UUIOnlineManager* CallFunc_GetUIOnlineManagerPure_ReturnValue; // 0x10
        bool CallFunc_IsFullGameInstalled_ReturnValue; // 0x18
        bool CallFunc_BooleanOR_ReturnValue; // 0x19
    }; // Size: 0x1a
    Params_SetDummyVisible params{};
    params.Override_Full_Game_Check = (bool)Override_Full_Game_Check;
    params.DUMMY = (AUIDummyActor*)DUMMY;
    params.CallFunc_GetUIOnlineManagerPure_ReturnValue = (UUIOnlineManager*)CallFunc_GetUIOnlineManagerPure_ReturnValue;
    params.CallFunc_IsFullGameInstalled_ReturnValue = (bool)CallFunc_IsFullGameInstalled_ReturnValue;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    ProcessEvent(func, &params);
}
void AFrontend_C::PSOScreenComplete() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/UI/Frontend_LevelInstance_2.Frontend_C.PSOScreenComplete"));
    struct Params_PSOScreenComplete {
    }; // Size: 0x0
    Params_PSOScreenComplete params{};
    ProcessEvent(func, &params);
}
void AFrontend_C::HideMenuCharacter(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/UI/Frontend_LevelInstance_2.Frontend_C.HideMenuCharacter"));
    struct Params_HideMenuCharacter {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_HideMenuCharacter params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void AFrontend_C::SetUpDummyActorPresets(EGenderEnum Temp_byte_Variable, FName CallFunc_GetRandomStartingPreset_PresetID, EGenderEnum Temp_byte_Variable_1, bool Temp_bool_Variable, FCharacterSaveGameInfo CallFunc_GetMostRecentlyPlayedCharacter_MostRecentCharacter) {}
void AFrontend_C::SetLightingIdentity() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/UI/Frontend_LevelInstance_2.Frontend_C.SetLightingIdentity"));
    struct Params_SetLightingIdentity {
    }; // Size: 0x0
    Params_SetLightingIdentity params{};
    ProcessEvent(func, &params);
}
void AFrontend_C::GetMostRecentlyPlayedCharacter(FCharacterSaveGameInfo& MostRecentCharacter, FCharacterSaveGameInfo ReturnCharacter, FDateTime LatestSaveTime, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, TArray<FCharacterSaveGameInfo>& CallFunc_GetAllPlayableCharacters_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, FCharacterSaveGameInfo CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, TArray<FSaveGameInfo>& CallFunc_GetAllSavesOfType_ReturnValue, FDateTime CallFunc_DateTimeFromString_Result, bool CallFunc_DateTimeFromString_ReturnValue, bool CallFunc_Greater_DateTimeDateTime_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/UI/Frontend_LevelInstance_2.Frontend_C.GetMostRecentlyPlayedCharacter"));
    struct Params_GetMostRecentlyPlayedCharacter {
        FCharacterSaveGameInfo MostRecentCharacter; // 0x0
        FCharacterSaveGameInfo ReturnCharacter; // 0x350
        FDateTime LatestSaveTime; // 0x6a0
        int32_t Temp_int_Array_Index_Variable; // 0x6a8
        int32_t Temp_int_Loop_Counter_Variable; // 0x6ac
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x6b0
        char pad_6b4[0x4];
        TArray<FCharacterSaveGameInfo> CallFunc_GetAllPlayableCharacters_ReturnValue; // 0x6b8
        int32_t CallFunc_Array_Length_ReturnValue; // 0x6c8
        char pad_6cc[0x4];
        FCharacterSaveGameInfo CallFunc_Array_Get_Item; // 0x6d0
        bool CallFunc_Less_IntInt_ReturnValue; // 0xa20
        char pad_a21[0x7];
        TArray<FSaveGameInfo> CallFunc_GetAllSavesOfType_ReturnValue; // 0xa28
        FDateTime CallFunc_DateTimeFromString_Result; // 0xa38
        bool CallFunc_DateTimeFromString_ReturnValue; // 0xa40
        bool CallFunc_Greater_DateTimeDateTime_ReturnValue; // 0xa41
    }; // Size: 0xa42
    Params_GetMostRecentlyPlayedCharacter params{};
    params.MostRecentCharacter = (FCharacterSaveGameInfo)MostRecentCharacter;
    params.ReturnCharacter = (FCharacterSaveGameInfo)ReturnCharacter;
    params.LatestSaveTime = (FDateTime)LatestSaveTime;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_GetAllPlayableCharacters_ReturnValue = (TArray<FCharacterSaveGameInfo>)CallFunc_GetAllPlayableCharacters_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Array_Get_Item = (FCharacterSaveGameInfo)CallFunc_Array_Get_Item;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_GetAllSavesOfType_ReturnValue = (TArray<FSaveGameInfo>)CallFunc_GetAllSavesOfType_ReturnValue;
    params.CallFunc_DateTimeFromString_Result = (FDateTime)CallFunc_DateTimeFromString_Result;
    params.CallFunc_DateTimeFromString_ReturnValue = (bool)CallFunc_DateTimeFromString_ReturnValue;
    params.CallFunc_Greater_DateTimeDateTime_ReturnValue = (bool)CallFunc_Greater_DateTimeDateTime_ReturnValue;
    ProcessEvent(func, &params);
    MostRecentCharacter = params.MostRecentCharacter;
    CallFunc_GetAllPlayableCharacters_ReturnValue = params.CallFunc_GetAllPlayableCharacters_ReturnValue;
    CallFunc_GetAllSavesOfType_ReturnValue = params.CallFunc_GetAllSavesOfType_ReturnValue;
}
void AFrontend_C::AllLevelsVisible(bool& AllVisible, bool LevelsVisible, bool Temp_bool_True_if_break_was_hit_Variable, int32_t Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, ULevelStreamingDynamic* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsLevelVisible_ReturnValue, bool CallFunc_BooleanAND_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/UI/Frontend_LevelInstance_2.Frontend_C.AllLevelsVisible"));
    struct Params_AllLevelsVisible {
        bool AllVisible; // 0x0
        bool LevelsVisible; // 0x1
        bool Temp_bool_True_if_break_was_hit_Variable; // 0x2
        char pad_3[0x1];
        int32_t Temp_int_Array_Index_Variable; // 0x4
        bool CallFunc_Not_PreBool_ReturnValue; // 0x8
        char pad_9[0x3];
        int32_t Temp_int_Loop_Counter_Variable; // 0xc
        int32_t CallFunc_Add_IntInt_ReturnValue; // 0x10
        int32_t CallFunc_Array_Length_ReturnValue; // 0x14
        ULevelStreamingDynamic* CallFunc_Array_Get_Item; // 0x18
        bool CallFunc_Less_IntInt_ReturnValue; // 0x20
        bool CallFunc_IsLevelVisible_ReturnValue; // 0x21
        bool CallFunc_BooleanAND_ReturnValue; // 0x22
    }; // Size: 0x23
    Params_AllLevelsVisible params{};
    params.AllVisible = (bool)AllVisible;
    params.LevelsVisible = (bool)LevelsVisible;
    params.Temp_bool_True_if_break_was_hit_Variable = (bool)Temp_bool_True_if_break_was_hit_Variable;
    params.Temp_int_Array_Index_Variable = (int32_t)Temp_int_Array_Index_Variable;
    params.CallFunc_Not_PreBool_ReturnValue = (bool)CallFunc_Not_PreBool_ReturnValue;
    params.Temp_int_Loop_Counter_Variable = (int32_t)Temp_int_Loop_Counter_Variable;
    params.CallFunc_Add_IntInt_ReturnValue = (int32_t)CallFunc_Add_IntInt_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.CallFunc_Array_Get_Item = (ULevelStreamingDynamic*)CallFunc_Array_Get_Item;
    params.CallFunc_Less_IntInt_ReturnValue = (bool)CallFunc_Less_IntInt_ReturnValue;
    params.CallFunc_IsLevelVisible_ReturnValue = (bool)CallFunc_IsLevelVisible_ReturnValue;
    params.CallFunc_BooleanAND_ReturnValue = (bool)CallFunc_BooleanAND_ReturnValue;
    ProcessEvent(func, &params);
    AllVisible = params.AllVisible;
}
void AFrontend_C::GetRandomStartingPreset(FName& PresetId, EGenderEnum Gender, FName FemalePreset, FName MalePreset, EGenderEnum Temp_byte_Variable, EGenderEnum Temp_byte_Variable_1, int32_t Temp_int_Variable, UUIManager* CallFunc_Get_ReturnValue, EGenderEnum Temp_byte_Variable_2, TArray<FName>& CallFunc_GetFullBodyPresetNames_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, FName K2Node_Select_Default, int32_t CallFunc_RandomInteger_ReturnValue, FName CallFunc_Array_Get_Item, int32_t CallFunc_RandomInteger_ReturnValue_1, TArray<FName>& CallFunc_GetFullBodyPresetNames_ReturnValue_1, int32_t CallFunc_Array_Length_ReturnValue_1, EGenderEnum K2Node_Select_Default_1, int32_t CallFunc_RandomInteger_ReturnValue_2, FName CallFunc_Array_Get_Item_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/UI/Frontend_LevelInstance_2.Frontend_C.GetRandomStartingPreset"));
    struct Params_GetRandomStartingPreset {
        FName PresetId; // 0x0
        EGenderEnum Gender; // 0x8
        char pad_9[0x3];
        FName FemalePreset; // 0xc
        FName MalePreset; // 0x14
        EGenderEnum Temp_byte_Variable; // 0x1c
        EGenderEnum Temp_byte_Variable_1; // 0x1d
        char pad_1e[0x2];
        int32_t Temp_int_Variable; // 0x20
        char pad_24[0x4];
        UUIManager* CallFunc_Get_ReturnValue; // 0x28
        EGenderEnum Temp_byte_Variable_2; // 0x30
        char pad_31[0x7];
        TArray<FName> CallFunc_GetFullBodyPresetNames_ReturnValue; // 0x38
        int32_t CallFunc_Array_Length_ReturnValue; // 0x48
        FName K2Node_Select_Default; // 0x4c
        int32_t CallFunc_RandomInteger_ReturnValue; // 0x54
        FName CallFunc_Array_Get_Item; // 0x58
        int32_t CallFunc_RandomInteger_ReturnValue_1; // 0x60
        char pad_64[0x4];
        TArray<FName> CallFunc_GetFullBodyPresetNames_ReturnValue_1; // 0x68
        int32_t CallFunc_Array_Length_ReturnValue_1; // 0x78
        EGenderEnum K2Node_Select_Default_1; // 0x7c
        char pad_7d[0x3];
        int32_t CallFunc_RandomInteger_ReturnValue_2; // 0x80
        FName CallFunc_Array_Get_Item_1; // 0x84
    }; // Size: 0x8c
    Params_GetRandomStartingPreset params{};
    params.PresetId = (FName)PresetId;
    params.Gender = (EGenderEnum)Gender;
    params.FemalePreset = (FName)FemalePreset;
    params.MalePreset = (FName)MalePreset;
    params.Temp_byte_Variable = (EGenderEnum)Temp_byte_Variable;
    params.Temp_byte_Variable_1 = (EGenderEnum)Temp_byte_Variable_1;
    params.Temp_int_Variable = (int32_t)Temp_int_Variable;
    params.CallFunc_Get_ReturnValue = (UUIManager*)CallFunc_Get_ReturnValue;
    params.Temp_byte_Variable_2 = (EGenderEnum)Temp_byte_Variable_2;
    params.CallFunc_GetFullBodyPresetNames_ReturnValue = (TArray<FName>)CallFunc_GetFullBodyPresetNames_ReturnValue;
    params.CallFunc_Array_Length_ReturnValue = (int32_t)CallFunc_Array_Length_ReturnValue;
    params.K2Node_Select_Default = (FName)K2Node_Select_Default;
    params.CallFunc_RandomInteger_ReturnValue = (int32_t)CallFunc_RandomInteger_ReturnValue;
    params.CallFunc_Array_Get_Item = (FName)CallFunc_Array_Get_Item;
    params.CallFunc_RandomInteger_ReturnValue_1 = (int32_t)CallFunc_RandomInteger_ReturnValue_1;
    params.CallFunc_GetFullBodyPresetNames_ReturnValue_1 = (TArray<FName>)CallFunc_GetFullBodyPresetNames_ReturnValue_1;
    params.CallFunc_Array_Length_ReturnValue_1 = (int32_t)CallFunc_Array_Length_ReturnValue_1;
    params.K2Node_Select_Default_1 = (EGenderEnum)K2Node_Select_Default_1;
    params.CallFunc_RandomInteger_ReturnValue_2 = (int32_t)CallFunc_RandomInteger_ReturnValue_2;
    params.CallFunc_Array_Get_Item_1 = (FName)CallFunc_Array_Get_Item_1;
    ProcessEvent(func, &params);
    PresetId = params.PresetId;
    CallFunc_GetFullBodyPresetNames_ReturnValue = params.CallFunc_GetFullBodyPresetNames_ReturnValue;
    CallFunc_GetFullBodyPresetNames_ReturnValue_1 = params.CallFunc_GetFullBodyPresetNames_ReturnValue_1;
}
void AFrontend_C::ResetGearAppearance(int32_t Temp_int_Variable, int32_t Temp_int_Variable_1, uint8_t CallFunc_Conv_IntToByte_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, uint8_t CallFunc_GetValidValue_ReturnValue, uint8_t CallFunc_Conv_IntToByte_ReturnValue_1, uint8_t CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32_t CallFunc_Conv_ByteToInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue_1, UGearManager* CallFunc_Get_ReturnValue, int32_t CallFunc_MakeLiteralInt_ReturnValue) {}
void AFrontend_C::StopSceneRigs(bool CallFunc_IsValid_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/UI/Frontend_LevelInstance_2.Frontend_C.StopSceneRigs"));
    struct Params_StopSceneRigs {
        bool CallFunc_IsValid_ReturnValue; // 0x0
    }; // Size: 0x1
    Params_StopSceneRigs params{};
    params.CallFunc_IsValid_ReturnValue = (bool)CallFunc_IsValid_ReturnValue;
    ProcessEvent(func, &params);
}
void AFrontend_C::ShowStartPage(UUIManager* CallFunc_GetUIManagerPure_ReturnValue, APlayerController* CallFunc_GetPlayerController_ReturnValue, UUI_BP_StartPage_C* CallFunc_Create_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/UI/Frontend_LevelInstance_2.Frontend_C.ShowStartPage"));
    struct Params_ShowStartPage {
        UUIManager* CallFunc_GetUIManagerPure_ReturnValue; // 0x0
        APlayerController* CallFunc_GetPlayerController_ReturnValue; // 0x8
        UUI_BP_StartPage_C* CallFunc_Create_ReturnValue; // 0x10
    }; // Size: 0x18
    Params_ShowStartPage params{};
    params.CallFunc_GetUIManagerPure_ReturnValue = (UUIManager*)CallFunc_GetUIManagerPure_ReturnValue;
    params.CallFunc_GetPlayerController_ReturnValue = (APlayerController*)CallFunc_GetPlayerController_ReturnValue;
    params.CallFunc_Create_ReturnValue = (UUI_BP_StartPage_C*)CallFunc_Create_ReturnValue;
    ProcessEvent(func, &params);
}
void AFrontend_C::UpdateLookAt(FVector CurrentLookAtTarget, UAnimationComponent* CallFunc_GetComponentByClass_ReturnValue, FVector CallFunc_GetActorForwardVector_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/UI/Frontend_LevelInstance_2.Frontend_C.UpdateLookAt"));
    struct Params_UpdateLookAt {
        FVector CurrentLookAtTarget; // 0x0
        char pad_c[0x4];
        UAnimationComponent* CallFunc_GetComponentByClass_ReturnValue; // 0x10
        FVector CallFunc_GetActorForwardVector_ReturnValue; // 0x18
        FVector CallFunc_Multiply_VectorFloat_ReturnValue; // 0x24
        FVector CallFunc_Add_VectorVector_ReturnValue; // 0x30
    }; // Size: 0x3c
    Params_UpdateLookAt params{};
    params.CurrentLookAtTarget = (FVector)CurrentLookAtTarget;
    params.CallFunc_GetComponentByClass_ReturnValue = (UAnimationComponent*)CallFunc_GetComponentByClass_ReturnValue;
    params.CallFunc_GetActorForwardVector_ReturnValue = (FVector)CallFunc_GetActorForwardVector_ReturnValue;
    params.CallFunc_Multiply_VectorFloat_ReturnValue = (FVector)CallFunc_Multiply_VectorFloat_ReturnValue;
    params.CallFunc_Add_VectorVector_ReturnValue = (FVector)CallFunc_Add_VectorVector_ReturnValue;
    ProcessEvent(func, &params);
}
void AFrontend_C::Apply_Actor_Preset(FName FullBodyPresetName, bool ApplyToModel, EGenderEnum CallFunc_GetFullBodyPreset_OutGender) {}
void AFrontend_C::BeginBackgroundAppearanceTasks() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/UI/Frontend_LevelInstance_2.Frontend_C.BeginBackgroundAppearanceTasks"));
    struct Params_BeginBackgroundAppearanceTasks {
    }; // Size: 0x0
    Params_BeginBackgroundAppearanceTasks params{};
    ProcessEvent(func, &params);
}
void AFrontend_C::OnLoaded_B2E67DF4413723CA78F189B21F27DAC0(UObject* Loaded) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/UI/Frontend_LevelInstance_2.Frontend_C.OnLoaded_B2E67DF4413723CA78F189B21F27DAC0"));
    struct Params_OnLoaded_B2E67DF4413723CA78F189B21F27DAC0 {
        UObject* Loaded; // 0x0
    }; // Size: 0x8
    Params_OnLoaded_B2E67DF4413723CA78F189B21F27DAC0 params{};
    params.Loaded = (UObject*)Loaded;
    ProcessEvent(func, &params);
}
void AFrontend_C::QueueUpNextSceneRig() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/UI/Frontend_LevelInstance_2.Frontend_C.QueueUpNextSceneRig"));
    struct Params_QueueUpNextSceneRig {
    }; // Size: 0x0
    Params_QueueUpNextSceneRig params{};
    ProcessEvent(func, &params);
}
void AFrontend_C::GoToMenu() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/UI/Frontend_LevelInstance_2.Frontend_C.GoToMenu"));
    struct Params_GoToMenu {
    }; // Size: 0x0
    Params_GoToMenu params{};
    ProcessEvent(func, &params);
}
void AFrontend_C::OnSRFinished() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/UI/Frontend_LevelInstance_2.Frontend_C.OnSRFinished"));
    struct Params_OnSRFinished {
    }; // Size: 0x0
    Params_OnSRFinished params{};
    ProcessEvent(func, &params);
}
void AFrontend_C::StartAmbientSceneRig() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/UI/Frontend_LevelInstance_2.Frontend_C.StartAmbientSceneRig"));
    struct Params_StartAmbientSceneRig {
    }; // Size: 0x0
    Params_StartAmbientSceneRig params{};
    ProcessEvent(func, &params);
}
void AFrontend_C::InitAndQueueUpBackgroundSceneRigs() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/UI/Frontend_LevelInstance_2.Frontend_C.InitAndQueueUpBackgroundSceneRigs"));
    struct Params_InitAndQueueUpBackgroundSceneRigs {
    }; // Size: 0x0
    Params_InitAndQueueUpBackgroundSceneRigs params{};
    ProcessEvent(func, &params);
}
void AFrontend_C::LightingIdentityInitialized(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/UI/Frontend_LevelInstance_2.Frontend_C.LightingIdentityInitialized"));
    struct Params_LightingIdentityInitialized {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_LightingIdentityInitialized params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void AFrontend_C::OnSublevelShown() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/UI/Frontend_LevelInstance_2.Frontend_C.OnSublevelShown"));
    struct Params_OnSublevelShown {
    }; // Size: 0x0
    Params_OnSublevelShown params{};
    ProcessEvent(func, &params);
}
void AFrontend_C::LoadFrontendSublevels() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/UI/Frontend_LevelInstance_2.Frontend_C.LoadFrontendSublevels"));
    struct Params_LoadFrontendSublevels {
    }; // Size: 0x0
    Params_LoadFrontendSublevels params{};
    ProcessEvent(func, &params);
}
void AFrontend_C::OnAmbientSRSetPlaying(bool bPlaying) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/UI/Frontend_LevelInstance_2.Frontend_C.OnAmbientSRSetPlaying"));
    struct Params_OnAmbientSRSetPlaying {
        bool bPlaying; // 0x0
    }; // Size: 0x1
    Params_OnAmbientSRSetPlaying params{};
    params.bPlaying = (bool)bPlaying;
    ProcessEvent(func, &params);
}
void AFrontend_C::ShowMenuCharacter(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/UI/Frontend_LevelInstance_2.Frontend_C.ShowMenuCharacter"));
    struct Params_ShowMenuCharacter {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_ShowMenuCharacter params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void AFrontend_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/UI/Frontend_LevelInstance_2.Frontend_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void AFrontend_C::ReceiveEndPlay(EEndPlayReason::Type EndPlayReason) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/UI/Frontend_LevelInstance_2.Frontend_C.ReceiveEndPlay"));
    struct Params_ReceiveEndPlay {
        EEndPlayReason::Type EndPlayReason; // 0x0
    }; // Size: 0x1
    Params_ReceiveEndPlay params{};
    params.EndPlayReason = (EEndPlayReason::Type)EndPlayReason;
    ProcessEvent(func, &params);
}
void AFrontend_C::GoToIntro() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/UI/Frontend_LevelInstance_2.Frontend_C.GoToIntro"));
    struct Params_GoToIntro {
    }; // Size: 0x0
    Params_GoToIntro params{};
    ProcessEvent(func, &params);
}
void AFrontend_C::FrontendOpenFrontendMenu(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/UI/Frontend_LevelInstance_2.Frontend_C.FrontendOpenFrontendMenu"));
    struct Params_FrontendOpenFrontendMenu {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_FrontendOpenFrontendMenu params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void AFrontend_C::FrontendResetLevelSetup(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/UI/Frontend_LevelInstance_2.Frontend_C.FrontendResetLevelSetup"));
    struct Params_FrontendResetLevelSetup {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_FrontendResetLevelSetup params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void AFrontend_C::ReceiveTick(float DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/UI/Frontend_LevelInstance_2.Frontend_C.ReceiveTick"));
    struct Params_ReceiveTick {
        float DeltaSeconds; // 0x0
    }; // Size: 0x4
    Params_ReceiveTick params{};
    params.DeltaSeconds = (float)DeltaSeconds;
    ProcessEvent(func, &params);
}
void AFrontend_C::CharacterProfileDeleted(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/UI/Frontend_LevelInstance_2.Frontend_C.CharacterProfileDeleted"));
    struct Params_CharacterProfileDeleted {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_CharacterProfileDeleted params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void AFrontend_C::OnTitleScreenReleased_ToFrontend() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/UI/Frontend_LevelInstance_2.Frontend_C.OnTitleScreenReleased_ToFrontend"));
    struct Params_OnTitleScreenReleased_ToFrontend {
    }; // Size: 0x0
    Params_OnTitleScreenReleased_ToFrontend params{};
    ProcessEvent(func, &params);
}
void AFrontend_C::LoadPresetsFromArrayComplete(AActor* Actor, bool Success) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/UI/Frontend_LevelInstance_2.Frontend_C.LoadPresetsFromArrayComplete"));
    struct Params_LoadPresetsFromArrayComplete {
        AActor* Actor; // 0x0
        bool Success; // 0x8
    }; // Size: 0x9
    Params_LoadPresetsFromArrayComplete params{};
    params.Actor = (AActor*)Actor;
    params.Success = (bool)Success;
    ProcessEvent(func, &params);
}
void AFrontend_C::ExecuteUbergraph_Frontend(int32_t EntryPoint, AActor* K2Node_CustomEvent_Actor, bool K2Node_CustomEvent_Success) {}
