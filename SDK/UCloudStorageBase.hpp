#pragma once
#include <cstdint>
#include "UPlatformInterfaceBase.hpp"
#pragma pack(push, 1)
class UCloudStorageBase : public UPlatformInterfaceBase {
public:
    TArray<FString> LocalCloudFiles; // 0x38
    uint8_t bSuppressDelegateCalls : 1; // 0x48
    uint8_t pad_bitfield_48_1 : 7;
    char pad_49[0x7];
    static UCloudStorageBase* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
