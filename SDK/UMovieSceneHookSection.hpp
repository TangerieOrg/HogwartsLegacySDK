#pragma once
#include <cstdint>
#include "UMovieSceneSection.hpp"
#pragma pack(push, 1)
class UMovieSceneHookSection : public UMovieSceneSection {
public:
    char pad_e8[0x10];
    uint8_t bRequiresRangedHook : 1; // 0xf8
    uint8_t bRequiresTriggerHooks : 1; // 0xf8
    uint8_t pad_bitfield_f8_2 : 6;
    char pad_f9[0x7];
    static UMovieSceneHookSection* StaticClass();
}; // Size: 0x100
#pragma pack(pop)
