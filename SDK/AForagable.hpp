#pragma once
#include <cstdint>
#include "AWorldObject.hpp"
#include "EForageableState.hpp"
#pragma pack(push, 1)
class AForagable : public AWorldObject {
public:
    char pad_2b0[0x10];
    static AForagable* StaticClass();
    bool ResetState(EForageableState NextState);
    FName GetItemID();
    int32_t GetItemCount();
}; // Size: 0x2c0
#pragma pack(pop)
