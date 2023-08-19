#include "EInfirmaryPriority.hpp"
#include "FInfirmaryStudentStatus.hpp"
#include "FTimeEvent.hpp"
#include "UFunction.hpp"
#include "UInfirmaryManager.hpp"
#include "UObject.hpp"
UInfirmaryManager* UInfirmaryManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.InfirmaryManager");
    return (UInfirmaryManager*)res;
}
void UInfirmaryManager::OnSaveGameLoaded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InfirmaryManager.OnSaveGameLoaded"));
    struct Params_OnSaveGameLoaded {
    }; // Size: 0x0
    Params_OnSaveGameLoaded params{};
    ProcessEvent(func, &params);
}
void UInfirmaryManager::OnNewGame() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InfirmaryManager.OnNewGame"));
    struct Params_OnNewGame {
    }; // Size: 0x0
    Params_OnNewGame params{};
    ProcessEvent(func, &params);
}
UInfirmaryManager* UInfirmaryManager::Get() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InfirmaryManager.Get"));
    struct Params_Get {
        UInfirmaryManager* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_Get params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UInfirmaryManager*)params.ReturnValue;
}
void UInfirmaryManager::HourlyCheck(FTimeEvent& InTimeEvent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InfirmaryManager.HourlyCheck"));
    struct Params_HourlyCheck {
        FTimeEvent InTimeEvent; // 0x0
    }; // Size: 0x30
    Params_HourlyCheck params{};
    params.InTimeEvent = (FTimeEvent)InTimeEvent;
    ProcessEvent(func, &params);
    InTimeEvent = params.InTimeEvent;
}
void UInfirmaryManager::OnGameToBeSaved() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InfirmaryManager.OnGameToBeSaved"));
    struct Params_OnGameToBeSaved {
    }; // Size: 0x0
    Params_OnGameToBeSaved params{};
    ProcessEvent(func, &params);
}
void UInfirmaryManager::GetStudents(TArray<FString>& OutStudents) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InfirmaryManager.GetStudents"));
    struct Params_GetStudents {
        TArray<FString> OutStudents; // 0x0
    }; // Size: 0x10
    Params_GetStudents params{};
    params.OutStudents = (TArray<FString>)OutStudents;
    ProcessEvent(func, &params);
    OutStudents = params.OutStudents;
}
bool UInfirmaryManager::IsStudentIn(FString UniqueId) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InfirmaryManager.IsStudentIn"));
    struct Params_IsStudentIn {
        FString UniqueId; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_IsStudentIn params{};
    params.UniqueId = (FString)UniqueId;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UInfirmaryManager::AddStudent(FString UniqueId, int64_t SecondsInTheInfirmary, EInfirmaryPriority Priority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.InfirmaryManager.AddStudent"));
    struct Params_AddStudent {
        FString UniqueId; // 0x0
        int64_t SecondsInTheInfirmary; // 0x10
        EInfirmaryPriority Priority; // 0x18
    }; // Size: 0x19
    Params_AddStudent params{};
    params.UniqueId = (FString)UniqueId;
    params.SecondsInTheInfirmary = (int64_t)SecondsInTheInfirmary;
    params.Priority = (EInfirmaryPriority)Priority;
    ProcessEvent(func, &params);
}
