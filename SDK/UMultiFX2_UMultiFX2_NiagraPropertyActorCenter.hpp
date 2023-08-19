#pragma once
#include <cstdint>
#include "ENiagraPropertyTarget.hpp"
#include "UMultiFX2_NiagraPropertyBase.hpp"
#pragma pack(push, 1)
class UMultiFX2_UMultiFX2_NiagraPropertyActorCenter : public UMultiFX2_NiagraPropertyBase {
public:
    ENiagraPropertyTarget TargetType; // 0x30
    char pad_31[0x7];
    static UMultiFX2_UMultiFX2_NiagraPropertyActorCenter* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
