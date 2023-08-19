#pragma once
#include <cstdint>
#include "UBTTaskNode.hpp"
#pragma pack(push, 1)
class UBTT_Enemy_FleeApparate : public UBTTaskNode {
public:
    char pad_70[0x28];
    static UBTT_Enemy_FleeApparate* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
