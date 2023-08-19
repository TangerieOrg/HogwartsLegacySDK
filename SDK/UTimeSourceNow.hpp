#pragma once
#include <cstdint>
#include "UTimeSourceLocal.hpp"
#pragma pack(push, 1)
class UTimeSourceNow : public UTimeSourceLocal {
public:
    static UTimeSourceNow* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
