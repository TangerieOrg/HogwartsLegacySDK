#pragma once
#include <cstdint>
#include "UAnimNotify.hpp"
#pragma pack(push, 1)
class UAnimNotify_SharedAkEvent : public UAnimNotify {
public:
    bool bFollow; // 0x38
    char pad_39[0x3];
    FName SocketName; // 0x3c
    char pad_44[0x54];
    static UAnimNotify_SharedAkEvent* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
