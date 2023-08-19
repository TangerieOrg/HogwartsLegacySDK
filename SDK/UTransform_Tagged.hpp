#pragma once
#include <cstdint>
#include "FGameplayTag.hpp"
#include "UTransformProvider.hpp"
class UActorProvider;
#pragma pack(push, 1)
class UTransform_Tagged : public UTransformProvider {
public:
    UActorProvider* Actor; // 0x28
    FGameplayTag Tag; // 0x30
    static UTransform_Tagged* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
