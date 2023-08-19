#pragma once
#include <cstdint>
#include "UBlackboardKeyType.hpp"
class UClass;
#pragma pack(push, 1)
class UBlackboardKeyType_Object : public UBlackboardKeyType {
public:
    UClass* BaseClass; // 0x30
    static UBlackboardKeyType_Object* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
