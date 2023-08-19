#pragma once
#include <cstdint>
#include "UFXUpdate.hpp"
#pragma pack(push, 1)
class UFXUpdate_TranslucencySortPriority : public UFXUpdate {
public:
    int32_t TranslucencySortPriority; // 0x28
    char pad_2c[0x4];
    static UFXUpdate_TranslucencySortPriority* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
