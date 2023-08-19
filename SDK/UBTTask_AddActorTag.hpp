#pragma once
#include <cstdint>
#include "UBTTaskNode.hpp"
#pragma pack(push, 1)
class UBTTask_AddActorTag : public UBTTaskNode {
public:
    FName TagName; // 0x70
    bool bAddUnique; // 0x78
    char pad_79[0x7];
    static UBTTask_AddActorTag* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
