#pragma once
#include <cstdint>
#include "FActorByStat.hpp"
#include "FStatList.hpp"
#include "UActorProvider.hpp"
#pragma pack(push, 1)
class UActor_ByStat : public UActorProvider {
public:
    char pad_38[0x8];
    FStatList Stat; // 0x40
    TArray<FActorByStat> Actors; // 0x48
    static UActor_ByStat* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
