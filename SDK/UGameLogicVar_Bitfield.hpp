#pragma once
#include <cstdint>
#include "FBitfield256.hpp"
#include "UGameLogicBase.hpp"
#pragma pack(push, 1)
class UGameLogicVar_Bitfield : public UGameLogicBase {
public:
    char pad_28[0x30];
    static UGameLogicVar_Bitfield* StaticClass();
    void SetCachedValue(FBitfield256 Value);
    FBitfield256 GetCachedValue();
}; // Size: 0x58
#pragma pack(pop)
