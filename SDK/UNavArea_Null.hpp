#pragma once
#include <cstdint>
#include "UNavArea.hpp"
#pragma pack(push, 1)
class UNavArea_Null : public UNavArea {
public:
    static UNavArea_Null* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
