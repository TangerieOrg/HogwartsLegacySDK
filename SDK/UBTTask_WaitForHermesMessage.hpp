#pragma once
#include <cstdint>
#include "UBTTaskNode.hpp"
#pragma pack(push, 1)
class UBTTask_WaitForHermesMessage : public UBTTaskNode {
public:
    FName MessageName; // 0x70
    char pad_78[0x10];
    static UBTTask_WaitForHermesMessage* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
