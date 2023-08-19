#pragma once
#include <cstdint>
#include "EGenderPronoun.hpp"
#include "UBoolProvider.hpp"
#pragma pack(push, 1)
class UBool_PlayerGenderPronoun : public UBoolProvider {
public:
    EGenderPronoun Pronoun; // 0x28
    char pad_29[0x7];
    static UBool_PlayerGenderPronoun* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
