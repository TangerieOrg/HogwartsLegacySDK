#pragma once
#include <cstdint>
#include "AInfo.hpp"
class UWindPointSourceComponent;
#pragma pack(push, 1)
class AWindPointSource : public AInfo {
public:
    UWindPointSourceComponent* Component; // 0x248
    static AWindPointSource* StaticClass();
}; // Size: 0x250
#pragma pack(pop)
