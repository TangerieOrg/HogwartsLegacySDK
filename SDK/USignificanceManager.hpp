#pragma once
#include <cstdint>
#include "FSoftClassPath.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class USignificanceManager : public UObject {
public:
    char pad_28[0xe0];
    FSoftClassPath SignificanceManagerClassName; // 0x108
    static USignificanceManager* StaticClass();
}; // Size: 0x120
#pragma pack(pop)
