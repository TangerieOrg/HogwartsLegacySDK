#pragma once
#include <cstdint>
#include "UModFilter_OnHit_Base.hpp"
#pragma pack(push, 1)
class UModFilter_OnHit_Target_IsImmobilized : public UModFilter_OnHit_Base {
public:
    static UModFilter_OnHit_Target_IsImmobilized* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
