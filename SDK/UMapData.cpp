#include "FVector.hpp"
#include "UFunction.hpp"
#include "UMapData.hpp"
#include "UMapLocation.hpp"
#include "UObject.hpp"
UMapData* UMapData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MapData");
    return (UMapData*)res;
}
UMapData* UMapData::CreateMapData() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapData.CreateMapData"));
    struct Params_CreateMapData {
        UMapData* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_CreateMapData params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UMapData*)params.ReturnValue;
}
UMapLocation* UMapData::FindLocationThatContainsPoint(FVector Point, UMapLocation* StartLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapData.FindLocationThatContainsPoint"));
    struct Params_FindLocationThatContainsPoint {
        FVector Point; // 0x0
        char pad_c[0x4];
        UMapLocation* StartLocation; // 0x10
        UMapLocation* ReturnValue; // 0x18
    }; // Size: 0x20
    Params_FindLocationThatContainsPoint params{};
    params.Point = (FVector)Point;
    params.StartLocation = (UMapLocation*)StartLocation;
    ProcessEvent(func, &params);
    return (UMapLocation*)params.ReturnValue;
}
UMapLocation* UMapData::FindLocationByName(FString Name, UMapLocation* StartLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapData.FindLocationByName"));
    struct Params_FindLocationByName {
        FString Name; // 0x0
        UMapLocation* StartLocation; // 0x10
        UMapLocation* ReturnValue; // 0x18
    }; // Size: 0x20
    Params_FindLocationByName params{};
    params.Name = (FString)Name;
    params.StartLocation = (UMapLocation*)StartLocation;
    ProcessEvent(func, &params);
    return (UMapLocation*)params.ReturnValue;
}
bool UMapData::AddLocation(UMapLocation* MapLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapData.AddLocation"));
    struct Params_AddLocation {
        UMapLocation* MapLocation; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_AddLocation params{};
    params.MapLocation = (UMapLocation*)MapLocation;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
int32_t UMapData::FindDepthOfLocation(UMapLocation* LocationIn, UMapLocation* SearchRoot, int32_t CurrentDepth) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapData.FindDepthOfLocation"));
    struct Params_FindDepthOfLocation {
        UMapLocation* LocationIn; // 0x0
        UMapLocation* SearchRoot; // 0x8
        int32_t CurrentDepth; // 0x10
        int32_t ReturnValue; // 0x14
    }; // Size: 0x18
    Params_FindDepthOfLocation params{};
    params.LocationIn = (UMapLocation*)LocationIn;
    params.SearchRoot = (UMapLocation*)SearchRoot;
    params.CurrentDepth = (int32_t)CurrentDepth;
    ProcessEvent(func, &params);
    return (int32_t)params.ReturnValue;
}
bool UMapData::ContainsLocation(FString LocationName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapData.ContainsLocation"));
    struct Params_ContainsLocation {
        FString LocationName; // 0x0
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_ContainsLocation params{};
    params.LocationName = (FString)LocationName;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UMapData::AddLocationInternal(UMapLocation* MapLocation, UMapLocation* Parent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapData.AddLocationInternal"));
    struct Params_AddLocationInternal {
        UMapLocation* MapLocation; // 0x0
        UMapLocation* Parent; // 0x8
        bool ReturnValue; // 0x10
    }; // Size: 0x11
    Params_AddLocationInternal params{};
    params.MapLocation = (UMapLocation*)MapLocation;
    params.Parent = (UMapLocation*)Parent;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
