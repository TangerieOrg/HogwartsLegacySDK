#pragma once
#include <cstdint>
#include "EAnimNotifyEventType\Type.hpp"
#pragma pack(push, 1)
struct FBranchingPointMarker {
    int32_t NotifyIndex; // 0x0
    float TriggerTime; // 0x4
    EAnimNotifyEventType::Type NotifyEventType; // 0x8
    char pad_9[0x3];
}; // Size: 0xc
#pragma pack(pop)
