#pragma once
#include <cstdint>
#include "UMultiFX2_Filtered.hpp"
#pragma pack(push, 1)
class UMultiFX2_HermesEvent : public UMultiFX2_Filtered {
public:
    FString HermesMessage; // 0x68
    static UMultiFX2_HermesEvent* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
