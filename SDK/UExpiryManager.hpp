#pragma once
#include <cstdint>
#include "EExpiryTypes.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UExpiryManager : public UObject {
public:
    char pad_28[0x100];
    static UExpiryManager* StaticClass();
    bool RefreshExpiry(FString UniqueId, int64_t ExpireTime, EExpiryTypes ExpiryType);
    void OnSaveGameLoaded();
    void OnGameToBeSaved();
    bool HasExpiry(FString UniqueId, EExpiryTypes ExpiryType);
    int64_t GetExpiry(FString UniqueId, EExpiryTypes ExpiryType);
    static UExpiryManager* Get();
    bool ClearExpiry(FString UniqueId, EExpiryTypes ExpiryType);
    bool AddExpiry(FString UniqueId, int64_t ExpireTime, EExpiryTypes ExpiryType);
}; // Size: 0x128
#pragma pack(pop)
