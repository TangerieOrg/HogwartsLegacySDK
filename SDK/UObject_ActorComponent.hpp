#pragma once
#include <cstdint>
#include "UObjectProvider.hpp"
class UActorProvider;
class UClass;
#pragma pack(push, 1)
class UObject_ActorComponent : public UObjectProvider {
public:
    UActorProvider* ActorProvider; // 0x28
    UClass* ComponentType; // 0x30
    static UObject_ActorComponent* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
