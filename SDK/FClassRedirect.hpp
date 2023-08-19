#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FClassRedirect {
    FName ObjectName; // 0x0
    FName OldClassName; // 0x8
    FName NewClassName; // 0x10
    FName OldSubobjName; // 0x18
    FName NewSubobjName; // 0x20
    FName NewClassClass; // 0x28
    FName NewClassPackage; // 0x30
    bool InstanceOnly; // 0x38
    char pad_39[0x3];
}; // Size: 0x3c
#pragma pack(pop)
