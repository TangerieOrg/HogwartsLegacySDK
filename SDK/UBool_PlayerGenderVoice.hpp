#pragma once
#include <cstdint>
#include "EGenderVoice.hpp"
#include "UBoolProvider.hpp"
#pragma pack(push, 1)
class UBool_PlayerGenderVoice : public UBoolProvider {
public:
    EGenderVoice Voice; // 0x28
    char pad_29[0x7];
    static UBool_PlayerGenderVoice* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
