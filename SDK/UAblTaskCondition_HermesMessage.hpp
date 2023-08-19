#pragma once
#include <cstdint>
#include "UAblTaskCondition.hpp"
#pragma pack(push, 1)
class UAblTaskCondition_HermesMessage : public UAblTaskCondition {
public:
    FName HermesMessageName; // 0x28
    static UAblTaskCondition_HermesMessage* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
