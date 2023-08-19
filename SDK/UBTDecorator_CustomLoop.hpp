#pragma once
#include <cstdint>
#include "UBTDecorator.hpp"
class UBTDCustomLoopCount;
#pragma pack(push, 1)
class UBTDecorator_CustomLoop : public UBTDecorator {
public:
    UBTDCustomLoopCount* LoopCount; // 0x68
    static UBTDecorator_CustomLoop* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
