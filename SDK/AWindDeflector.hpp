#pragma once
#include <cstdint>
#include "AInfo.hpp"
class UWindDeflectorComponent;
#pragma pack(push, 1)
class AWindDeflector : public AInfo {
public:
    UWindDeflectorComponent* Component; // 0x248
    static AWindDeflector* StaticClass();
}; // Size: 0x250
#pragma pack(pop)
