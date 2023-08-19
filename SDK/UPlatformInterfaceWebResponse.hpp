#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UPlatformInterfaceWebResponse : public UObject {
public:
    FString OriginalURL; // 0x28
    int32_t ResponseCode; // 0x38
    int32_t Tag; // 0x3c
    FString StringResponse; // 0x40
    TArray<uint8_t> BinaryResponse; // 0x50
    char pad_60[0x50];
    static UPlatformInterfaceWebResponse* StaticClass();
    int32_t GetNumHeaders();
    FString GetHeaderValue(FString HeaderName);
    void GetHeader(int32_t HeaderIndex, FString& Header, FString& Value);
}; // Size: 0xb0
#pragma pack(pop)
