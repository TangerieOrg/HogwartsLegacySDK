#pragma once
#include <cstdint>
#include "UTransformProvider.hpp"
class UActorProvider;
#pragma pack(push, 1)
class UTransform_FromAttachParentActor : public UTransformProvider {
public:
    UActorProvider* Actor; // 0x28
    FName SocketName; // 0x30
    static UTransform_FromAttachParentActor* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
