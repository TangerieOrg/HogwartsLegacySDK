#pragma once
#include <cstdint>
#include "UAnimNotifyState.hpp"
class UPoseSampler_CloseEyes;
#pragma pack(push, 1)
class UAnimNotify_CloseEyes : public UAnimNotifyState {
public:
    char pad_30[0x8];
    UPoseSampler_CloseEyes* PoseSampler; // 0x38
    static UAnimNotify_CloseEyes* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
