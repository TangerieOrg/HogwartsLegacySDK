#include "UExperienceManager.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
int32_t UExperienceManager::GetExperienceLevelStartPoints() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ExperienceManager.GetExperienceLevelStartPoints"));
    struct Params_GetExperienceLevelStartPoints {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetExperienceLevelStartPoints params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
void UExperienceManager::OnGameToBeSaved() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ExperienceManager.OnGameToBeSaved"));
    struct Params_OnGameToBeSaved {
    }; // Size: 0x0
    Params_OnGameToBeSaved params{};
    ProcessEvent(func, &params);
}
UExperienceManager* UExperienceManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ExperienceManager");
    return (UExperienceManager*)res;
}
void UExperienceManager::SetLevelBounds(int32_t i_level, int32_t& o_startPoints, int32_t& o_endPoints) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ExperienceManager.SetLevelBounds"));
    struct Params_SetLevelBounds {
        int32_t i_level; // 0x0
        int32_t o_startPoints; // 0x4
        int32_t o_endPoints; // 0x8
    }; // Size: 0xc
    Params_SetLevelBounds params{};
    params.i_level = (int32_t)i_level;
    params.o_startPoints = (int32_t)o_startPoints;
    params.o_endPoints = (int32_t)o_endPoints;
    ProcessEvent(func, &params);
    o_endPoints = params.o_endPoints;
    o_startPoints = params.o_startPoints;
}
void UExperienceManager::SetExperienceLevel(int32_t NewLevel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ExperienceManager.SetExperienceLevel"));
    struct Params_SetExperienceLevel {
        int32_t NewLevel; // 0x0
    }; // Size: 0x4
    Params_SetExperienceLevel params{};
    params.NewLevel = (int32_t)NewLevel;
    ProcessEvent(func, &params);
}
void UExperienceManager::OnSaveGameLoaded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ExperienceManager.OnSaveGameLoaded"));
    struct Params_OnSaveGameLoaded {
    }; // Size: 0x0
    Params_OnSaveGameLoaded params{};
    ProcessEvent(func, &params);
}
void UExperienceManager::OnNewGame(UObject* Caller, bool IsInIntro) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ExperienceManager.OnNewGame"));
    struct Params_OnNewGame {
        UObject* Caller; // 0x0
        bool IsInIntro; // 0x8
    }; // Size: 0x9
    Params_OnNewGame params{};
    params.Caller = (UObject*)Caller;
    params.IsInIntro = (bool)IsInIntro;
    ProcessEvent(func, &params);
}
int32_t UExperienceManager::GetExperiencePoints() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ExperienceManager.GetExperiencePoints"));
    struct Params_GetExperiencePoints {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetExperiencePoints params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UExperienceManager::GetExperienceLevelEndPoints() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ExperienceManager.GetExperienceLevelEndPoints"));
    struct Params_GetExperienceLevelEndPoints {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetExperienceLevelEndPoints params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
int32_t UExperienceManager::GetExperienceLevel() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ExperienceManager.GetExperienceLevel"));
    struct Params_GetExperienceLevel {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetExperienceLevel params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
UExperienceManager* UExperienceManager::Get() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ExperienceManager.Get"));
    struct Params_Get {
        UExperienceManager* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_Get params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UExperienceManager*)params.ReturnValue;
}
void UExperienceManager::GainExperienceByAction(FString ExperienceAction) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ExperienceManager.GainExperienceByAction"));
    struct Params_GainExperienceByAction {
        FString ExperienceAction; // 0x0
    }; // Size: 0x10
    Params_GainExperienceByAction params{};
    params.ExperienceAction = (FString)ExperienceAction;
    ProcessEvent(func, &params);
}
void UExperienceManager::AddExperience(int32_t Points, FString Source, FString source_detail) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ExperienceManager.AddExperience"));
    struct Params_AddExperience {
        int32_t Points; // 0x0
        char pad_4[0x4];
        FString Source; // 0x8
        FString source_detail; // 0x18
    }; // Size: 0x28
    Params_AddExperience params{};
    params.Points = (int32_t)Points;
    params.Source = (FString)Source;
    params.source_detail = (FString)source_detail;
    ProcessEvent(func, &params);
}
