#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FDbSingleColumnInfo.hpp"
#pragma pack(push, 1)
class ASanctuaryExpansionAnimationActor : public AActor {
public:
    FDbSingleColumnInfo ExpansionID; // 0x248
    static ASanctuaryExpansionAnimationActor* StaticClass();
}; // Size: 0x2d0
#pragma pack(pop)
