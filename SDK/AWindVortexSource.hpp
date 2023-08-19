#pragma once
#include <cstdint>
#include "AInfo.hpp"
class UWindSourceVortexComponent;
#pragma pack(push, 1)
class AWindVortexSource : public AInfo {
public:
    UWindSourceVortexComponent* Component; // 0x248
    static AWindVortexSource* StaticClass();
}; // Size: 0x250
#pragma pack(pop)
