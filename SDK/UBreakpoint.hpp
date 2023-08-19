#pragma once
#include <cstdint>
#include "UObject.hpp"
class UEdGraphNode;
#pragma pack(push, 1)
class UBreakpoint : public UObject {
public:
    uint8_t bEnabled : 1; // 0x28
    uint8_t pad_bitfield_28_1 : 7;
    char pad_29[0x7];
    UEdGraphNode* Node; // 0x30
    uint8_t bStepOnce : 1; // 0x38
    uint8_t bStepOnce_WasPreviouslyDisabled : 1; // 0x38
    uint8_t bStepOnce_RemoveAfterHit : 1; // 0x38
    uint8_t pad_bitfield_38_3 : 5;
    char pad_39[0x7];
    static UBreakpoint* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
