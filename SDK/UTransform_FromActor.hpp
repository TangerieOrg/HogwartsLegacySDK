#pragma once
#include <cstdint>
#include "EComponentToUse.hpp"
#include "UTransformProvider.hpp"
class UActorProvider;
#pragma pack(push, 1)
class UTransform_FromActor : public UTransformProvider {
public:
    UActorProvider* Actor; // 0x28
    EComponentToUse ComponentToUse; // 0x30
    char pad_31[0x3];
    FName SocketName; // 0x34
    char pad_3c[0x4];
    UTransformProvider* FallbackTransform; // 0x40
    static UTransform_FromActor* StaticClass();
    void SetupFallback();
}; // Size: 0x48
#pragma pack(pop)
