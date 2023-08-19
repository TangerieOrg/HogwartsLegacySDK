#pragma once
#include <cstdint>
#include "UBTNode.hpp"
#pragma pack(push, 1)
class UBTAuxiliaryNode : public UBTNode {
public:
    char pad_58[0x8];
    static UBTAuxiliaryNode* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
