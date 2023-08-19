#pragma once
#include <cstdint>
#include "AInfo.hpp"
class UWindModulateComponent;
#pragma pack(push, 1)
class AWindModulate : public AInfo {
public:
    UWindModulateComponent* Component; // 0x248
    static AWindModulate* StaticClass();
}; // Size: 0x250
#pragma pack(pop)
