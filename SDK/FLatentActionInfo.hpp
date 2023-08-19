#pragma once
#include <cstdint>
class UObject;
#pragma pack(push, 1)
struct FLatentActionInfo {
    int32_t Linkage; // 0x0
    int32_t UUID; // 0x4
    FName ExecutionFunction; // 0x8
    UObject* CallbackTarget; // 0x10
}; // Size: 0x18
#pragma pack(pop)
