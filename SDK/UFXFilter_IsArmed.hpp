#pragma once
#include <cstdint>
#include "UFXFilter.hpp"
#pragma pack(push, 1)
class UFXFilter_IsArmed : public UFXFilter {
public:
    static UFXFilter_IsArmed* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
