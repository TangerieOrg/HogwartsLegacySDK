#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UDialogueLineRule : public UObject {
public:
    bool Enabled; // 0x28
    bool CreateGroup; // 0x29
    char pad_2a[0x2];
    FName GroupName; // 0x2c
    char pad_34[0x4];
    static UDialogueLineRule* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
