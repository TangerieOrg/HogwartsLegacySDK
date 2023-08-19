#pragma once
#include <cstdint>
#include "UQualifierConsideration.hpp"
#pragma pack(push, 1)
class UOptionActorIsDatabaseNameConsideration : public UQualifierConsideration {
public:
    FName DatabaseName; // 0x28
    static UOptionActorIsDatabaseNameConsideration* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
