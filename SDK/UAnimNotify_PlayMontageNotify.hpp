#pragma once
#include <cstdint>
#include "UAnimNotify.hpp"
#pragma pack(push, 1)
class UAnimNotify_PlayMontageNotify : public UAnimNotify {
public:
    FName NotifyName; // 0x38
    static UAnimNotify_PlayMontageNotify* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
