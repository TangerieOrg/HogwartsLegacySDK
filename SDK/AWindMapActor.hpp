#pragma once
#include <cstdint>
#include "AInfo.hpp"
class UWindMapComponent;
#pragma pack(push, 1)
class AWindMapActor : public AInfo {
public:
    UWindMapComponent* Component; // 0x248
    static AWindMapActor* StaticClass();
}; // Size: 0x250
#pragma pack(pop)
