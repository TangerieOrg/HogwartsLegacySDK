#pragma once
#include <cstdint>
#include "UBoolProvider.hpp"
class UActorProvider;
#pragma pack(push, 1)
class UBool_IsMaleCharacter : public UBoolProvider {
public:
    UActorProvider* Actor; // 0x28
    static UBool_IsMaleCharacter* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
