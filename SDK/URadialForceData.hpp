#pragma once
#include <cstdint>
#include "UObject.hpp"
class AActor;
class UPrimitiveComponent;
#pragma pack(push, 1)
class URadialForceData : public UObject {
public:
    AActor* Actor; // 0x28
    UPrimitiveComponent* Component; // 0x30
    char pad_38[0x30];
    TArray<AActor*> IgnoreActors; // 0x68
    static URadialForceData* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
