#pragma once
#include <cstdint>
#include "FBlackboardKeySelector.hpp"
#include "UBTDCustomLoopCount.hpp"
#pragma pack(push, 1)
class UBTDCustomLoopCount_BlackboardInt : public UBTDCustomLoopCount {
public:
    FBlackboardKeySelector BlackboardKey; // 0x28
    static UBTDCustomLoopCount_BlackboardInt* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
