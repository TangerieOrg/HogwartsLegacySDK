#pragma once
#include <cstdint>
#include "UFXUpdate.hpp"
#pragma pack(push, 1)
class UFXUpdate_AddFXTag : public UFXUpdate {
public:
    FName Tag; // 0x28
    static UFXUpdate_AddFXTag* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
