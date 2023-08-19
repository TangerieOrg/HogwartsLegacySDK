#pragma once
#include <cstdint>
#include "AInfo.hpp"
class UWindAlignComponent;
#pragma pack(push, 1)
class AWindAlign : public AInfo {
public:
    UWindAlignComponent* Component; // 0x248
    static AWindAlign* StaticClass();
}; // Size: 0x250
#pragma pack(pop)
