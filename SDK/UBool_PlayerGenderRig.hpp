#pragma once
#include <cstdint>
#include "EGenderEnum.hpp"
#include "UBoolProvider.hpp"
#pragma pack(push, 1)
class UBool_PlayerGenderRig : public UBoolProvider {
public:
    EGenderEnum Rig; // 0x28
    char pad_29[0x7];
    static UBool_PlayerGenderRig* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
