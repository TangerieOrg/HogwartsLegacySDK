#pragma once
#include <cstdint>
#include "UTransformProvider.hpp"
class UActorProvider;
#pragma pack(push, 1)
class UTransform_CharacterVerticalOffset : public UTransformProvider {
public:
    UActorProvider* OffsetForCharacter; // 0x28
    FName SocketName; // 0x30
    static UTransform_CharacterVerticalOffset* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
