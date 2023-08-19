#pragma once
#include <cstdint>
#include "UMultiFX2_BeamTargetBase.hpp"
#pragma pack(push, 1)
class UMultiFX2_BeamTargetProperty : public UMultiFX2_BeamTargetBase {
public:
    FName PropertyName; // 0x28
    static UMultiFX2_BeamTargetProperty* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
