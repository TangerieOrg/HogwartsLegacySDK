#pragma once
#include <cstdint>
#include "UTransformProvider.hpp"
class UActorProvider;
#pragma pack(push, 1)
class UTransform_FromBlackboardActor : public UTransformProvider {
public:
    UActorProvider* Actor; // 0x28
    FName BlackboardKeyName; // 0x30
    FName SocketName; // 0x38
    static UTransform_FromBlackboardActor* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
