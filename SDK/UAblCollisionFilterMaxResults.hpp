#pragma once
#include <cstdint>
#include "UAblCollisionFilter.hpp"
#pragma pack(push, 1)
class UAblCollisionFilterMaxResults : public UAblCollisionFilter {
public:
    int32_t m_MaxEntities; // 0x28
    char pad_2c[0x4];
    static UAblCollisionFilterMaxResults* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
