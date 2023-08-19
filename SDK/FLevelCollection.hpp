#pragma once
#include <cstdint>
class AGameStateBase;
class UNetDriver;
class UDemoNetDriver;
class ULevel;
#pragma pack(push, 1)
struct FLevelCollection {
    char pad_0[0x8];
    AGameStateBase* GameState; // 0x8
    UNetDriver* NetDriver; // 0x10
    UDemoNetDriver* DemoNetDriver; // 0x18
    ULevel* PersistentLevel; // 0x20
    char pad_28[0x50];
}; // Size: 0x78
#pragma pack(pop)
