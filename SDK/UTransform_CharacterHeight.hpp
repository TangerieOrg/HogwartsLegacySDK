#pragma once
#include <cstdint>
#include "UTransformProvider.hpp"
class UActorProvider;
#pragma pack(push, 1)
class UTransform_CharacterHeight : public UTransformProvider {
public:
    UActorProvider* Actor; // 0x28
    FName BoneName; // 0x30
    static UTransform_CharacterHeight* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
