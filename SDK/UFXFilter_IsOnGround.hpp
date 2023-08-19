#pragma once
#include <cstdint>
#include "UFXFilter.hpp"
#pragma pack(push, 1)
class UFXFilter_IsOnGround : public UFXFilter {
public:
    static UFXFilter_IsOnGround* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
