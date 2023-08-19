#pragma once
#include <cstdint>
#include "UQualifierConsideration.hpp"
#pragma pack(push, 1)
class USelfActorIsDatabaseNameConsideration : public UQualifierConsideration {
public:
    FName DatabaseName; // 0x28
    static USelfActorIsDatabaseNameConsideration* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
