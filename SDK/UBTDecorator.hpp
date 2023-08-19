#pragma once
#include <cstdint>
#include "EBTFlowAbortMode\Type.hpp"
#include "UBTAuxiliaryNode.hpp"
#pragma pack(push, 1)
class UBTDecorator : public UBTAuxiliaryNode {
public:
    uint8_t pad_bitfield_60_0 : 7;
    uint8_t bInverseCondition : 1; // 0x60
    char pad_61[0x3];
    EBTFlowAbortMode::Type FlowAbortMode; // 0x64
    char pad_65[0x3];
    static UBTDecorator* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
