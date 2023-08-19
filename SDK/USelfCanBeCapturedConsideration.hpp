#pragma once
#include <cstdint>
#include "UQualifierConsideration.hpp"
#pragma pack(push, 1)
class USelfCanBeCapturedConsideration : public UQualifierConsideration {
public:
    static USelfCanBeCapturedConsideration* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
