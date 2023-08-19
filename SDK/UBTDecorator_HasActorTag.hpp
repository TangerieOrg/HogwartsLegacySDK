#pragma once
#include <cstdint>
#include "UBTDecorator.hpp"
#pragma pack(push, 1)
class UBTDecorator_HasActorTag : public UBTDecorator {
public:
    FName TagName; // 0x68
    static UBTDecorator_HasActorTag* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
