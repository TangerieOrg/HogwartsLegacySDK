#include "AMapDungeonActor.hpp"
#include "FLinearColor.hpp"
#include "FVector.hpp"
#include "FVector4.hpp"
#include "UClass.hpp"
#include "UDungeonMapScreen.hpp"
#include "UFunction.hpp"
#include "UMapBase.hpp"
#include "UMapDungeon.hpp"
UMapDungeon* UMapDungeon::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MapDungeon");
    return (UMapDungeon*)res;
}
UDungeonMapScreen* UMapDungeon::GetMapScreenWidget() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapDungeon.GetMapScreenWidget"));
    struct Params_GetMapScreenWidget {
        UDungeonMapScreen* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetMapScreenWidget params{};
    ProcessEvent(func, &params);
    return (UDungeonMapScreen*)params.ReturnValue;
}
AMapDungeonActor* UMapDungeon::GetDungeonMapActor() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapDungeon.GetDungeonMapActor"));
    struct Params_GetDungeonMapActor {
        AMapDungeonActor* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetDungeonMapActor params{};
    ProcessEvent(func, &params);
    return (AMapDungeonActor*)params.ReturnValue;
}
void UMapDungeon::DungeonShowAll(bool Show) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapDungeon.DungeonShowAll"));
    struct Params_DungeonShowAll {
        bool Show; // 0x0
    }; // Size: 0x1
    Params_DungeonShowAll params{};
    params.Show = (bool)Show;
    ProcessEvent(func, &params);
}
