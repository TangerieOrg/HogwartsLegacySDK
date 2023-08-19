#pragma once
#include <cstdint>
#include "FBlackboardKeySelector.hpp"
#include "UBTService.hpp"
#pragma pack(push, 1)
class UBTService_BlackboardBase : public UBTService {
public:
    FBlackboardKeySelector BlackboardKey; // 0x70
    static UBTService_BlackboardBase* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
