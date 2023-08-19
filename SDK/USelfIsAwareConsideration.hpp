#pragma once
#include <cstdint>
#include "UQualifierConsideration.hpp"
#pragma pack(push, 1)
class USelfIsAwareConsideration : public UQualifierConsideration {
public:
    static USelfIsAwareConsideration* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
