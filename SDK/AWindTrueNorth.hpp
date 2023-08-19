#pragma once
#include <cstdint>
#include "AInfo.hpp"
class UWindTrueNorthComponent;
#pragma pack(push, 1)
class AWindTrueNorth : public AInfo {
public:
    UWindTrueNorthComponent* Component; // 0x248
    static AWindTrueNorth* StaticClass();
}; // Size: 0x250
#pragma pack(pop)
