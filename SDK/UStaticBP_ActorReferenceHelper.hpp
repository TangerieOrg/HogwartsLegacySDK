#pragma once
#include <cstdint>
#include "FWorldActorReference.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class UObject;
class AActor;
#pragma pack(push, 1)
class UStaticBP_ActorReferenceHelper : public UBlueprintFunctionLibrary {
public:
    static UStaticBP_ActorReferenceHelper* StaticClass();
    static bool GetActorFromReference(UObject* WorldContext, FWorldActorReference ActorReference, AActor*& Actor);
}; // Size: 0x28
#pragma pack(pop)
