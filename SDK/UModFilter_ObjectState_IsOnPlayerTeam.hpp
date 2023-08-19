#pragma once
#include <cstdint>
#include "UModFilter_ObjectState_Base.hpp"
#pragma pack(push, 1)
class UModFilter_ObjectState_IsOnPlayerTeam : public UModFilter_ObjectState_Base {
public:
    static UModFilter_ObjectState_IsOnPlayerTeam* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
