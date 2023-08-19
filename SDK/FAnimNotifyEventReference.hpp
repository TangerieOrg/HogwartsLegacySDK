#pragma once
#include <cstdint>
class UObject;
#pragma pack(push, 1)
struct FAnimNotifyEventReference {
    char pad_0[0x8];
    UObject* NotifySource; // 0x8
}; // Size: 0x10
#pragma pack(pop)
