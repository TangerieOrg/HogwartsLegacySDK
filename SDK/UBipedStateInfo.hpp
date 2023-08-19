#pragma once
#include <cstdint>
#include "UCharacterStateInfo.hpp"
#pragma pack(push, 1)
class UBipedStateInfo : public UCharacterStateInfo {
public:
    static UBipedStateInfo* StaticClass();
}; // Size: 0xf90
#pragma pack(pop)
