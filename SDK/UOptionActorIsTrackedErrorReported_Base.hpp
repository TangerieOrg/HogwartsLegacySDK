#pragma once
#include <cstdint>
#include "UQualifierConsideration.hpp"
#pragma pack(push, 1)
class UOptionActorIsTrackedErrorReported_Base : public UQualifierConsideration {
public:
    bool bUnreported; // 0x28
    char pad_29[0x7];
    static UOptionActorIsTrackedErrorReported_Base* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
