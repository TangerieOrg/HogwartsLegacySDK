#pragma once
#include <cstdint>
#include "UTransformProvider.hpp"
#pragma pack(push, 1)
class UTransform_FallbackChain : public UTransformProvider {
public:
    TArray<UTransformProvider*> Entries; // 0x28
    static UTransform_FallbackChain* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
