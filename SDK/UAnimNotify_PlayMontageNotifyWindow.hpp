#pragma once
#include <cstdint>
#include "UAnimNotifyState.hpp"
#pragma pack(push, 1)
class UAnimNotify_PlayMontageNotifyWindow : public UAnimNotifyState {
public:
    FName NotifyName; // 0x30
    static UAnimNotify_PlayMontageNotifyWindow* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
