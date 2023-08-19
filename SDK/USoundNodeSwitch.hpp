#pragma once
#include <cstdint>
#include "USoundNode.hpp"
#pragma pack(push, 1)
class USoundNodeSwitch : public USoundNode {
public:
    FName IntParameterName; // 0x48
    static USoundNodeSwitch* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
