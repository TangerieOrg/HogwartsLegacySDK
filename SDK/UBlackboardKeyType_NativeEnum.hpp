#pragma once
#include <cstdint>
#include "UBlackboardKeyType.hpp"
class UEnum;
#pragma pack(push, 1)
class UBlackboardKeyType_NativeEnum : public UBlackboardKeyType {
public:
    FString EnumName; // 0x30
    UEnum* EnumType; // 0x40
    static UBlackboardKeyType_NativeEnum* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
