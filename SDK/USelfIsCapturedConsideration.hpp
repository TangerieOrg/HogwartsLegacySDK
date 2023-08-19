#pragma once
#include <cstdint>
#include "UQualifierConsideration.hpp"
#pragma pack(push, 1)
class USelfIsCapturedConsideration : public UQualifierConsideration {
public:
    static USelfIsCapturedConsideration* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
