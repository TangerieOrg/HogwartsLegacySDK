#pragma once
#include <cstdint>
#include "EPathExistanceQueryType\Type.hpp"
#include "FBlackboardKeySelector.hpp"
#include "UBTDecorator.hpp"
class UClass;
#pragma pack(push, 1)
class UBTDecorator_DoesPathExist : public UBTDecorator {
public:
    FBlackboardKeySelector BlackboardKeyA; // 0x68
    FBlackboardKeySelector BlackboardKeyB; // 0x90
    uint8_t bUseSelf : 1; // 0xb8
    uint8_t pad_bitfield_b8_1 : 7;
    char pad_b9[0x3];
    EPathExistanceQueryType::Type PathQueryType; // 0xbc
    char pad_bd[0x3];
    UClass* FilterClass; // 0xc0
    static UBTDecorator_DoesPathExist* StaticClass();
}; // Size: 0xc8
#pragma pack(pop)
