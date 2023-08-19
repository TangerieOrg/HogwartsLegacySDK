#pragma once
#include <cstdint>
#include "UObject.hpp"
class UUDSManager;
#pragma pack(push, 1)
class UUDSLocationManager : public UObject {
public:
    char pad_28[0x20];
    UUDSManager* UDSManager; // 0x48
    char pad_50[0x70];
    static UUDSLocationManager* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
