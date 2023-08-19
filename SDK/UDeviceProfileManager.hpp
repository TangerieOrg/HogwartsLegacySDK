#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UDeviceProfileManager : public UObject {
public:
    char pad_28[0x38];
    TArray<UObject*> Profiles; // 0x60
    char pad_70[0xd0];
    static UDeviceProfileManager* StaticClass();
}; // Size: 0x140
#pragma pack(pop)
