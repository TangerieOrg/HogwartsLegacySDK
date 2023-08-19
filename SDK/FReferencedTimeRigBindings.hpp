#pragma once
#include <cstdint>
class UTimeRig;
#pragma pack(push, 1)
struct FReferencedTimeRigBindings {
    UTimeRig* ReferencedTimeRig; // 0x0
    char pad_8[0x50];
}; // Size: 0x58
#pragma pack(pop)
