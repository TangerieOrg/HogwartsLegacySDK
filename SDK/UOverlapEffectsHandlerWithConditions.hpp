#pragma once
#include <cstdint>
#include "FOverlapEffectsHandlerConditions.hpp"
#include "UOverlapEffectsHandler.hpp"
#pragma pack(push, 1)
class UOverlapEffectsHandlerWithConditions : public UOverlapEffectsHandler {
public:
    FOverlapEffectsHandlerConditions Conditions; // 0x30
    static UOverlapEffectsHandlerWithConditions* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
