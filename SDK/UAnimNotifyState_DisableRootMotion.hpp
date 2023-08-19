#pragma once
#include <cstdint>
#include "UAnimNotifyState.hpp"
#pragma pack(push, 1)
class UAnimNotifyState_DisableRootMotion : public UAnimNotifyState {
public:
    static UAnimNotifyState_DisableRootMotion* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
