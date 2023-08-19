#pragma once
#include <cstdint>
#include "UMultiFX2_Filtered.hpp"
class UMultiFX2_Base;
#pragma pack(push, 1)
class UMultiFX2_PlayOne : public UMultiFX2_Filtered {
public:
    TArray<UMultiFX2_Base*> PlayOneFXBaseArray; // 0x68
    static UMultiFX2_PlayOne* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
