#pragma once
#include <cstdint>
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UHoleFillToolActions : public UInteractiveToolPropertySet {
public:
    char pad_60[0x8];
    static UHoleFillToolActions* StaticClass();
    void SelectAll();
    void Clear();
}; // Size: 0x68
#pragma pack(pop)
