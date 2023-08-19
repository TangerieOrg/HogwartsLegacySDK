#pragma once
#include <cstdint>
#include "UTextureLODSettings.hpp"
class UObject;
#pragma pack(push, 1)
class UDeviceProfile : public UTextureLODSettings {
public:
    FString DeviceType; // 0x48
    FString BaseProfileName; // 0x58
    UObject* Parent; // 0x68
    char pad_70[0x28];
    TArray<FString> CVars; // 0x98
    char pad_a8[0x10];
    static UDeviceProfile* StaticClass();
}; // Size: 0xb8
#pragma pack(pop)
