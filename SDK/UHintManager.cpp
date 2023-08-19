#include "UFunction.hpp"
#include "UGameLogicObject.hpp"
#include "UHint.hpp"
#include "UHintManager.hpp"
#include "UObject.hpp"
UHintManager* UHintManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.HintManager");
    return (UHintManager*)res;
}
void UHintManager::OnSaveGameLoaded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HintManager.OnSaveGameLoaded"));
    struct Params_OnSaveGameLoaded {
    }; // Size: 0x0
    Params_OnSaveGameLoaded params{};
    ProcessEvent(func, &params);
}
void UHintManager::OnGameToBeSaved() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HintManager.OnGameToBeSaved"));
    struct Params_OnGameToBeSaved {
    }; // Size: 0x0
    Params_OnGameToBeSaved params{};
    ProcessEvent(func, &params);
}
void UHintManager::DestroyHint(UHint* Hint) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HintManager.DestroyHint"));
    struct Params_DestroyHint {
        UHint* Hint; // 0x0
    }; // Size: 0x8
    Params_DestroyHint params{};
    params.Hint = (UHint*)Hint;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
UGameLogicObject* UHintManager::GetHintManagerGameLogicObject() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HintManager.GetHintManagerGameLogicObject"));
    struct Params_GetHintManagerGameLogicObject {
        UGameLogicObject* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetHintManagerGameLogicObject params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UGameLogicObject*)params.ReturnValue;
}
UHint* UHintManager::CreateHint(FString Name) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HintManager.CreateHint"));
    struct Params_CreateHint {
        FString Name; // 0x0
        UHint* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_CreateHint params{};
    params.Name = (FString)Name;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UHint*)params.ReturnValue;
}
UHint* UHintManager::GetHint(FString HintKey) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.HintManager.GetHint"));
    struct Params_GetHint {
        FString HintKey; // 0x0
        UHint* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_GetHint params{};
    params.HintKey = (FString)HintKey;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UHint*)params.ReturnValue;
}
