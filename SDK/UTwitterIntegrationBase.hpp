#pragma once
#include <cstdint>
#include "ETwitterRequestMethod.hpp"
#include "UPlatformInterfaceBase.hpp"
#pragma pack(push, 1)
class UTwitterIntegrationBase : public UPlatformInterfaceBase {
public:
    static UTwitterIntegrationBase* StaticClass();
    bool TwitterRequest(FString URL, TArray<FString>& ParamKeysAndValues, ETwitterRequestMethod RequestMethod, int32_t AccountIndex);
    bool ShowTweetUI(FString InitialMessage, FString URL, FString Picture);
    void Init();
    int32_t GetNumAccounts();
    FString GetAccountName(int32_t AccountIndex);
    bool CanShowTweetUI();
    bool AuthorizeAccounts();
}; // Size: 0x38
#pragma pack(pop)
