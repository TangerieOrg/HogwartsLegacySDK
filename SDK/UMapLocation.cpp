#include "AMapLocationActor.hpp"
#include "FMarkupData.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UMapLocation.hpp"
#include "UMapMarkupComponent.hpp"
#include "UObject.hpp"
UMapLocation* UMapLocation::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MapLocation");
    return (UMapLocation*)res;
}
UMapLocation* UMapLocation::GetLocationByName(FString LocationName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapLocation.GetLocationByName"));
    struct Params_GetLocationByName {
        FString LocationName; // 0x0
        UMapLocation* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_GetLocationByName params{};
    params.LocationName = (FString)LocationName;
    ProcessEvent(func, &params);
    return (UMapLocation*)params.ReturnValue;
}
bool UMapLocation::IsRoot() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapLocation.IsRoot"));
    struct Params_IsRoot {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsRoot params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMapLocation::SetParent(UMapLocation* ParentIn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapLocation.SetParent"));
    struct Params_SetParent {
        UMapLocation* ParentIn; // 0x0
    }; // Size: 0x8
    Params_SetParent params{};
    params.ParentIn = (UMapLocation*)ParentIn;
    ProcessEvent(func, &params);
}
FRotator UMapLocation::GetRotation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapLocation.GetRotation"));
    struct Params_GetRotation {
        FRotator ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetRotation params{};
    ProcessEvent(func, &params);
    return (FRotator)params.ReturnValue;
}
void UMapLocation::SetIsPrimary(bool IsPrimaryIn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapLocation.SetIsPrimary"));
    struct Params_SetIsPrimary {
        bool IsPrimaryIn; // 0x0
    }; // Size: 0x1
    Params_SetIsPrimary params{};
    params.IsPrimaryIn = (bool)IsPrimaryIn;
    ProcessEvent(func, &params);
}
UMapLocation* UMapLocation::RemoveLocation(UMapLocation* LocationIn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapLocation.RemoveLocation"));
    struct Params_RemoveLocation {
        UMapLocation* LocationIn; // 0x0
        UMapLocation* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_RemoveLocation params{};
    params.LocationIn = (UMapLocation*)LocationIn;
    ProcessEvent(func, &params);
    return (UMapLocation*)params.ReturnValue;
}
bool UMapLocation::IsPrimary() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapLocation.IsPrimary"));
    struct Params_IsPrimary {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsPrimary params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMapLocation::ContainsLocation(FString LocationIdIn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapLocation.ContainsLocation"));
    struct Params_ContainsLocation {
        FString LocationIdIn; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_ContainsLocation params{};
    params.LocationIdIn = (FString)LocationIdIn;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
float UMapLocation::GetVolume() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapLocation.GetVolume"));
    struct Params_GetVolume {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetVolume params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
UMapLocation* UMapLocation::GetPrimaryInTree() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapLocation.GetPrimaryInTree"));
    struct Params_GetPrimaryInTree {
        UMapLocation* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetPrimaryInTree params{};
    ProcessEvent(func, &params);
    return (UMapLocation*)params.ReturnValue;
}
FVector UMapLocation::GetExtent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapLocation.GetExtent"));
    struct Params_GetExtent {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetExtent params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
UMapLocation* UMapLocation::GetParent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapLocation.GetParent"));
    struct Params_GetParent {
        UMapLocation* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetParent params{};
    ProcessEvent(func, &params);
    return (UMapLocation*)params.ReturnValue;
}
UMapMarkupComponent* UMapLocation::GetMapMarkupComponent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapLocation.GetMapMarkupComponent"));
    struct Params_GetMapMarkupComponent {
        UMapMarkupComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetMapMarkupComponent params{};
    ProcessEvent(func, &params);
    return (UMapMarkupComponent*)params.ReturnValue;
}
FString UMapLocation::GetLocationId() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapLocation.GetLocationId"));
    struct Params_GetLocationId {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetLocationId params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
bool UMapLocation::ContainsPoint(FVector Point) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapLocation.ContainsPoint"));
    struct Params_ContainsPoint {
        FVector Point; // 0x0
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_ContainsPoint params{};
    params.Point = (FVector)Point;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
AMapLocationActor* UMapLocation::GetLocationActor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapLocation.GetLocationActor"));
    struct Params_GetLocationActor {
        AMapLocationActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetLocationActor params{};
    ProcessEvent(func, &params);
    return (AMapLocationActor*)params.ReturnValue;
}
FVector UMapLocation::GetLocation() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapLocation.GetLocation"));
    struct Params_GetLocation {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetLocation params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
TArray<UMapLocation*> UMapLocation::GetChildren() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapLocation.GetChildren"));
    struct Params_GetChildren {
        TArray<UMapLocation*> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetChildren params{};
    ProcessEvent(func, &params);
    return (TArray<UMapLocation*>)params.ReturnValue;
}
FVector UMapLocation::GetCenter() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapLocation.GetCenter"));
    struct Params_GetCenter {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetCenter params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
int32_t UMapLocation::Depth() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapLocation.Depth"));
    struct Params_Depth {
        int32_t ReturnValue; // 0x0
    }; // Size: 0x4
    Params_Depth params{};
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
UMapLocation* UMapLocation::CreateLocationUsingComponent(FString RegionIn, AMapLocationActor* LocationActorIn, FMarkupData MarkupDataIn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapLocation.CreateLocationUsingComponent"));
    struct Params_CreateLocationUsingComponent {
        FString RegionIn; // 0x0
        AMapLocationActor* LocationActorIn; // 0x10
        FMarkupData MarkupDataIn; // 0x18
        UMapLocation* ReturnValue; // 0x20
    }; // Size: 0x28
    Params_CreateLocationUsingComponent params{};
    params.RegionIn = (FString)RegionIn;
    params.LocationActorIn = (AMapLocationActor*)LocationActorIn;
    params.MarkupDataIn = (FMarkupData)MarkupDataIn;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UMapLocation*)params.ReturnValue;
}
UMapLocation* UMapLocation::CreateLocation(FString RegionIn, FString LocationIdIn, FVector LocationIn, FVector ExtentIn, FRotator RotationIn, FMarkupData MarkupDataIn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapLocation.CreateLocation"));
    struct Params_CreateLocation {
        FString RegionIn; // 0x0
        FString LocationIdIn; // 0x10
        FVector LocationIn; // 0x20
        FVector ExtentIn; // 0x2c
        FRotator RotationIn; // 0x38
        FMarkupData MarkupDataIn; // 0x44
        char pad_4c[0x4];
        UMapLocation* ReturnValue; // 0x50
    }; // Size: 0x58
    Params_CreateLocation params{};
    params.RegionIn = (FString)RegionIn;
    params.LocationIdIn = (FString)LocationIdIn;
    params.LocationIn = (FVector)LocationIn;
    params.ExtentIn = (FVector)ExtentIn;
    params.RotationIn = (FRotator)RotationIn;
    params.MarkupDataIn = (FMarkupData)MarkupDataIn;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UMapLocation*)params.ReturnValue;
}
bool UMapLocation::AddLocation(UMapLocation* MapLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapLocation.AddLocation"));
    struct Params_AddLocation {
        UMapLocation* MapLocation; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_AddLocation params{};
    params.MapLocation = (UMapLocation*)MapLocation;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
