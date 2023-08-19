#pragma once
#include <cstdint>
#include "UCogGroupDebug.hpp"
#pragma pack(push, 1)
class UCogGroupDebug_Phoenix : public UCogGroupDebug {
public:
    char pad_48[0x10];
    static UCogGroupDebug_Phoenix* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
