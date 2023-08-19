#pragma once
#include <cstdint>
#include "UObject.hpp"
class UNetDriver;
class UDemoNetDriver;
#pragma pack(push, 1)
class UPendingNetGame : public UObject {
public:
    char pad_28[0x8];
    UNetDriver* NetDriver; // 0x30
    UDemoNetDriver* DemoNetDriver; // 0x38
    char pad_40[0x80];
    static UPendingNetGame* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
