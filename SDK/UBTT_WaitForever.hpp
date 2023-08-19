#pragma once
#include <cstdint>
#include "UBTTaskNode.hpp"
#pragma pack(push, 1)
class UBTT_WaitForever : public UBTTaskNode {
public:
    static UBTT_WaitForever* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
