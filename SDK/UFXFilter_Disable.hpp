#pragma once
#include <cstdint>
#include "UFXFilter.hpp"
#pragma pack(push, 1)
class UFXFilter_Disable : public UFXFilter {
public:
    static UFXFilter_Disable* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
