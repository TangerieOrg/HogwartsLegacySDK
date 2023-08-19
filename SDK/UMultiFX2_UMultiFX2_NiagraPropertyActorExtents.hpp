#pragma once
#include <cstdint>
#include "ENiagraPropertyTarget.hpp"
#include "UMultiFX2_NiagraPropertyBase.hpp"
#pragma pack(push, 1)
class UMultiFX2_UMultiFX2_NiagraPropertyActorExtents : public UMultiFX2_NiagraPropertyBase {
public:
    ENiagraPropertyTarget TargetType; // 0x30
    bool FullExtent; // 0x31
    char pad_32[0x6];
    static UMultiFX2_UMultiFX2_NiagraPropertyActorExtents* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
