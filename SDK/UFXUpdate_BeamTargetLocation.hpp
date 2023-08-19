#pragma once
#include <cstdint>
#include "UFXUpdate_BeamTargetAttach.hpp"
#pragma pack(push, 1)
class UFXUpdate_BeamTargetLocation : public UFXUpdate_BeamTargetAttach {
public:
    FName PropertyName; // 0x90
    static UFXUpdate_BeamTargetLocation* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
