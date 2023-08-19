#include "ABP_OverlandVars_C.hpp"
#include "AGameModeBase.hpp"
#include "ALevelScriptActor.hpp"
#include "AOverland_C.hpp"
#include "APlayerStart.hpp"
#include "APostProcessVolumeWithBlendDomain.hpp"
#include "EIntroCheckpoint.hpp"
#include "FPointerToUberGraphFrame.hpp"
#include "UCurtainSubsystem.hpp"
#include "UFunction.hpp"
#include "ULandscapeManager.hpp"
#include "ULevelStreamingDynamic.hpp"
#include "UObject.hpp"
void AOverland_C::CurtainRaised_90C5F4824ECBF8EBAC311A85808C8D3F() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Overland/Overland.Overland_C.CurtainRaised_90C5F4824ECBF8EBAC311A85808C8D3F"));
    struct Params_CurtainRaised_90C5F4824ECBF8EBAC311A85808C8D3F {
    }; // Size: 0x0
    Params_CurtainRaised_90C5F4824ECBF8EBAC311A85808C8D3F params{};
    ProcessEvent(func, &params);
}
void AOverland_C::LoadHogwarts(ULandscapeManager* CallFunc_Get_ReturnValue, bool CallFunc_LoadLevelInstanceBySoftObjectPtr_bOutSuccess, ULevelStreamingDynamic* CallFunc_LoadLevelInstanceBySoftObjectPtr_ReturnValue) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Overland/Overland.Overland_C.LoadHogwarts"));
    struct Params_LoadHogwarts {
        ULandscapeManager* CallFunc_Get_ReturnValue; // 0x0
        bool CallFunc_LoadLevelInstanceBySoftObjectPtr_bOutSuccess; // 0x8
        char pad_9[0x7];
        ULevelStreamingDynamic* CallFunc_LoadLevelInstanceBySoftObjectPtr_ReturnValue; // 0x10
    }; // Size: 0x18
    Params_LoadHogwarts params{};
    params.CallFunc_Get_ReturnValue = (ULandscapeManager*)CallFunc_Get_ReturnValue;
    params.CallFunc_LoadLevelInstanceBySoftObjectPtr_bOutSuccess = (bool)CallFunc_LoadLevelInstanceBySoftObjectPtr_bOutSuccess;
    params.CallFunc_LoadLevelInstanceBySoftObjectPtr_ReturnValue = (ULevelStreamingDynamic*)CallFunc_LoadLevelInstanceBySoftObjectPtr_ReturnValue;
    ProcessEvent(func, &params);
}
AOverland_C* AOverland_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Levels/Overland/Overland.Overland_C");
    return (AOverland_C*)res;
}
bool AOverland_C::IsHogwartsTourInProgress(EIntroCheckpoint CallFunc_GetIntroCheckpoint_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Overland/Overland.Overland_C.IsHogwartsTourInProgress"));
    struct Params_IsHogwartsTourInProgress {
        bool ReturnValue; // 0x0
        EIntroCheckpoint CallFunc_GetIntroCheckpoint_ReturnValue; // 0x1
        bool K2Node_SwitchEnum_CmpSuccess; // 0x2
    }; // Size: 0x3
    Params_IsHogwartsTourInProgress params{};
    params.CallFunc_GetIntroCheckpoint_ReturnValue = (EIntroCheckpoint)CallFunc_GetIntroCheckpoint_ReturnValue;
    params.K2Node_SwitchEnum_CmpSuccess = (bool)K2Node_SwitchEnum_CmpSuccess;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void AOverland_C::StreamingComplete() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Overland/Overland.Overland_C.StreamingComplete"));
    struct Params_StreamingComplete {
    }; // Size: 0x0
    Params_StreamingComplete params{};
    ProcessEvent(func, &params);
}
void AOverland_C::CheckIfIntro(bool& IntroPlaying, bool CallFunc_IsHogwartsTourInProgress_ReturnValue, int32_t CallFunc_GetConsoleVariableAsInt_Value, bool CallFunc_GetConsoleVariableAsInt_bExists, AGameModeBase* CallFunc_GetGameMode_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, FString CallFunc_ParseOption_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Overland/Overland.Overland_C.CheckIfIntro"));
    struct Params_CheckIfIntro {
        bool IntroPlaying; // 0x0
        bool CallFunc_IsHogwartsTourInProgress_ReturnValue; // 0x1
        char pad_2[0x2];
        int32_t CallFunc_GetConsoleVariableAsInt_Value; // 0x4
        bool CallFunc_GetConsoleVariableAsInt_bExists; // 0x8
        char pad_9[0x7];
        AGameModeBase* CallFunc_GetGameMode_ReturnValue; // 0x10
        bool CallFunc_Greater_IntInt_ReturnValue; // 0x18
        char pad_19[0x7];
        FString CallFunc_ParseOption_ReturnValue; // 0x20
        bool CallFunc_EqualEqual_StrStr_ReturnValue; // 0x30
        bool CallFunc_BooleanOR_ReturnValue; // 0x31
        bool CallFunc_BooleanOR_ReturnValue_1; // 0x32
    }; // Size: 0x33
    Params_CheckIfIntro params{};
    params.IntroPlaying = (bool)IntroPlaying;
    params.CallFunc_IsHogwartsTourInProgress_ReturnValue = (bool)CallFunc_IsHogwartsTourInProgress_ReturnValue;
    params.CallFunc_GetConsoleVariableAsInt_Value = (int32_t)CallFunc_GetConsoleVariableAsInt_Value;
    params.CallFunc_GetConsoleVariableAsInt_bExists = (bool)CallFunc_GetConsoleVariableAsInt_bExists;
    params.CallFunc_GetGameMode_ReturnValue = (AGameModeBase*)CallFunc_GetGameMode_ReturnValue;
    params.CallFunc_Greater_IntInt_ReturnValue = (bool)CallFunc_Greater_IntInt_ReturnValue;
    params.CallFunc_ParseOption_ReturnValue = (FString)CallFunc_ParseOption_ReturnValue;
    params.CallFunc_EqualEqual_StrStr_ReturnValue = (bool)CallFunc_EqualEqual_StrStr_ReturnValue;
    params.CallFunc_BooleanOR_ReturnValue = (bool)CallFunc_BooleanOR_ReturnValue;
    params.CallFunc_BooleanOR_ReturnValue_1 = (bool)CallFunc_BooleanOR_ReturnValue_1;
    ProcessEvent(func, &params);
    IntroPlaying = params.IntroPlaying;
}
void AOverland_C::ReceiveBeginPlay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Overland/Overland.Overland_C.ReceiveBeginPlay"));
    struct Params_ReceiveBeginPlay {
    }; // Size: 0x0
    Params_ReceiveBeginPlay params{};
    ProcessEvent(func, &params);
}
void AOverland_C::CurtainRaised_8B5AF4C442552B1CC0F60D805B0C825E() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Overland/Overland.Overland_C.CurtainRaised_8B5AF4C442552B1CC0F60D805B0C825E"));
    struct Params_CurtainRaised_8B5AF4C442552B1CC0F60D805B0C825E {
    }; // Size: 0x0
    Params_CurtainRaised_8B5AF4C442552B1CC0F60D805B0C825E params{};
    ProcessEvent(func, &params);
}
void AOverland_C::ExecuteUbergraph_Overland(int32_t EntryPoint, UCurtainSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue) {}
void AOverland_C::FirstDay() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Overland/Overland.Overland_C.FirstDay"));
    struct Params_FirstDay {
    }; // Size: 0x0
    Params_FirstDay params{};
    ProcessEvent(func, &params);
}
void AOverland_C::LevelsStreamed() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Overland/Overland.Overland_C.LevelsStreamed"));
    struct Params_LevelsStreamed {
    }; // Size: 0x0
    Params_LevelsStreamed params{};
    ProcessEvent(func, &params);
}
void AOverland_C::StartHogwartsTour() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Overland/Overland.Overland_C.StartHogwartsTour"));
    struct Params_StartHogwartsTour {
    }; // Size: 0x0
    Params_StartHogwartsTour params{};
    ProcessEvent(func, &params);
}
void AOverland_C::WakeUpComplete(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Overland/Overland.Overland_C.WakeUpComplete"));
    struct Params_WakeUpComplete {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_WakeUpComplete params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void AOverland_C::OnHogwartsTourLevelShown() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Overland/Overland.Overland_C.OnHogwartsTourLevelShown"));
    struct Params_OnHogwartsTourLevelShown {
    }; // Size: 0x0
    Params_OnHogwartsTourLevelShown params{};
    ProcessEvent(func, &params);
}
void AOverland_C::PlayerSorted(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Overland/Overland.Overland_C.PlayerSorted"));
    struct Params_PlayerSorted {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_PlayerSorted params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
void AOverland_C::COM_09_Updated(UObject* Caller, FName& String) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Overland/Overland.Overland_C.COM_09_Updated"));
    struct Params_COM_09_Updated {
        UObject* Caller; // 0x0
        FName String; // 0x8
    }; // Size: 0x10
    Params_COM_09_Updated params{};
    params.Caller = (UObject*)Caller;
    params.String = (FName)String;
    ProcessEvent(func, &params);
    String = params.String;
}
void AOverland_C::LoadDarkArtsGameplay(UObject* Caller) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Levels/Overland/Overland.Overland_C.LoadDarkArtsGameplay"));
    struct Params_LoadDarkArtsGameplay {
        UObject* Caller; // 0x0
    }; // Size: 0x8
    Params_LoadDarkArtsGameplay params{};
    params.Caller = (UObject*)Caller;
    ProcessEvent(func, &params);
}
