#pragma once
#include <cstdint>
#include "UBTService.hpp"
#pragma pack(push, 1)
class UBTService_360Sight : public UBTService {
public:
    char pad_70[0x8];
    static UBTService_360Sight* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
