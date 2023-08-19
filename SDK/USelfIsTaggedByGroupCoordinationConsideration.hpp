#pragma once
#include <cstdint>
#include "UQualifierConsideration.hpp"
#pragma pack(push, 1)
class USelfIsTaggedByGroupCoordinationConsideration : public UQualifierConsideration {
public:
    FName TagID; // 0x28
    static USelfIsTaggedByGroupCoordinationConsideration* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
