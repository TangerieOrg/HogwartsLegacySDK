#pragma once
#include <cstdint>
#include "UBlueprintFunctionLibrary.hpp"
class AActor;
#pragma pack(push, 1)
class UPhysicsSimViewBPHelper : public UBlueprintFunctionLibrary {
public:
    static UPhysicsSimViewBPHelper* StaticClass();
    static void SetActorId(AActor* Actor, FString ActorId);
    static void DisableAutoSaveGame();
}; // Size: 0x28
#pragma pack(pop)
