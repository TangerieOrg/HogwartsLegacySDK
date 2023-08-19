#pragma once
#include <cstdint>
#include "FDbSingleColumnInfo.hpp"
#include "UChildActorComponent.hpp"
#pragma pack(push, 1)
class UConjuredActorComponent : public UChildActorComponent {
public:
    FDbSingleColumnInfo ObjectCategory; // 0x250
    FDbSingleColumnInfo ObjectID; // 0x2d8
    FDbSingleColumnInfo ColorOverride; // 0x360
    char pad_3e8[0x8];
    static UConjuredActorComponent* StaticClass();
}; // Size: 0x3f0
#pragma pack(pop)
