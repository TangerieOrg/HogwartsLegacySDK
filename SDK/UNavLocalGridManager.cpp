#include "FRotator.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UNavLocalGridManager.hpp"
#include "UObject.hpp"
int32_t UNavLocalGridManager::AddLocalNavigationGridForCapsule(UObject* WorldContextObject, FVector& Location, float CapsuleRadius, float CapsuleHalfHeight, int32_t Radius2D, float Height, bool bRebuildGrids) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.NavLocalGridManager.AddLocalNavigationGridForCapsule"));
    struct Params_AddLocalNavigationGridForCapsule {
        UObject* WorldContextObject; // 0x0
        FVector Location; // 0x8
        float CapsuleRadius; // 0x14
        float CapsuleHalfHeight; // 0x18
        int32_t Radius2D; // 0x1c
        float Height; // 0x20
        bool bRebuildGrids; // 0x24
        char pad_25[0x3];
        int32_t ReturnValue; // 0x28
    }; // Size: 0x2c
    Params_AddLocalNavigationGridForCapsule params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Location = (FVector)Location;
    params.CapsuleRadius = (float)CapsuleRadius;
    params.CapsuleHalfHeight = (float)CapsuleHalfHeight;
    params.Radius2D = (int32_t)Radius2D;
    params.Height = (float)Height;
    params.bRebuildGrids = (bool)bRebuildGrids;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Location = params.Location;
    return (int32_t)params.ReturnValue;
}
bool UNavLocalGridManager::SetLocalNavigationGridDensity(UObject* WorldContextObject, float CellSize) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.NavLocalGridManager.SetLocalNavigationGridDensity"));
    struct Params_SetLocalNavigationGridDensity {
        UObject* WorldContextObject; // 0x0
        float CellSize; // 0x8
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_SetLocalNavigationGridDensity params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.CellSize = (float)CellSize;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UNavLocalGridManager* UNavLocalGridManager::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.NavLocalGridManager");
    return (UNavLocalGridManager*)res;
}
int32_t UNavLocalGridManager::AddLocalNavigationGridForBox(UObject* WorldContextObject, FVector& Location, FVector Extent, FRotator Rotation, int32_t Radius2D, float Height, bool bRebuildGrids) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.NavLocalGridManager.AddLocalNavigationGridForBox"));
    struct Params_AddLocalNavigationGridForBox {
        UObject* WorldContextObject; // 0x0
        FVector Location; // 0x8
        FVector Extent; // 0x14
        FRotator Rotation; // 0x20
        int32_t Radius2D; // 0x2c
        float Height; // 0x30
        bool bRebuildGrids; // 0x34
        char pad_35[0x3];
        int32_t ReturnValue; // 0x38
    }; // Size: 0x3c
    Params_AddLocalNavigationGridForBox params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Location = (FVector)Location;
    params.Extent = (FVector)Extent;
    params.Rotation = (FRotator)Rotation;
    params.Radius2D = (int32_t)Radius2D;
    params.Height = (float)Height;
    params.bRebuildGrids = (bool)bRebuildGrids;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Location = params.Location;
    return (int32_t)params.ReturnValue;
}
bool UNavLocalGridManager::FindLocalNavigationGridPath(UObject* WorldContextObject, FVector& Start, FVector& End, TArray<FVector>& PathPoints) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.NavLocalGridManager.FindLocalNavigationGridPath"));
    struct Params_FindLocalNavigationGridPath {
        UObject* WorldContextObject; // 0x0
        FVector Start; // 0x8
        FVector End; // 0x14
        TArray<FVector> PathPoints; // 0x20
        bool ReturnValue; // 0x30
    }; // Size: 0x31
    Params_FindLocalNavigationGridPath params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Start = (FVector)Start;
    params.End = (FVector)End;
    params.PathPoints = (TArray<FVector>)PathPoints;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Start = params.Start;
    End = params.End;
    PathPoints = params.PathPoints;
    return (bool)params.ReturnValue;
}
void UNavLocalGridManager::RemoveLocalNavigationGrid(UObject* WorldContextObject, int32_t GridId, bool bRebuildGrids) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.NavLocalGridManager.RemoveLocalNavigationGrid"));
    struct Params_RemoveLocalNavigationGrid {
        UObject* WorldContextObject; // 0x0
        int32_t GridId; // 0x8
        bool bRebuildGrids; // 0xc
    }; // Size: 0xd
    Params_RemoveLocalNavigationGrid params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.GridId = (int32_t)GridId;
    params.bRebuildGrids = (bool)bRebuildGrids;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
int32_t UNavLocalGridManager::AddLocalNavigationGridForPoints(UObject* WorldContextObject, TArray<FVector>& Locations, int32_t Radius2D, float Height, bool bRebuildGrids) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.NavLocalGridManager.AddLocalNavigationGridForPoints"));
    struct Params_AddLocalNavigationGridForPoints {
        UObject* WorldContextObject; // 0x0
        TArray<FVector> Locations; // 0x8
        int32_t Radius2D; // 0x18
        float Height; // 0x1c
        bool bRebuildGrids; // 0x20
        char pad_21[0x3];
        int32_t ReturnValue; // 0x24
    }; // Size: 0x28
    Params_AddLocalNavigationGridForPoints params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Locations = (TArray<FVector>)Locations;
    params.Radius2D = (int32_t)Radius2D;
    params.Height = (float)Height;
    params.bRebuildGrids = (bool)bRebuildGrids;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Locations = params.Locations;
    return (int32_t)params.ReturnValue;
}
int32_t UNavLocalGridManager::AddLocalNavigationGridForPoint(UObject* WorldContextObject, FVector& Location, int32_t Radius2D, float Height, bool bRebuildGrids) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AIModule.NavLocalGridManager.AddLocalNavigationGridForPoint"));
    struct Params_AddLocalNavigationGridForPoint {
        UObject* WorldContextObject; // 0x0
        FVector Location; // 0x8
        int32_t Radius2D; // 0x14
        float Height; // 0x18
        bool bRebuildGrids; // 0x1c
        char pad_1d[0x3];
        int32_t ReturnValue; // 0x20
    }; // Size: 0x24
    Params_AddLocalNavigationGridForPoint params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Location = (FVector)Location;
    params.Radius2D = (int32_t)Radius2D;
    params.Height = (float)Height;
    params.bRebuildGrids = (bool)bRebuildGrids;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Location = params.Location;
    return (int32_t)params.ReturnValue;
}
