#include "EExpiryTypes.hpp"
#include "UExpiryManager.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
bool UExpiryManager::ClearExpiry(FString UniqueId, EExpiryTypes ExpiryType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ExpiryManager.ClearExpiry"));
    struct Params_ClearExpiry {
        FString UniqueId; // 0x0
        EExpiryTypes ExpiryType; // 0x10
        bool ReturnValue; // 0x11
    }; // Size: 0x12
    Params_ClearExpiry params{};
    params.UniqueId = (FString)UniqueId;
    params.ExpiryType = (EExpiryTypes)ExpiryType;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UExpiryManager* UExpiryManager::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ExpiryManager");
    return (UExpiryManager*)res;
}
bool UExpiryManager::RefreshExpiry(FString UniqueId, int64_t ExpireTime, EExpiryTypes ExpiryType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ExpiryManager.RefreshExpiry"));
    struct Params_RefreshExpiry {
        FString UniqueId; // 0x0
        int64_t ExpireTime; // 0x10
        EExpiryTypes ExpiryType; // 0x18
        bool ReturnValue; // 0x19
    }; // Size: 0x1a
    Params_RefreshExpiry params{};
    params.UniqueId = (FString)UniqueId;
    params.ExpireTime = (int64_t)ExpireTime;
    params.ExpiryType = (EExpiryTypes)ExpiryType;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UExpiryManager::OnSaveGameLoaded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ExpiryManager.OnSaveGameLoaded"));
    struct Params_OnSaveGameLoaded {
    }; // Size: 0x0
    Params_OnSaveGameLoaded params{};
    ProcessEvent(func, &params);
}
UExpiryManager* UExpiryManager::Get() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ExpiryManager.Get"));
    struct Params_Get {
        UExpiryManager* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_Get params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UExpiryManager*)params.ReturnValue;
}
void UExpiryManager::OnGameToBeSaved() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ExpiryManager.OnGameToBeSaved"));
    struct Params_OnGameToBeSaved {
    }; // Size: 0x0
    Params_OnGameToBeSaved params{};
    ProcessEvent(func, &params);
}
bool UExpiryManager::HasExpiry(FString UniqueId, EExpiryTypes ExpiryType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ExpiryManager.HasExpiry"));
    struct Params_HasExpiry {
        FString UniqueId; // 0x0
        EExpiryTypes ExpiryType; // 0x10
        bool ReturnValue; // 0x11
    }; // Size: 0x12
    Params_HasExpiry params{};
    params.UniqueId = (FString)UniqueId;
    params.ExpiryType = (EExpiryTypes)ExpiryType;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
int64_t UExpiryManager::GetExpiry(FString UniqueId, EExpiryTypes ExpiryType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ExpiryManager.GetExpiry"));
    struct Params_GetExpiry {
        FString UniqueId; // 0x0
        EExpiryTypes ExpiryType; // 0x10
        char pad_11[0x7];
        int64_t ReturnValue; // 0x18
    }; // Size: 0x20
    Params_GetExpiry params{};
    params.UniqueId = (FString)UniqueId;
    params.ExpiryType = (EExpiryTypes)ExpiryType;
    ProcessEvent(func, &params);
    return (int64_t)params.ReturnValue;
}
bool UExpiryManager::AddExpiry(FString UniqueId, int64_t ExpireTime, EExpiryTypes ExpiryType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ExpiryManager.AddExpiry"));
    struct Params_AddExpiry {
        FString UniqueId; // 0x0
        int64_t ExpireTime; // 0x10
        EExpiryTypes ExpiryType; // 0x18
        bool ReturnValue; // 0x19
    }; // Size: 0x1a
    Params_AddExpiry params{};
    params.UniqueId = (FString)UniqueId;
    params.ExpireTime = (int64_t)ExpireTime;
    params.ExpiryType = (EExpiryTypes)ExpiryType;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
