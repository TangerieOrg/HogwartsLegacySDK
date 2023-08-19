#pragma once
#include <cstdint>
#include "UBlueprintFunctionLibrary.hpp"
class AActor;
struct FActorLayer;
class UObject;
#pragma pack(push, 1)
class ULayersBlueprintLibrary : public UBlueprintFunctionLibrary {
public:
    static ULayersBlueprintLibrary* StaticClass();
    static void RemoveActorFromLayer(AActor* InActor, FActorLayer& Layer);
    static TArray<AActor*> GetActors(UObject* WorldContextObject, FActorLayer& ActorLayer);
    static void AddActorToLayer(AActor* InActor, FActorLayer& Layer);
}; // Size: 0x28
#pragma pack(pop)
