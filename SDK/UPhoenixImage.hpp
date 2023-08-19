#pragma once
#include <cstdint>
#include "FDataTableRowHandle.hpp"
#include "UImage.hpp"
#pragma pack(push, 1)
class UPhoenixImage : public UImage {
public:
    FDataTableRowHandle ColorTag; // 0x210
    char pad_220[0x8];
    static UPhoenixImage* StaticClass();
    void SetColorTag(FDataTableRowHandle NewColorTag);
}; // Size: 0x228
#pragma pack(pop)
