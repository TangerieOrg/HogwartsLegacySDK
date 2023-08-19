#pragma once
#include <cstdint>
#include "FDbSingleColumnInfo.hpp"
#include "UActorProvider.hpp"
#pragma pack(push, 1)
class UActor_NamedCreature : public UActorProvider {
public:
    char pad_38[0x8];
    FDbSingleColumnInfo DBInfo; // 0x40
    bool bUseExistingDOV; // 0xc8
    char pad_c9[0x3];
    FName DOVName; // 0xcc
    char pad_d4[0x24];
    static UActor_NamedCreature* StaticClass();
}; // Size: 0xf8
#pragma pack(pop)
