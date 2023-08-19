#pragma once
#include <cstdint>
#include "UQualifierConsideration.hpp"
#pragma pack(push, 1)
class USelfIsInConflictConsideration : public UQualifierConsideration {
public:
    static USelfIsInConflictConsideration* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
