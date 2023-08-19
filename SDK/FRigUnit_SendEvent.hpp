#pragma once
#include <cstdint>
#include "ERigEvent.hpp"
#include "FRigElementKey.hpp"
#include "FRigUnitMutable.hpp"
#pragma pack(push, 1)
struct FRigUnit_SendEvent : public FRigUnitMutable {
    ERigEvent Event; // 0x68
    char pad_69[0x3];
    FRigElementKey Item; // 0x6c
    float OffsetInSeconds; // 0x78
    bool bEnable; // 0x7c
    bool bOnlyDuringInteraction; // 0x7d
    char pad_7e[0x2];
}; // Size: 0x80
#pragma pack(pop)
