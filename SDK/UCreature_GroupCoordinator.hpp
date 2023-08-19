#pragma once
#include <cstdint>
#include "FCreature_GroupCoordination_LocationTag.hpp"
#include "FVector.hpp"
#include "UObject.hpp"
class AActor;
#pragma pack(push, 1)
class UCreature_GroupCoordinator : public UObject {
public:
    char pad_28[0x128];
    static UCreature_GroupCoordinator* StaticClass();
    static void SetTagLimitOnActor(AActor* Subject, FName Identifier, int32_t Limit);
    static bool RemoveTagsWithIDFromActor(AActor* Subject, FName Identifier);
    static void RemoveTagLimitOnActor(AActor* Subject, FName Identifier);
    static void RemoveAllLocationTagsWithIDAndOwner(FName Identifier, AActor* Owner);
    static void RemoveAllActorTagsWithIDAndOwner(FName Identifier, AActor* Owner);
    static bool RemoveActorTag(AActor* Subject, FName Identifier, AActor* Owner);
    static void RegisterLocationTag(FVector Location, FName Identifier, float Radius, float LifeTime, AActor* Owner);
    static bool RegisterActorTag(AActor* Subject, FName Identifier, float LifeTime, AActor* Owner);
    static int32_t GetTagLimitOnActor(AActor* Subject, FName Identifier);
    static bool GetDoesLocationTagExistIgnoreOwner(FVector Location, FName Identifier, float SearchRadius, AActor* OwnerToIgnore);
    static bool GetDoesLocationTagExistFromOwner(FVector Location, FName Identifier, float SearchRadius, AActor* Owner);
    static bool GetDoesLocationTagExist(FVector Location, FName Identifier, float SearchRadius);
    static bool GetDoesActorTagExistIgnoreOwner(AActor* Subject, FName Identifier, AActor* OwnerToIgnore);
    static bool GetDoesActorTagExistFromOwner(AActor* Subject, FName Identifier, AActor* Owner);
    static bool GetDoesActorTagExist(AActor* Subject, FName Identifier);
    static TArray<FCreature_GroupCoordination_LocationTag> GetAllOverlappingLocationTags(FVector Location, FName Identifier, float SearchRadius);
    static bool GetActorTagLifetimeLeftFromOwner(AActor* Subject, FName Identifier, AActor* Owner, float& OutTagAge);
    static bool GetActorTagAgeFromOwner(AActor* Subject, FName Identifier, AActor* Owner, float& OutTagAge);
}; // Size: 0x150
#pragma pack(pop)
