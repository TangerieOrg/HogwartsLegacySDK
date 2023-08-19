#pragma once
#include <cstdint>
#include "UBTService.hpp"
#pragma pack(push, 1)
class UBTService_ScopedTag : public UBTService {
public:
    FName TagName; // 0x70
    bool bAddUnique; // 0x78
    bool bRemoveAll; // 0x79
    char pad_7a[0x6];
    static UBTService_ScopedTag* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
