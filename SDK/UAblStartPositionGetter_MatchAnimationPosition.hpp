#pragma once
#include <cstdint>
#include "UAblStartPositionGetter.hpp"
class UMatchAnimationPositionCharacterGetter;
#pragma pack(push, 1)
class UAblStartPositionGetter_MatchAnimationPosition : public UAblStartPositionGetter {
public:
    UMatchAnimationPositionCharacterGetter* SourceCharacterGetter; // 0x28
    static UAblStartPositionGetter_MatchAnimationPosition* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
