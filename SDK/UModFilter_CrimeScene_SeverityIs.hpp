#pragma once
#include <cstdint>
#include "EValueComparison.hpp"
#include "UModFilter_CrimeScene_Base.hpp"
#pragma pack(push, 1)
class UModFilter_CrimeScene_SeverityIs : public UModFilter_CrimeScene_Base {
public:
    EValueComparison Comparision; // 0x30
    char pad_31[0x7];
    static UModFilter_CrimeScene_SeverityIs* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
