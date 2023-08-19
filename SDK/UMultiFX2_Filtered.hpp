#pragma once
#include <cstdint>
#include "UMultiFX2_Base.hpp"
class UFXFilter;
class UFXAdjustments;
class UFXUpdate;
class UFXEnd;
#pragma pack(push, 1)
class UMultiFX2_Filtered : public UMultiFX2_Base {
public:
    TArray<UFXFilter*> Filters; // 0x28
    TArray<UFXAdjustments*> Adjustments; // 0x38
    TArray<UFXUpdate*> Updates; // 0x48
    TArray<UFXEnd*> Ends; // 0x58
    static UMultiFX2_Filtered* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
