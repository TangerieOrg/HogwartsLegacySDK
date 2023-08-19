#include "ETwitterRequestMethod.hpp"
#include "UFunction.hpp"
#include "UPlatformInterfaceBase.hpp"
#include "UTwitterIntegrationBase.hpp"
bool UTwitterIntegrationBase::CanShowTweetUI() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.TwitterIntegrationBase.CanShowTweetUI"));
    struct Params_CanShowTweetUI {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_CanShowTweetUI params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UTwitterIntegrationBase* UTwitterIntegrationBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.TwitterIntegrationBase");
    return (UTwitterIntegrationBase*)res;
}
FString UTwitterIntegrationBase::GetAccountName(int32_t AccountIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.TwitterIntegrationBase.GetAccountName"));
    struct Params_GetAccountName {
        int32_t AccountIndex; // 0x0
        char pad_4[0x4];
        FString ReturnValue; // 0x8
    }; // Size: 0x18
    Params_GetAccountName params{};
    params.AccountIndex = (int32_t)AccountIndex;
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
int32_t UTwitterIntegrationBase::GetNumAccounts() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.TwitterIntegrationBase.GetNumAccounts"));
    struct Params_GetNumAccounts {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetNumAccounts params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
bool UTwitterIntegrationBase::TwitterRequest(FString URL, TArray<FString>& ParamKeysAndValues, ETwitterRequestMethod RequestMethod, int32_t AccountIndex) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.TwitterIntegrationBase.TwitterRequest"));
    struct Params_TwitterRequest {
        FString URL; // 0x0
        TArray<FString> ParamKeysAndValues; // 0x10
        ETwitterRequestMethod RequestMethod; // 0x20
        char pad_21[0x3];
        int32_t AccountIndex; // 0x24
        bool ReturnValue; // 0x28
    }; // Size: 0x29
    Params_TwitterRequest params{};
    params.URL = (FString)URL;
    params.ParamKeysAndValues = (TArray<FString>)ParamKeysAndValues;
    params.RequestMethod = (ETwitterRequestMethod)RequestMethod;
    params.AccountIndex = (int32_t)AccountIndex;
    ProcessEvent(func, &params);
    ParamKeysAndValues = params.ParamKeysAndValues;
    return (bool)params.ReturnValue;
}
bool UTwitterIntegrationBase::ShowTweetUI(FString InitialMessage, FString URL, FString Picture) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.TwitterIntegrationBase.ShowTweetUI"));
    struct Params_ShowTweetUI {
        FString InitialMessage; // 0x0
        FString URL; // 0x10
        FString Picture; // 0x20
        bool ReturnValue; // 0x30
    }; // Size: 0x31
    Params_ShowTweetUI params{};
    params.InitialMessage = (FString)InitialMessage;
    params.URL = (FString)URL;
    params.Picture = (FString)Picture;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UTwitterIntegrationBase::Init() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.TwitterIntegrationBase.Init"));
    struct Params_Init {
    }; // Size: 0x0
    Params_Init params{};
    ProcessEvent(func, &params);
}
bool UTwitterIntegrationBase::AuthorizeAccounts() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.TwitterIntegrationBase.AuthorizeAccounts"));
    struct Params_AuthorizeAccounts {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_AuthorizeAccounts params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
