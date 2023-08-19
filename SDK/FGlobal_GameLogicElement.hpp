#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FGlobal_GameLogicElement {
    char pad_0[0x8];
    FName ElementName; // 0x8
    FName RealmName; // 0x10
    bool bGenerateEvent; // 0x18
    bool bDebugValueChange; // 0x19
    char pad_1a[0x6];
}; // Size: 0x20
#pragma pack(pop)
