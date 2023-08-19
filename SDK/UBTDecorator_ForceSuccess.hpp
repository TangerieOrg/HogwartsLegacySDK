#pragma once
#include <cstdint>
#include "UBTDecorator.hpp"
#pragma pack(push, 1)
class UBTDecorator_ForceSuccess : public UBTDecorator {
public:
    static UBTDecorator_ForceSuccess* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
