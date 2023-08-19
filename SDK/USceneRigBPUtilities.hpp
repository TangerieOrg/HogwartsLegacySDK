#pragma once
#include <cstdint>
#include "UBlueprintFunctionLibrary.hpp"
class AActor;
#pragma pack(push, 1)
class USceneRigBPUtilities : public UBlueprintFunctionLibrary {
public:
    static USceneRigBPUtilities* StaticClass();
    static void AddRegisteredActor(AActor* Actor, FName RegisteredActorName);
}; // Size: 0x28
#pragma pack(pop)
