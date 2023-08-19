#pragma once
#include <cstdint>
#include "UNavArea.hpp"
#pragma pack(push, 1)
class UNavAreaMeta : public UNavArea {
public:
    static UNavAreaMeta* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
