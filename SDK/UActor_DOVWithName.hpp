#pragma once
#include <cstdint>
#include "UActorProvider.hpp"
#pragma pack(push, 1)
class UActor_DOVWithName : public UActorProvider {
public:
    FName DOVActorName; // 0x38
    static UActor_DOVWithName* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
