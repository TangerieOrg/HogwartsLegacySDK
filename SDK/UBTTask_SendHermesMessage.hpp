#pragma once
#include <cstdint>
#include "UBTTaskNode.hpp"
#pragma pack(push, 1)
class UBTTask_SendHermesMessage : public UBTTaskNode {
public:
    FName MessageName; // 0x70
    static UBTTask_SendHermesMessage* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
