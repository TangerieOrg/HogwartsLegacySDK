#pragma once
#include <cstdint>
#include "UObject.hpp"
class UUDSManager;
#pragma pack(push, 1)
class UUDSMechanicManager : public UObject {
public:
    char pad_28[0x90];
    UUDSManager* UDSManager; // 0xb8
    char pad_c0[0x240];
    static UUDSMechanicManager* StaticClass();
}; // Size: 0x300
#pragma pack(pop)
