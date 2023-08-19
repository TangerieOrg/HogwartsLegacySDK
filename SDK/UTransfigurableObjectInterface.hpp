#pragma once
#include <cstdint>
#include "FTransfigurationResource.hpp"
#include "UInterface.hpp"
struct FVector;
#pragma pack(push, 1)
class UTransfigurableObjectInterface : public UInterface {
public:
    static UTransfigurableObjectInterface* StaticClass();
    void ReactivateObject();
    void ObjectVanished();
    void ObjectTransformationStarted();
    void ObjectTransformationConfirmed();
    void ObjectTransformationCancelled();
    void ObjectStreamedSpawnInConfirmed();
    void ObjectPhysicalResponseImpact(float ImpactIntensity, FName SpellName, FName ResponseConfigName, FVector& ImpactLocation);
    void ObjectConjured();
    bool IsObjectContextValidForVanishment();
    bool IsObjectContextValidForTransformation();
    TArray<FTransfigurationResource> GetAdditionalItemsReturned();
    void FinalizeInitialAnimationState();
    void DeactivateObject();
}; // Size: 0x28
#pragma pack(pop)
