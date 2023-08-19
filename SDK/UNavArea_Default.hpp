#pragma once
#include <cstdint>
#include "UNavArea.hpp"
#pragma pack(push, 1)
class UNavArea_Default : public UNavArea {
public:
    static UNavArea_Default* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
