#pragma once
#include <cstdint>
#include "ALevelScriptActor.hpp"
#include "EIntroCheckpoint.hpp"
#include "FPointerToUberGraphFrame.hpp"
class ULevelStreamingDynamic;
class UObject;
class ABP_OverlandVars_C;
class APlayerStart;
class APostProcessVolumeWithBlendDomain;
class ULandscapeManager;
class UCurtainSubsystem;
class AGameModeBase;
#pragma pack(push, 1)
class AOverland_C : public ALevelScriptActor {
public:
    FPointerToUberGraphFrame UberGraphFrame; // 0x250
    char pad_258[0xa0];
    bool IntroPlaying; // 0x2f8
    char pad_2f9[0x7f];
    ULevelStreamingDynamic* HogwartsTourLevel; // 0x378
    char pad_380[0x28];
    ABP_OverlandVars_C* __BP_OverlandVars___ExecuteUbergraph_Overland_RefProperty; // 0x3a8
    APlayerStart* PlayerStart_HogwartsTour_ExecuteUbergraph_Overland_RefProperty; // 0x3b0
    APostProcessVolumeWithBlendDomain* PPV_LowEnd_fog_ExecuteUbergraph_Overland_RefProperty; // 0x3b8
    static AOverland_C* StaticClass();
    bool IsHogwartsTourInProgress(EIntroCheckpoint CallFunc_GetIntroCheckpoint_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
    void LoadHogwarts(ULandscapeManager* CallFunc_Get_ReturnValue, bool CallFunc_LoadLevelInstanceBySoftObjectPtr_bOutSuccess, ULevelStreamingDynamic* CallFunc_LoadLevelInstanceBySoftObjectPtr_ReturnValue);
    void CheckIfIntro(bool& IntroPlaying, bool CallFunc_IsHogwartsTourInProgress_ReturnValue, int32_t CallFunc_GetConsoleVariableAsInt_Value, bool CallFunc_GetConsoleVariableAsInt_bExists, AGameModeBase* CallFunc_GetGameMode_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, FString CallFunc_ParseOption_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1);
    void CurtainRaised_90C5F4824ECBF8EBAC311A85808C8D3F();
    void CurtainRaised_8B5AF4C442552B1CC0F60D805B0C825E();
    void ReceiveBeginPlay();
    void StreamingComplete();
    void FirstDay();
    void LevelsStreamed();
    void StartHogwartsTour();
    void WakeUpComplete(UObject* Caller);
    void OnHogwartsTourLevelShown();
    void PlayerSorted(UObject* Caller);
    void COM_09_Updated(UObject* Caller, FName& String);
    void LoadDarkArtsGameplay(UObject* Caller);
    void ExecuteUbergraph_Overland(int32_t EntryPoint, UCurtainSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue);
}; // Size: 0x3c0
#pragma pack(pop)
