#pragma once
#include <cstdint>
#include "AFrontendMapScript.hpp"
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
class UUI_BP_FrontEnd_Menu_C;
class ASceneRigActor;
class UUI_BP_PSO_FS_C;
class USceneRig;
class UUI_BP_StartPage_C;
class ULevelStreamingDynamic;
class USceneRigPlayer;
class APlayerController;
class AUI_BP_DummyActor_C;
class AUIDummyActor;
class UUIOnlineManager;
class UUIManager;
class UAnimationComponent;
class UGearManager;
class UObject;
class AActor;
#pragma pack(push, 1)
class AFrontend_C : public AFrontendMapScript {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x250
    int32_t MenuMusic; // 0x258
    FVector CameraLookAtTarget; // 0x25c
    UUI_BP_FrontEnd_Menu_C* FrontEndMenuWidget; // 0x268
    bool bPrintDebugStrings; // 0x270
    char pad_271[0x7];
    UUI_BP_StartPage_C* StartPageWidget; // 0x278
    FFrontendPlayerState FrontendPlayerState; // 0x280
    ESanctuaryIdentity LightingIdentity; // 0x2d0
    bool SanctuaryAvailable; // 0x2d1
    char pad_2d2[0x6];
    TArray<void*> Sublevels; // 0x2d8
    TArray<ULevelStreamingDynamic*> SublevelInstances; // 0x2e8
    char pad_2f8[0x50];
    TArray<USceneRig*> SceneRigPool; // 0x348
    bool HasQueuedSceneRig; // 0x358
    char pad_359[0x7];
    USceneRig* CurrentSceneRig; // 0x360
    bool AllUnlocked; // 0x368
    char pad_369[0x7];
    UUI_BP_PSO_FS_C* PSOScreenWidget; // 0x370
    USceneRigPlayer* CurrentSceneRigPlayer; // 0x378
    ASceneRigActor* CIV_Frontend_Ambient_2_ExecuteUbergraph_Frontend_RefProperty; // 0x380
    AUI_BP_DummyActor_C* UI_BP_DummyActor_2_ExecuteUbergraph_Frontend_RefProperty; // 0x388
    AUI_BP_DummyActor_C* UI_BP_DummyActor_2_EdGraph_1_RefProperty; // 0x390
    AUI_BP_DummyActor_C* UI_BP_DummyActor_2_EdGraph_2_RefProperty; // 0x398
    AUI_BP_DummyActor_C* UI_BP_DummyActor_2_EdGraph_3_RefProperty; // 0x3a0
    ASceneRigActor* CIV_Frontend_Ambient_2_EdGraph_7_RefProperty; // 0x3a8
    AUI_BP_DummyActor_C* UI_BP_DummyActor_2_EdGraph_9_RefProperty; // 0x3b0
    static AFrontend_C* StaticClass();
    void SetDummyVisible(bool Override_Full_Game_Check, AUIDummyActor* DUMMY, UUIOnlineManager* CallFunc_GetUIOnlineManagerPure_ReturnValue, bool CallFunc_IsFullGameInstalled_ReturnValue, bool CallFunc_BooleanOR_ReturnValue);
    void SetUpDummyActorPresets(EGenderEnum Temp_byte_Variable, FName CallFunc_GetRandomStartingPreset_PresetID, EGenderEnum Temp_byte_Variable_1, bool Temp_bool_Variable, FCharacterSaveGameInfo CallFunc_GetMostRecentlyPlayedCharacter_MostRecentCharacter);
    void GetMostRecentlyPlayedCharacter(FCharacterSaveGameInfo& MostRecentCharacter, FCharacterSaveGameInfo ReturnCharacter, FDateTime LatestSaveTime, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, TArray<FCharacterSaveGameInfo>& CallFunc_GetAllPlayableCharacters_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, FCharacterSaveGameInfo CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, TArray<FSaveGameInfo>& CallFunc_GetAllSavesOfType_ReturnValue, FDateTime CallFunc_DateTimeFromString_Result, bool CallFunc_DateTimeFromString_ReturnValue, bool CallFunc_Greater_DateTimeDateTime_ReturnValue);
    void StopSceneRigs(bool CallFunc_IsValid_ReturnValue);
    void ShowStartPage(UUIManager* CallFunc_GetUIManagerPure_ReturnValue, APlayerController* CallFunc_GetPlayerController_ReturnValue, UUI_BP_StartPage_C* CallFunc_Create_ReturnValue);
    void AllLevelsVisible(bool& AllVisible, bool LevelsVisible, bool Temp_bool_True_if_break_was_hit_Variable, int32_t Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, ULevelStreamingDynamic* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsLevelVisible_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void PrintString(FString String, FLinearColor Color, int64_t CallFunc_GetFrameCount_ReturnValue);
    void UpdateLookAt(FVector CurrentLookAtTarget, UAnimationComponent* CallFunc_GetComponentByClass_ReturnValue, FVector CallFunc_GetActorForwardVector_ReturnValue, FVector CallFunc_Multiply_VectorFloat_ReturnValue, FVector CallFunc_Add_VectorVector_ReturnValue);
    void ResetGearAppearance(int32_t Temp_int_Variable, int32_t Temp_int_Variable_1, uint8_t CallFunc_Conv_IntToByte_ReturnValue, int32_t CallFunc_Add_IntInt_ReturnValue, uint8_t CallFunc_GetValidValue_ReturnValue, uint8_t CallFunc_Conv_IntToByte_ReturnValue_1, uint8_t CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32_t CallFunc_Conv_ByteToInt_ReturnValue, int32_t Temp_int_Array_Index_Variable, int32_t Temp_int_Loop_Counter_Variable, int32_t CallFunc_Add_IntInt_ReturnValue_1, UGearManager* CallFunc_Get_ReturnValue, int32_t CallFunc_MakeLiteralInt_ReturnValue);
    void Apply_Actor_Preset(FName FullBodyPresetName, bool ApplyToModel, EGenderEnum CallFunc_GetFullBodyPreset_OutGender);
    void GetRandomStartingPreset(FName& PresetId, EGenderEnum Gender, FName FemalePreset, FName MalePreset, EGenderEnum Temp_byte_Variable, EGenderEnum Temp_byte_Variable_1, int32_t Temp_int_Variable, UUIManager* CallFunc_Get_ReturnValue, EGenderEnum Temp_byte_Variable_2, TArray<FName>& CallFunc_GetFullBodyPresetNames_ReturnValue, int32_t CallFunc_Array_Length_ReturnValue, FName K2Node_Select_Default, int32_t CallFunc_RandomInteger_ReturnValue, FName CallFunc_Array_Get_Item, int32_t CallFunc_RandomInteger_ReturnValue_1, TArray<FName>& CallFunc_GetFullBodyPresetNames_ReturnValue_1, int32_t CallFunc_Array_Length_ReturnValue_1, EGenderEnum K2Node_Select_Default_1, int32_t CallFunc_RandomInteger_ReturnValue_2, FName CallFunc_Array_Get_Item_1);
    void OnLoaded_B2E67DF4413723CA78F189B21F27DAC0(UObject* Loaded);
    void QueueUpNextSceneRig();
    void OnSRFinished();
    void InitAndQueueUpBackgroundSceneRigs();
    void BeginBackgroundAppearanceTasks();
    void LightingIdentityInitialized(UObject* Caller);
    void SetLightingIdentity();
    void OnSublevelShown();
    void LoadFrontendSublevels();
    void OnAmbientSRSetPlaying(bool bPlaying);
    void StartAmbientSceneRig();
    void ReceiveBeginPlay();
    void ReceiveEndPlay(EEndPlayReason::Type EndPlayReason);
    void GoToMenu();
    void GoToIntro();
    void HideMenuCharacter(UObject* Caller);
    void ShowMenuCharacter(UObject* Caller);
    void FrontendOpenFrontendMenu(UObject* Caller);
    void FrontendResetLevelSetup(UObject* Caller);
    void ReceiveTick(float DeltaSeconds);
    void PSOScreenComplete();
    void CharacterProfileDeleted(UObject* Caller);
    void OnTitleScreenReleased_ToFrontend();
    void LoadPresetsFromArrayComplete(AActor* Actor, bool Success);
    void ExecuteUbergraph_Frontend(int32_t EntryPoint, AActor* K2Node_CustomEvent_Actor, bool K2Node_CustomEvent_Success);
}; // Size: 0x3b8
#pragma pack(pop)
