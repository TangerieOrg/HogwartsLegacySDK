#include "AActor.hpp"
#include "UAcknowledgement.hpp"
#include "UAcknowledgementManager.hpp"
#include "UFunction.hpp"
#include "UGameLogicObject.hpp"
#include "UObject.hpp"
UAcknowledgementManager* UAcknowledgementManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AcknowledgementManager");
    return (UAcknowledgementManager*)res;
}
void UAcknowledgementManager::UpdateMiscStatStatic(FName Key, FString Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AcknowledgementManager.UpdateMiscStatStatic"));
    struct Params_UpdateMiscStatStatic {
        FName Key; // 0x0
        FString Value; // 0x8
    }; // Size: 0x18
    Params_UpdateMiscStatStatic params{};
    params.Key = (FName)Key;
    params.Value = (FString)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAcknowledgementManager::UpdateMiscIntStatStatic(FName Key, int32_t Value) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AcknowledgementManager.UpdateMiscIntStatStatic"));
    struct Params_UpdateMiscIntStatStatic {
        FName Key; // 0x0
        int32_t Value; // 0x8
    }; // Size: 0xc
    Params_UpdateMiscIntStatStatic params{};
    params.Key = (FName)Key;
    params.Value = (int32_t)Value;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAcknowledgementManager::UpdateMiscBoolStatStatic(FName Key, bool bValue) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AcknowledgementManager.UpdateMiscBoolStatStatic"));
    struct Params_UpdateMiscBoolStatStatic {
        FName Key; // 0x0
        bool bValue; // 0x8
    }; // Size: 0x9
    Params_UpdateMiscBoolStatStatic params{};
    params.Key = (FName)Key;
    params.bValue = (bool)bValue;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAcknowledgementManager::SetSpecialSpeakerByDBIDForAcknowledgement(FName& InSpecialSpeakerName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AcknowledgementManager.SetSpecialSpeakerByDBIDForAcknowledgement"));
    struct Params_SetSpecialSpeakerByDBIDForAcknowledgement {
        FName InSpecialSpeakerName; // 0x0
    }; // Size: 0x8
    Params_SetSpecialSpeakerByDBIDForAcknowledgement params{};
    params.InSpecialSpeakerName = (FName)InSpecialSpeakerName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    InSpecialSpeakerName = params.InSpecialSpeakerName;
}
void UAcknowledgementManager::SetSpecialSpeakerForAcknowledgement(AActor* InSpecialSpeaker) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AcknowledgementManager.SetSpecialSpeakerForAcknowledgement"));
    struct Params_SetSpecialSpeakerForAcknowledgement {
        AActor* InSpecialSpeaker; // 0x0
    }; // Size: 0x8
    Params_SetSpecialSpeakerForAcknowledgement params{};
    params.InSpecialSpeaker = (AActor*)InSpecialSpeaker;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UAcknowledgementManager::OnSaveGameLoaded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AcknowledgementManager.OnSaveGameLoaded"));
    struct Params_OnSaveGameLoaded {
    }; // Size: 0x0
    Params_OnSaveGameLoaded params{};
    ProcessEvent(func, &params);
}
void UAcknowledgementManager::OnPreLoadGame() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AcknowledgementManager.OnPreLoadGame"));
    struct Params_OnPreLoadGame {
    }; // Size: 0x0
    Params_OnPreLoadGame params{};
    ProcessEvent(func, &params);
}
void UAcknowledgementManager::OnNewGame() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AcknowledgementManager.OnNewGame"));
    struct Params_OnNewGame {
    }; // Size: 0x0
    Params_OnNewGame params{};
    ProcessEvent(func, &params);
}
void UAcknowledgementManager::HandleStatChanged(FName StatID, int32_t Value, int32_t Delta) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AcknowledgementManager.HandleStatChanged"));
    struct Params_HandleStatChanged {
        FName StatID; // 0x0
        int32_t Value; // 0x8
        int32_t Delta; // 0xc
    }; // Size: 0x10
    Params_HandleStatChanged params{};
    params.StatID = (FName)StatID;
    params.Value = (int32_t)Value;
    params.Delta = (int32_t)Delta;
    ProcessEvent(func, &params);
}
void UAcknowledgementManager::HandleHouseChestAcknowledgement() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AcknowledgementManager.HandleHouseChestAcknowledgement"));
    struct Params_HandleHouseChestAcknowledgement {
    }; // Size: 0x0
    Params_HandleHouseChestAcknowledgement params{};
    ProcessEvent(func, &params);
}
void UAcknowledgementManager::HandleFleshLoaded(AActor* InFleshActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AcknowledgementManager.HandleFleshLoaded"));
    struct Params_HandleFleshLoaded {
        AActor* InFleshActor; // 0x0
    }; // Size: 0x8
    Params_HandleFleshLoaded params{};
    params.InFleshActor = (AActor*)InFleshActor;
    ProcessEvent(func, &params);
}
UAcknowledgementManager* UAcknowledgementManager::GetAcknowledgementManager() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AcknowledgementManager.GetAcknowledgementManager"));
    struct Params_GetAcknowledgementManager {
        UAcknowledgementManager* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetAcknowledgementManager params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UAcknowledgementManager*)params.ReturnValue;
}
UAcknowledgementManager* UAcknowledgementManager::Get() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AcknowledgementManager.Get"));
    struct Params_Get {
        UAcknowledgementManager* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_Get params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UAcknowledgementManager*)params.ReturnValue;
}
