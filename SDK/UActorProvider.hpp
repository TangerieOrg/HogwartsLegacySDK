#pragma once
#include <cstdint>
#include "UObjectProvider.hpp"
class UActorSpawner;
class UObject;
class AActor;
#pragma pack(push, 1)
class UActorProvider : public UObjectProvider {
public:
    UActorSpawner* PreviewSpawner; // 0x28
    char pad_30[0x8];
    static UActorProvider* StaticClass();
    AActor* GetActor(UObject* Caller);
}; // Size: 0x38
#pragma pack(pop)
