#pragma once
#include <cstdint>
#include "FSpawnSelectInfo.hpp"
#include "UActorProvider.hpp"
#pragma pack(push, 1)
class UActor_ByCharacterID : public UActorProvider {
public:
    char pad_38[0x8];
    FSpawnSelectInfo DBInfo; // 0x40
    static UActor_ByCharacterID* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
