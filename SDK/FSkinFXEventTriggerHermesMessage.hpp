#pragma once
#include <cstdint>
#include "ESkinFXDelegateEvent.hpp"
class USkinFXComponent;
#pragma pack(push, 1)
struct FSkinFXEventTriggerHermesMessage {
    USkinFXComponent* SkinFXComponent; // 0x0
    FName SkinFXEffectName; // 0x8
    ESkinFXDelegateEvent SkinFXEvent; // 0x10
    char pad_11[0x7];
}; // Size: 0x18
#pragma pack(pop)
