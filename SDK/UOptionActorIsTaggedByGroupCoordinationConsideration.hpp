#pragma once
#include <cstdint>
#include "UQualifierConsideration.hpp"
#pragma pack(push, 1)
class UOptionActorIsTaggedByGroupCoordinationConsideration : public UQualifierConsideration {
public:
    FName TagID; // 0x28
    static UOptionActorIsTaggedByGroupCoordinationConsideration* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
