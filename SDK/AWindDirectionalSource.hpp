#pragma once
#include <cstdint>
#include "AInfo.hpp"
class UWindDirectionalSourceComponent;
#pragma pack(push, 1)
class AWindDirectionalSource : public AInfo {
public:
    UWindDirectionalSourceComponent* Component; // 0x248
    static AWindDirectionalSource* StaticClass();
}; // Size: 0x250
#pragma pack(pop)
