#pragma once
#include <cstdint>
#include "UBTTask_Mercuna_MoveTo.hpp"
#pragma pack(push, 1)
class UBTTask_Icarus_MoveTo : public UBTTask_Mercuna_MoveTo {
public:
    bool bUsePathfinding; // 0xa8
    bool bUseDynamicAvoidance; // 0xa9
    bool bUseTurnSmoothing; // 0xaa
    char pad_ab[0x5];
    static UBTTask_Icarus_MoveTo* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
