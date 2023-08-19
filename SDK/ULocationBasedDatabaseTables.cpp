#include "AAmbientCreatureSpawnVolume.hpp"
#include "ADynamicObjectVolume.hpp"
#include "AFastTravelLocation.hpp"
#include "AMountZoneVolumeBase.hpp"
#include "FEventLocationResult.hpp"
#include "FGameplayTagContainer.hpp"
#include "FTransform.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "ULocationBasedDatabaseTables.hpp"
#include "UObject.hpp"
void ULocationBasedDatabaseTables::RecordKnowledgeInvestigatableDatabaseLocation(FString Name, FVector Position, float ZRot) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LocationBasedDatabaseTables.RecordKnowledgeInvestigatableDatabaseLocation"));
    struct Params_RecordKnowledgeInvestigatableDatabaseLocation {
        FString Name; // 0x0
        FVector Position; // 0x10
        float ZRot; // 0x1c
    }; // Size: 0x20
    Params_RecordKnowledgeInvestigatableDatabaseLocation params{};
    params.Name = (FString)Name;
    params.Position = (FVector)Position;
    params.ZRot = (float)ZRot;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ULocationBasedDatabaseTables::RecordWorldEventLocationMeta(FString Name, float StreamInRadius, float StreamOutRadius) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LocationBasedDatabaseTables.RecordWorldEventLocationMeta"));
    struct Params_RecordWorldEventLocationMeta {
        FString Name; // 0x0
        float StreamInRadius; // 0x10
        float StreamOutRadius; // 0x14
    }; // Size: 0x18
    Params_RecordWorldEventLocationMeta params{};
    params.Name = (FString)Name;
    params.StreamInRadius = (float)StreamInRadius;
    params.StreamOutRadius = (float)StreamOutRadius;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ULocationBasedDatabaseTables::RecordEnemyDenLocationsDatabaseLocation(FString Name, FVector Position, float ZRot) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LocationBasedDatabaseTables.RecordEnemyDenLocationsDatabaseLocation"));
    struct Params_RecordEnemyDenLocationsDatabaseLocation {
        FString Name; // 0x0
        FVector Position; // 0x10
        float ZRot; // 0x1c
    }; // Size: 0x20
    Params_RecordEnemyDenLocationsDatabaseLocation params{};
    params.Name = (FString)Name;
    params.Position = (FVector)Position;
    params.ZRot = (float)ZRot;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
ULocationBasedDatabaseTables* ULocationBasedDatabaseTables::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.LocationBasedDatabaseTables");
    return (ULocationBasedDatabaseTables*)res;
}
void ULocationBasedDatabaseTables::RecordWorldEventDatabaseLocation(FString Name, FString Guid, FVector Position, float ZRot) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LocationBasedDatabaseTables.RecordWorldEventDatabaseLocation"));
    struct Params_RecordWorldEventDatabaseLocation {
        FString Name; // 0x0
        FString Guid; // 0x10
        FVector Position; // 0x20
        float ZRot; // 0x2c
    }; // Size: 0x30
    Params_RecordWorldEventDatabaseLocation params{};
    params.Name = (FString)Name;
    params.Guid = (FString)Guid;
    params.Position = (FVector)Position;
    params.ZRot = (float)ZRot;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ULocationBasedDatabaseTables::RecordWorldEventDatabaseDescriptors(FString Name, FGameplayTagContainer& locationDescriptors, TArray<void*> Conditions) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LocationBasedDatabaseTables.RecordWorldEventDatabaseDescriptors"));
    struct Params_RecordWorldEventDatabaseDescriptors {
        FString Name; // 0x0
        FGameplayTagContainer locationDescriptors; // 0x10
        TArray<void*> Conditions; // 0x30
    }; // Size: 0x40
    Params_RecordWorldEventDatabaseDescriptors params{};
    params.Name = (FString)Name;
    params.locationDescriptors = (FGameplayTagContainer)locationDescriptors;
    params.Conditions = (TArray<void*>)Conditions;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    locationDescriptors = params.locationDescriptors;
}
void ULocationBasedDatabaseTables::RecordVaultDatabaseLocation(FString Name, FVector Position, float ZRot) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LocationBasedDatabaseTables.RecordVaultDatabaseLocation"));
    struct Params_RecordVaultDatabaseLocation {
        FString Name; // 0x0
        FVector Position; // 0x10
        float ZRot; // 0x1c
    }; // Size: 0x20
    Params_RecordVaultDatabaseLocation params{};
    params.Name = (FString)Name;
    params.Position = (FVector)Position;
    params.ZRot = (float)ZRot;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ULocationBasedDatabaseTables::RecordRuinDatabaseLocation(FString Name, FVector Position, float ZRot) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LocationBasedDatabaseTables.RecordRuinDatabaseLocation"));
    struct Params_RecordRuinDatabaseLocation {
        FString Name; // 0x0
        FVector Position; // 0x10
        float ZRot; // 0x1c
    }; // Size: 0x20
    Params_RecordRuinDatabaseLocation params{};
    params.Name = (FString)Name;
    params.Position = (FVector)Position;
    params.ZRot = (float)ZRot;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ULocationBasedDatabaseTables::RecordSphinxPuzzleDatabaseLocation(FString Name, FVector Position, float ZRot) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LocationBasedDatabaseTables.RecordSphinxPuzzleDatabaseLocation"));
    struct Params_RecordSphinxPuzzleDatabaseLocation {
        FString Name; // 0x0
        FVector Position; // 0x10
        float ZRot; // 0x1c
    }; // Size: 0x20
    Params_RecordSphinxPuzzleDatabaseLocation params{};
    params.Name = (FString)Name;
    params.Position = (FVector)Position;
    params.ZRot = (float)ZRot;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ULocationBasedDatabaseTables::RecordDevMiscDatabaseLocation(FString Name, FVector Position, float ZRot) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LocationBasedDatabaseTables.RecordDevMiscDatabaseLocation"));
    struct Params_RecordDevMiscDatabaseLocation {
        FString Name; // 0x0
        FVector Position; // 0x10
        float ZRot; // 0x1c
    }; // Size: 0x20
    Params_RecordDevMiscDatabaseLocation params{};
    params.Name = (FString)Name;
    params.Position = (FVector)Position;
    params.ZRot = (float)ZRot;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ULocationBasedDatabaseTables::RecordTentDatabaseLocation(FString Name, FVector Position, float ZRot) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LocationBasedDatabaseTables.RecordTentDatabaseLocation"));
    struct Params_RecordTentDatabaseLocation {
        FString Name; // 0x0
        FVector Position; // 0x10
        float ZRot; // 0x1c
    }; // Size: 0x20
    Params_RecordTentDatabaseLocation params{};
    params.Name = (FString)Name;
    params.Position = (FVector)Position;
    params.ZRot = (float)ZRot;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ULocationBasedDatabaseTables::RecordObjectAndOwner(FString Name, FString Owner) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LocationBasedDatabaseTables.RecordObjectAndOwner"));
    struct Params_RecordObjectAndOwner {
        FString Name; // 0x0
        FString Owner; // 0x10
    }; // Size: 0x20
    Params_RecordObjectAndOwner params{};
    params.Name = (FString)Name;
    params.Owner = (FString)Owner;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ULocationBasedDatabaseTables::RecordMountZoneLocation(AMountZoneVolumeBase* InVolume) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LocationBasedDatabaseTables.RecordMountZoneLocation"));
    struct Params_RecordMountZoneLocation {
        AMountZoneVolumeBase* InVolume; // 0x0
    }; // Size: 0x8
    Params_RecordMountZoneLocation params{};
    params.InVolume = (AMountZoneVolumeBase*)InVolume;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ULocationBasedDatabaseTables::RecordClusterDatabaseLocation(FString Name, FVector Position, float ZRot) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LocationBasedDatabaseTables.RecordClusterDatabaseLocation"));
    struct Params_RecordClusterDatabaseLocation {
        FString Name; // 0x0
        FVector Position; // 0x10
        float ZRot; // 0x1c
    }; // Size: 0x20
    Params_RecordClusterDatabaseLocation params{};
    params.Name = (FString)Name;
    params.Position = (FVector)Position;
    params.ZRot = (float)ZRot;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ULocationBasedDatabaseTables::RecordMiscDatabaseLocation(FString Name, FVector Position, float ZRot) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LocationBasedDatabaseTables.RecordMiscDatabaseLocation"));
    struct Params_RecordMiscDatabaseLocation {
        FString Name; // 0x0
        FVector Position; // 0x10
        float ZRot; // 0x1c
    }; // Size: 0x20
    Params_RecordMiscDatabaseLocation params{};
    params.Name = (FString)Name;
    params.Position = (FVector)Position;
    params.ZRot = (float)ZRot;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ULocationBasedDatabaseTables::RecordKnowledgeLocationDatabaseLocation(FString Name, FVector Position, float ZRot) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LocationBasedDatabaseTables.RecordKnowledgeLocationDatabaseLocation"));
    struct Params_RecordKnowledgeLocationDatabaseLocation {
        FString Name; // 0x0
        FVector Position; // 0x10
        float ZRot; // 0x1c
    }; // Size: 0x20
    Params_RecordKnowledgeLocationDatabaseLocation params{};
    params.Name = (FString)Name;
    params.Position = (FVector)Position;
    params.ZRot = (float)ZRot;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ULocationBasedDatabaseTables::RecordHamletDatabaseLocation(FString Name, FVector Position, float ZRot) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LocationBasedDatabaseTables.RecordHamletDatabaseLocation"));
    struct Params_RecordHamletDatabaseLocation {
        FString Name; // 0x0
        FVector Position; // 0x10
        float ZRot; // 0x1c
    }; // Size: 0x20
    Params_RecordHamletDatabaseLocation params{};
    params.Name = (FString)Name;
    params.Position = (FVector)Position;
    params.ZRot = (float)ZRot;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ULocationBasedDatabaseTables::RecordFastTravelDatabaseLocation(FString Name, FVector Position, FVector BeaconPosition, float ZRot, AFastTravelLocation* locationActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LocationBasedDatabaseTables.RecordFastTravelDatabaseLocation"));
    struct Params_RecordFastTravelDatabaseLocation {
        FString Name; // 0x0
        FVector Position; // 0x10
        FVector BeaconPosition; // 0x1c
        float ZRot; // 0x28
        char pad_2c[0x4];
        AFastTravelLocation* locationActor; // 0x30
    }; // Size: 0x38
    Params_RecordFastTravelDatabaseLocation params{};
    params.Name = (FString)Name;
    params.Position = (FVector)Position;
    params.BeaconPosition = (FVector)BeaconPosition;
    params.ZRot = (float)ZRot;
    params.locationActor = (AFastTravelLocation*)locationActor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ULocationBasedDatabaseTables::RecordDungeonChestDatabaseOwner(FString Name, FString Owner) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LocationBasedDatabaseTables.RecordDungeonChestDatabaseOwner"));
    struct Params_RecordDungeonChestDatabaseOwner {
        FString Name; // 0x0
        FString Owner; // 0x10
    }; // Size: 0x20
    Params_RecordDungeonChestDatabaseOwner params{};
    params.Name = (FString)Name;
    params.Owner = (FString)Owner;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ULocationBasedDatabaseTables::RecordDungeonChestDatabaseLocation(FString Name, FVector Position, float ZRot) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LocationBasedDatabaseTables.RecordDungeonChestDatabaseLocation"));
    struct Params_RecordDungeonChestDatabaseLocation {
        FString Name; // 0x0
        FVector Position; // 0x10
        float ZRot; // 0x1c
    }; // Size: 0x20
    Params_RecordDungeonChestDatabaseLocation params{};
    params.Name = (FString)Name;
    params.Position = (FVector)Position;
    params.ZRot = (float)ZRot;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ULocationBasedDatabaseTables::RecordDevBanditCampDatabaseLocation(FString Name, FVector Position, float ZRot) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LocationBasedDatabaseTables.RecordDevBanditCampDatabaseLocation"));
    struct Params_RecordDevBanditCampDatabaseLocation {
        FString Name; // 0x0
        FVector Position; // 0x10
        float ZRot; // 0x1c
    }; // Size: 0x20
    Params_RecordDevBanditCampDatabaseLocation params{};
    params.Name = (FString)Name;
    params.Position = (FVector)Position;
    params.ZRot = (float)ZRot;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ULocationBasedDatabaseTables::RecordChestDatabaseOwner(FString Name, FString Owner) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LocationBasedDatabaseTables.RecordChestDatabaseOwner"));
    struct Params_RecordChestDatabaseOwner {
        FString Name; // 0x0
        FString Owner; // 0x10
    }; // Size: 0x20
    Params_RecordChestDatabaseOwner params{};
    params.Name = (FString)Name;
    params.Owner = (FString)Owner;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ULocationBasedDatabaseTables::RecordCharacterSpawnLocation(ADynamicObjectVolume* InVolume) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LocationBasedDatabaseTables.RecordCharacterSpawnLocation"));
    struct Params_RecordCharacterSpawnLocation {
        ADynamicObjectVolume* InVolume; // 0x0
    }; // Size: 0x8
    Params_RecordCharacterSpawnLocation params{};
    params.InVolume = (ADynamicObjectVolume*)InVolume;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ULocationBasedDatabaseTables::RecordBroomTestPaths() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LocationBasedDatabaseTables.RecordBroomTestPaths"));
    struct Params_RecordBroomTestPaths {
    }; // Size: 0x0
    Params_RecordBroomTestPaths params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ULocationBasedDatabaseTables::RecordBroomRacePath(FString RaceName, FString PathName, int32_t PathIndex, TArray<FVector>& PathPoints) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LocationBasedDatabaseTables.RecordBroomRacePath"));
    struct Params_RecordBroomRacePath {
        FString RaceName; // 0x0
        FString PathName; // 0x10
        int32_t PathIndex; // 0x20
        char pad_24[0x4];
        TArray<FVector> PathPoints; // 0x28
    }; // Size: 0x38
    Params_RecordBroomRacePath params{};
    params.RaceName = (FString)RaceName;
    params.PathName = (FString)PathName;
    params.PathIndex = (int32_t)PathIndex;
    params.PathPoints = (TArray<FVector>)PathPoints;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    PathPoints = params.PathPoints;
}
void ULocationBasedDatabaseTables::RecordBroomRaceGates(FString RaceName, TArray<FTransform>& RaceGateTransforms, TArray<FString>& GateTypes) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LocationBasedDatabaseTables.RecordBroomRaceGates"));
    struct Params_RecordBroomRaceGates {
        FString RaceName; // 0x0
        TArray<FTransform> RaceGateTransforms; // 0x10
        TArray<FString> GateTypes; // 0x20
    }; // Size: 0x30
    Params_RecordBroomRaceGates params{};
    params.RaceName = (FString)RaceName;
    params.RaceGateTransforms = (TArray<FTransform>)RaceGateTransforms;
    params.GateTypes = (TArray<FString>)GateTypes;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    RaceGateTransforms = params.RaceGateTransforms;
    GateTypes = params.GateTypes;
}
void ULocationBasedDatabaseTables::RecordBeastDenDatabaseLocation(FString Name, FVector Position, float ZRot) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LocationBasedDatabaseTables.RecordBeastDenDatabaseLocation"));
    struct Params_RecordBeastDenDatabaseLocation {
        FString Name; // 0x0
        FVector Position; // 0x10
        float ZRot; // 0x1c
    }; // Size: 0x20
    Params_RecordBeastDenDatabaseLocation params{};
    params.Name = (FString)Name;
    params.Position = (FVector)Position;
    params.ZRot = (float)ZRot;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ULocationBasedDatabaseTables::RecordBanditCampDatabaseLocation(FString Name, FVector Position, float ZRot) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LocationBasedDatabaseTables.RecordBanditCampDatabaseLocation"));
    struct Params_RecordBanditCampDatabaseLocation {
        FString Name; // 0x0
        FVector Position; // 0x10
        float ZRot; // 0x1c
    }; // Size: 0x20
    Params_RecordBanditCampDatabaseLocation params{};
    params.Name = (FString)Name;
    params.Position = (FVector)Position;
    params.ZRot = (float)ZRot;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ULocationBasedDatabaseTables::GetWorldEventLocations(FGameplayTagContainer& LocationRequiredDescriptors, FGameplayTagContainer& LocationDeniedDescriptors, TArray<FEventLocationResult>& OutResults) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LocationBasedDatabaseTables.GetWorldEventLocations"));
    struct Params_GetWorldEventLocations {
        FGameplayTagContainer LocationRequiredDescriptors; // 0x0
        FGameplayTagContainer LocationDeniedDescriptors; // 0x20
        TArray<FEventLocationResult> OutResults; // 0x40
    }; // Size: 0x50
    Params_GetWorldEventLocations params{};
    params.LocationRequiredDescriptors = (FGameplayTagContainer)LocationRequiredDescriptors;
    params.LocationDeniedDescriptors = (FGameplayTagContainer)LocationDeniedDescriptors;
    params.OutResults = (TArray<FEventLocationResult>)OutResults;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    LocationRequiredDescriptors = params.LocationRequiredDescriptors;
    LocationDeniedDescriptors = params.LocationDeniedDescriptors;
    OutResults = params.OutResults;
}
void ULocationBasedDatabaseTables::RecordAncientMagicDatabaseLocation(FString Name, FVector Position, float ZRot) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LocationBasedDatabaseTables.RecordAncientMagicDatabaseLocation"));
    struct Params_RecordAncientMagicDatabaseLocation {
        FString Name; // 0x0
        FVector Position; // 0x10
        float ZRot; // 0x1c
    }; // Size: 0x20
    Params_RecordAncientMagicDatabaseLocation params{};
    params.Name = (FString)Name;
    params.Position = (FVector)Position;
    params.ZRot = (float)ZRot;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void ULocationBasedDatabaseTables::RecordAmbientCreatureSpawnLocation(AAmbientCreatureSpawnVolume* InVolume) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.LocationBasedDatabaseTables.RecordAmbientCreatureSpawnLocation"));
    struct Params_RecordAmbientCreatureSpawnLocation {
        AAmbientCreatureSpawnVolume* InVolume; // 0x0
    }; // Size: 0x8
    Params_RecordAmbientCreatureSpawnLocation params{};
    params.InVolume = (AAmbientCreatureSpawnVolume*)InVolume;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
