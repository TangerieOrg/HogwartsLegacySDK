#pragma once
#include <cstdint>
#include "UInteractiveToolPropertySet.hpp"
#pragma pack(push, 1)
class UDynamicSculptToolActions : public UInteractiveToolPropertySet {
public:
    char pad_60[0x8];
    static UDynamicSculptToolActions* StaticClass();
    void DiscardAttributes();
}; // Size: 0x68
#pragma pack(pop)
