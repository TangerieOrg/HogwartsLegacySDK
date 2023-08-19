#pragma once
#include <cstdint>
#include "FBlackboardKeySelector.hpp"
#include "UBTDecorator.hpp"
#pragma pack(push, 1)
class UBTDecorator_BlackboardBase : public UBTDecorator {
public:
    FBlackboardKeySelector BlackboardKey; // 0x68
    static UBTDecorator_BlackboardBase* StaticClass();
}; // Size: 0x90
#pragma pack(pop)
