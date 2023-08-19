#pragma once
#include <cstdint>
#include "UFXFilter.hpp"
#pragma pack(push, 1)
class UFXFilter_IsValidDbId : public UFXFilter {
public:
    TArray<FName> ValidDbIds; // 0x30
    static UFXFilter_IsValidDbId* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
