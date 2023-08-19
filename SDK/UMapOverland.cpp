#include "AActor.hpp"
#include "APhoenixMapRegion.hpp"
#include "FLinearColor.hpp"
#include "FVector.hpp"
#include "FVector4.hpp"
#include "UFunction.hpp"
#include "UMapBase.hpp"
#include "UMapOverland.hpp"
#include "UObject.hpp"
#include "UOverlandMapScreen.hpp"
#include "URegionData.hpp"
#include "UStaticMeshComponent.hpp"
#include "UTexture2D.hpp"
#include "UTextureUtil.hpp"
UMapOverland* UMapOverland::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MapOverland");
    return (UMapOverland*)res;
}
void UMapOverland::RemoveWayMarkerBP() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapOverland.RemoveWayMarkerBP"));
    struct Params_RemoveWayMarkerBP {
    }; // Size: 0x0
    Params_RemoveWayMarkerBP params{};
    ProcessEvent(func, &params);
}
UOverlandMapScreen* UMapOverland::GetMapScreenWidget() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapOverland.GetMapScreenWidget"));
    struct Params_GetMapScreenWidget {
        UOverlandMapScreen* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetMapScreenWidget params{};
    ProcessEvent(func, &params);
    return (UOverlandMapScreen*)params.ReturnValue;
}
void UMapOverland::DoFastTravel() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapOverland.DoFastTravel"));
    struct Params_DoFastTravel {
    }; // Size: 0x0
    Params_DoFastTravel params{};
    ProcessEvent(func, &params);
}
void UMapOverland::CursorCallback(UTexture2D* Texture, UObject* Param) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapOverland.CursorCallback"));
    struct Params_CursorCallback {
        UTexture2D* Texture; // 0x0
        UObject* Param; // 0x8
    }; // Size: 0x10
    Params_CursorCallback params{};
    params.Texture = (UTexture2D*)Texture;
    params.Param = (UObject*)Param;
    ProcessEvent(func, &params);
}
