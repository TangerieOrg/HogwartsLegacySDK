#pragma once
#include <cstdint>
#include "UBlackboardKeyType.hpp"
class UClass;
#pragma pack(push, 1)
class UBlackboardKeyType_Class : public UBlackboardKeyType {
public:
    UClass* BaseClass; // 0x30
    static UBlackboardKeyType_Class* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
