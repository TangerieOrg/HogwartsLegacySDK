#pragma once
#include <cstdint>
#include "UBlackboardKeyType.hpp"
#pragma pack(push, 1)
class UBlackboardKeyType_String : public UBlackboardKeyType {
public:
    FString StringValue; // 0x30
    static UBlackboardKeyType_String* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
