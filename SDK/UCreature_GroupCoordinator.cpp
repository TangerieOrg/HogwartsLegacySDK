#include "AActor.hpp"
#include "FCreature_GroupCoordination_LocationTag.hpp"
#include "FVector.hpp"
#include "UCreature_GroupCoordinator.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UCreature_GroupCoordinator* UCreature_GroupCoordinator::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Creature_GroupCoordinator");
    return (UCreature_GroupCoordinator*)res;
}
void UCreature_GroupCoordinator::RegisterLocationTag(FVector Location, FName Identifier, float Radius, float LifeTime, AActor* Owner) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_GroupCoordinator.RegisterLocationTag"));
    struct Params_RegisterLocationTag {
        FVector Location; // 0x0
        FName Identifier; // 0xc
        float Radius; // 0x14
        float LifeTime; // 0x18
        char pad_1c[0x4];
        AActor* Owner; // 0x20
    }; // Size: 0x28
    Params_RegisterLocationTag params{};
    params.Location = (FVector)Location;
    params.Identifier = (FName)Identifier;
    params.Radius = (float)Radius;
    params.LifeTime = (float)LifeTime;
    params.Owner = (AActor*)Owner;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UCreature_GroupCoordinator::SetTagLimitOnActor(AActor* Subject, FName Identifier, int32_t Limit) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_GroupCoordinator.SetTagLimitOnActor"));
    struct Params_SetTagLimitOnActor {
        AActor* Subject; // 0x0
        FName Identifier; // 0x8
        int32_t Limit; // 0x10
    }; // Size: 0x14
    Params_SetTagLimitOnActor params{};
    params.Subject = (AActor*)Subject;
    params.Identifier = (FName)Identifier;
    params.Limit = (int32_t)Limit;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UCreature_GroupCoordinator::RemoveTagsWithIDFromActor(AActor* Subject, FName Identifier) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_GroupCoordinator.RemoveTagsWithIDFromActor"));
    struct Params_RemoveTagsWithIDFromActor {
        AActor* Subject; // 0x0
        FName Identifier; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_RemoveTagsWithIDFromActor params{};
    params.Subject = (AActor*)Subject;
    params.Identifier = (FName)Identifier;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UCreature_GroupCoordinator::RemoveAllActorTagsWithIDAndOwner(FName Identifier, AActor* Owner) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_GroupCoordinator.RemoveAllActorTagsWithIDAndOwner"));
    struct Params_RemoveAllActorTagsWithIDAndOwner {
        FName Identifier; // 0x0
        AActor* Owner; // 0x8
    }; // Size: 0x10
    Params_RemoveAllActorTagsWithIDAndOwner params{};
    params.Identifier = (FName)Identifier;
    params.Owner = (AActor*)Owner;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UCreature_GroupCoordinator::RemoveActorTag(AActor* Subject, FName Identifier, AActor* Owner) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_GroupCoordinator.RemoveActorTag"));
    struct Params_RemoveActorTag {
        AActor* Subject; // 0x0
        FName Identifier; // 0x8
        AActor* Owner; // 0x10
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_RemoveActorTag params{};
    params.Subject = (AActor*)Subject;
    params.Identifier = (FName)Identifier;
    params.Owner = (AActor*)Owner;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UCreature_GroupCoordinator::RemoveTagLimitOnActor(AActor* Subject, FName Identifier) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_GroupCoordinator.RemoveTagLimitOnActor"));
    struct Params_RemoveTagLimitOnActor {
        AActor* Subject; // 0x0
        FName Identifier; // 0x8
    }; // Size: 0x10
    Params_RemoveTagLimitOnActor params{};
    params.Subject = (AActor*)Subject;
    params.Identifier = (FName)Identifier;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UCreature_GroupCoordinator::RemoveAllLocationTagsWithIDAndOwner(FName Identifier, AActor* Owner) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_GroupCoordinator.RemoveAllLocationTagsWithIDAndOwner"));
    struct Params_RemoveAllLocationTagsWithIDAndOwner {
        FName Identifier; // 0x0
        AActor* Owner; // 0x8
    }; // Size: 0x10
    Params_RemoveAllLocationTagsWithIDAndOwner params{};
    params.Identifier = (FName)Identifier;
    params.Owner = (AActor*)Owner;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UCreature_GroupCoordinator::RegisterActorTag(AActor* Subject, FName Identifier, float LifeTime, AActor* Owner) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_GroupCoordinator.RegisterActorTag"));
    struct Params_RegisterActorTag {
        AActor* Subject; // 0x0
        FName Identifier; // 0x8
        float LifeTime; // 0x10
        char pad_14[0x4];
        AActor* Owner; // 0x18
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_RegisterActorTag params{};
    params.Subject = (AActor*)Subject;
    params.Identifier = (FName)Identifier;
    params.LifeTime = (float)LifeTime;
    params.Owner = (AActor*)Owner;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
int32_t UCreature_GroupCoordinator::GetTagLimitOnActor(AActor* Subject, FName Identifier) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_GroupCoordinator.GetTagLimitOnActor"));
    struct Params_GetTagLimitOnActor {
        AActor* Subject; // 0x0
        FName Identifier; // 0x8
        int32_t ReturnValue; // 0x10
    }; // Size: 0x14
    Params_GetTagLimitOnActor params{};
    params.Subject = (AActor*)Subject;
    params.Identifier = (FName)Identifier;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
bool UCreature_GroupCoordinator::GetDoesLocationTagExistIgnoreOwner(FVector Location, FName Identifier, float SearchRadius, AActor* OwnerToIgnore) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_GroupCoordinator.GetDoesLocationTagExistIgnoreOwner"));
    struct Params_GetDoesLocationTagExistIgnoreOwner {
        FVector Location; // 0x0
        FName Identifier; // 0xc
        float SearchRadius; // 0x14
        AActor* OwnerToIgnore; // 0x18
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_GetDoesLocationTagExistIgnoreOwner params{};
    params.Location = (FVector)Location;
    params.Identifier = (FName)Identifier;
    params.SearchRadius = (float)SearchRadius;
    params.OwnerToIgnore = (AActor*)OwnerToIgnore;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UCreature_GroupCoordinator::GetDoesLocationTagExistFromOwner(FVector Location, FName Identifier, float SearchRadius, AActor* Owner) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_GroupCoordinator.GetDoesLocationTagExistFromOwner"));
    struct Params_GetDoesLocationTagExistFromOwner {
        FVector Location; // 0x0
        FName Identifier; // 0xc
        float SearchRadius; // 0x14
        AActor* Owner; // 0x18
        bool ReturnValue; // 0x20
    }; // Size: 0x21
    Params_GetDoesLocationTagExistFromOwner params{};
    params.Location = (FVector)Location;
    params.Identifier = (FName)Identifier;
    params.SearchRadius = (float)SearchRadius;
    params.Owner = (AActor*)Owner;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UCreature_GroupCoordinator::GetDoesLocationTagExist(FVector Location, FName Identifier, float SearchRadius) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_GroupCoordinator.GetDoesLocationTagExist"));
    struct Params_GetDoesLocationTagExist {
        FVector Location; // 0x0
        FName Identifier; // 0xc
        float SearchRadius; // 0x14
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_GetDoesLocationTagExist params{};
    params.Location = (FVector)Location;
    params.Identifier = (FName)Identifier;
    params.SearchRadius = (float)SearchRadius;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UCreature_GroupCoordinator::GetDoesActorTagExistIgnoreOwner(AActor* Subject, FName Identifier, AActor* OwnerToIgnore) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_GroupCoordinator.GetDoesActorTagExistIgnoreOwner"));
    struct Params_GetDoesActorTagExistIgnoreOwner {
        AActor* Subject; // 0x0
        FName Identifier; // 0x8
        AActor* OwnerToIgnore; // 0x10
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_GetDoesActorTagExistIgnoreOwner params{};
    params.Subject = (AActor*)Subject;
    params.Identifier = (FName)Identifier;
    params.OwnerToIgnore = (AActor*)OwnerToIgnore;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UCreature_GroupCoordinator::GetDoesActorTagExistFromOwner(AActor* Subject, FName Identifier, AActor* Owner) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_GroupCoordinator.GetDoesActorTagExistFromOwner"));
    struct Params_GetDoesActorTagExistFromOwner {
        AActor* Subject; // 0x0
        FName Identifier; // 0x8
        AActor* Owner; // 0x10
        bool ReturnValue; // 0x18
    }; // Size: 0x19
    Params_GetDoesActorTagExistFromOwner params{};
    params.Subject = (AActor*)Subject;
    params.Identifier = (FName)Identifier;
    params.Owner = (AActor*)Owner;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UCreature_GroupCoordinator::GetDoesActorTagExist(AActor* Subject, FName Identifier) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_GroupCoordinator.GetDoesActorTagExist"));
    struct Params_GetDoesActorTagExist {
        AActor* Subject; // 0x0
        FName Identifier; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_GetDoesActorTagExist params{};
    params.Subject = (AActor*)Subject;
    params.Identifier = (FName)Identifier;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
TArray<FCreature_GroupCoordination_LocationTag> UCreature_GroupCoordinator::GetAllOverlappingLocationTags(FVector Location, FName Identifier, float SearchRadius) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_GroupCoordinator.GetAllOverlappingLocationTags"));
    struct Params_GetAllOverlappingLocationTags {
        FVector Location; // 0x0
        FName Identifier; // 0xc
        float SearchRadius; // 0x14
        TArray<FCreature_GroupCoordination_LocationTag> ReturnValue; // 0x18
    }; // Size: 0x28
    Params_GetAllOverlappingLocationTags params{};
    params.Location = (FVector)Location;
    params.Identifier = (FName)Identifier;
    params.SearchRadius = (float)SearchRadius;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (TArray<FCreature_GroupCoordination_LocationTag>)params.ReturnValue;
}
bool UCreature_GroupCoordinator::GetActorTagLifetimeLeftFromOwner(AActor* Subject, FName Identifier, AActor* Owner, float& OutTagAge) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_GroupCoordinator.GetActorTagLifetimeLeftFromOwner"));
    struct Params_GetActorTagLifetimeLeftFromOwner {
        AActor* Subject; // 0x0
        FName Identifier; // 0x8
        AActor* Owner; // 0x10
        float OutTagAge; // 0x18
        bool ReturnValue; // 0x1c
    }; // Size: 0x1d
    Params_GetActorTagLifetimeLeftFromOwner params{};
    params.Subject = (AActor*)Subject;
    params.Identifier = (FName)Identifier;
    params.Owner = (AActor*)Owner;
    params.OutTagAge = (float)OutTagAge;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutTagAge = params.OutTagAge;
    return (bool)params.ReturnValue;
}
bool UCreature_GroupCoordinator::GetActorTagAgeFromOwner(AActor* Subject, FName Identifier, AActor* Owner, float& OutTagAge) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Creature_GroupCoordinator.GetActorTagAgeFromOwner"));
    struct Params_GetActorTagAgeFromOwner {
        AActor* Subject; // 0x0
        FName Identifier; // 0x8
        AActor* Owner; // 0x10
        float OutTagAge; // 0x18
        bool ReturnValue; // 0x1c
    }; // Size: 0x1d
    Params_GetActorTagAgeFromOwner params{};
    params.Subject = (AActor*)Subject;
    params.Identifier = (FName)Identifier;
    params.Owner = (AActor*)Owner;
    params.OutTagAge = (float)OutTagAge;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    OutTagAge = params.OutTagAge;
    return (bool)params.ReturnValue;
}
