#pragma once
#include <cstdint>
#include "UObject.hpp"
class UUDSManager;
#pragma pack(push, 1)
class UUDSActivityManager : public UObject {
public:
    char pad_28[0xb0];
    UUDSManager* UDSManager; // 0xd8
    char pad_e0[0x390];
    static UUDSActivityManager* StaticClass();
}; // Size: 0x470
#pragma pack(pop)
