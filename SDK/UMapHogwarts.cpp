#include "AActor.hpp"
#include "AMapHogwartsCamera.hpp"
#include "AMapLocationActor.hpp"
#include "APhoenixPathActor.hpp"
#include "ATargetPoint.hpp"
#include "EMapZoomTypes\Type.hpp"
#include "FHogwartsRegion.hpp"
#include "FLinearColor.hpp"
#include "FVector.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UHogwartsMapScreen.hpp"
#include "UMapBase.hpp"
#include "UMapHogwarts.hpp"
#include "UMapPath.hpp"
#include "UMaterialInstanceDynamic.hpp"
#include "UObject.hpp"
#include "UTexture2D.hpp"
#include "UWorld.hpp"
void UMapHogwarts::UnregisterMarkupActor(AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwarts.UnregisterMarkupActor"));
    struct Params_UnregisterMarkupActor {
        AActor* Actor; // 0x0
    }; // Size: 0x8
    Params_UnregisterMarkupActor params{};
    params.Actor = (AActor*)Actor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
UMapHogwarts* UMapHogwarts::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MapHogwarts");
    return (UMapHogwarts*)res;
}
void UMapHogwarts::OverlandMapZoom(float Val) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwarts.OverlandMapZoom"));
    struct Params_OverlandMapZoom {
        float Val; // 0x0
    }; // Size: 0x4
    Params_OverlandMapZoom params{};
    params.Val = (float)Val;
    ProcessEvent(func, &params);
}
void UMapHogwarts::WayPointCallbackHogwarts(UTexture2D* Texture, UObject* Param) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwarts.WayPointCallbackHogwarts"));
    struct Params_WayPointCallbackHogwarts {
        UTexture2D* Texture; // 0x0
        UObject* Param; // 0x8
    }; // Size: 0x10
    Params_WayPointCallbackHogwarts params{};
    params.Texture = (UTexture2D*)Texture;
    params.Param = (UObject*)Param;
    ProcessEvent(func, &params);
}
void UMapHogwarts::ShowPortraitTravel() {}
void UMapHogwarts::TestEvent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwarts.TestEvent"));
    struct Params_TestEvent {
    }; // Size: 0x0
    Params_TestEvent params{};
    ProcessEvent(func, &params);
}
void UMapHogwarts::GetAllActorsWithTag(UWorld* World, FName Tag, TArray<AActor*>& Actors) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwarts.GetAllActorsWithTag"));
    struct Params_GetAllActorsWithTag {
        UWorld* World; // 0x0
        FName Tag; // 0x8
        TArray<AActor*> Actors; // 0x10
    }; // Size: 0x20
    Params_GetAllActorsWithTag params{};
    params.World = (UWorld*)World;
    params.Tag = (FName)Tag;
    params.Actors = (TArray<AActor*>)Actors;
    ProcessEvent(func, &params);
    Actors = params.Actors;
}
void UMapHogwarts::SetZoomType(EMapZoomTypes::Type ZoomType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwarts.SetZoomType"));
    struct Params_SetZoomType {
        EMapZoomTypes::Type ZoomType; // 0x0
    }; // Size: 0x1
    Params_SetZoomType params{};
    params.ZoomType = (EMapZoomTypes::Type)ZoomType;
    ProcessEvent(func, &params);
}
void UMapHogwarts::SetUseNewIcons(bool pUseNewIcons) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwarts.SetUseNewIcons"));
    struct Params_SetUseNewIcons {
        bool pUseNewIcons; // 0x0
    }; // Size: 0x1
    Params_SetUseNewIcons params{};
    params.pUseNewIcons = (bool)pUseNewIcons;
    ProcessEvent(func, &params);
}
UHogwartsMapScreen* UMapHogwarts::GetMapScreenWidget() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwarts.GetMapScreenWidget"));
    struct Params_GetMapScreenWidget {
        UHogwartsMapScreen* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetMapScreenWidget params{};
    ProcessEvent(func, &params);
    return (UHogwartsMapScreen*)params.ReturnValue;
}
bool UMapHogwarts::InHogwarts() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwarts.InHogwarts"));
    struct Params_InHogwarts {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_InHogwarts params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMapHogwarts::RegisterMarkupActor(AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwarts.RegisterMarkupActor"));
    struct Params_RegisterMarkupActor {
        AActor* Actor; // 0x0
    }; // Size: 0x8
    Params_RegisterMarkupActor params{};
    params.Actor = (AActor*)Actor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UMapHogwarts::InHogwartsLocation(FVector Location) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwarts.InHogwartsLocation"));
    struct Params_InHogwartsLocation {
        FVector Location; // 0x0
        bool ReturnValue; // 0xc
    }; // Size: 0xd
    Params_InHogwartsLocation params{};
    params.Location = (FVector)Location;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMapHogwarts::OnStartPathing(UObject* i_caller, uint32_t BeaconHandle) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwarts.OnStartPathing"));
    struct Params_OnStartPathing {
        UObject* i_caller; // 0x0
        uint32_t BeaconHandle; // 0x8
    }; // Size: 0xc
    Params_OnStartPathing params{};
    params.i_caller = (UObject*)i_caller;
    params.BeaconHandle = (uint32_t)BeaconHandle;
    ProcessEvent(func, &params);
}
void UMapHogwarts::OnSaveGameLoaded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwarts.OnSaveGameLoaded"));
    struct Params_OnSaveGameLoaded {
    }; // Size: 0x0
    Params_OnSaveGameLoaded params{};
    ProcessEvent(func, &params);
}
void UMapHogwarts::OnMapItemSelected_Event(FString ItemString, int32_t ItemIndex, bool WasCanceled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwarts.OnMapItemSelected_Event"));
    struct Params_OnMapItemSelected_Event {
        FString ItemString; // 0x0
        int32_t ItemIndex; // 0x10
        bool WasCanceled; // 0x14
    }; // Size: 0x15
    Params_OnMapItemSelected_Event params{};
    params.ItemString = (FString)ItemString;
    params.ItemIndex = (int32_t)ItemIndex;
    params.WasCanceled = (bool)WasCanceled;
    ProcessEvent(func, &params);
}
FVector UMapHogwarts::GetMapTransform() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwarts.GetMapTransform"));
    struct Params_GetMapTransform {
        FVector ReturnValue; // 0x0
    }; // Size: 0xc
    Params_GetMapTransform params{};
    ProcessEvent(func, &params);
    return (FVector)params.ReturnValue;
}
void UMapHogwarts::OnMapItemSelected(FString& ItemString, int32_t ItemIndex, bool WasCanceled) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwarts.OnMapItemSelected"));
    struct Params_OnMapItemSelected {
        FString ItemString; // 0x0
        int32_t ItemIndex; // 0x10
        bool WasCanceled; // 0x14
    }; // Size: 0x15
    Params_OnMapItemSelected params{};
    params.ItemString = (FString)ItemString;
    params.ItemIndex = (int32_t)ItemIndex;
    params.WasCanceled = (bool)WasCanceled;
    ProcessEvent(func, &params);
    ItemString = params.ItemString;
}
void UMapHogwarts::OnCameraBlendComplete() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwarts.OnCameraBlendComplete"));
    struct Params_OnCameraBlendComplete {
    }; // Size: 0x0
    Params_OnCameraBlendComplete params{};
    ProcessEvent(func, &params);
}
bool UMapHogwarts::IsBannerActive() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwarts.IsBannerActive"));
    struct Params_IsBannerActive {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsBannerActive params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UMapHogwarts::HandleMapLocationChanged(UObject* Caller, FString CurrentMapLocationName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwarts.HandleMapLocationChanged"));
    struct Params_HandleMapLocationChanged {
        UObject* Caller; // 0x0
        FString CurrentMapLocationName; // 0x8
    }; // Size: 0x18
    Params_HandleMapLocationChanged params{};
    params.Caller = (UObject*)Caller;
    params.CurrentMapLocationName = (FString)CurrentMapLocationName;
    ProcessEvent(func, &params);
}
void UMapHogwarts::ActivateFastTravel(FString LocationID, FVector FastTravelDestination) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwarts.ActivateFastTravel"));
    struct Params_ActivateFastTravel {
        FString LocationID; // 0x0
        FVector FastTravelDestination; // 0x10
    }; // Size: 0x1c
    Params_ActivateFastTravel params{};
    params.LocationID = (FString)LocationID;
    params.FastTravelDestination = (FVector)FastTravelDestination;
    ProcessEvent(func, &params);
}
void UMapHogwarts::GiveMeHelp_Event() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwarts.GiveMeHelp_Event"));
    struct Params_GiveMeHelp_Event {
    }; // Size: 0x0
    Params_GiveMeHelp_Event params{};
    ProcessEvent(func, &params);
}
EMapZoomTypes::Type UMapHogwarts::GetZoomType(float Zoom) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwarts.GetZoomType"));
    struct Params_GetZoomType {
        float Zoom; // 0x0
        EMapZoomTypes::Type ReturnValue; // 0x4
    }; // Size: 0x5
    Params_GetZoomType params{};
    params.Zoom = (float)Zoom;
    ProcessEvent(func, &params);
    return (EMapZoomTypes::Type)params.ReturnValue;
}
bool UMapHogwarts::GetUseNewIcons() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwarts.GetUseNewIcons"));
    struct Params_GetUseNewIcons {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetUseNewIcons params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
TArray<FName> UMapHogwarts::GetMissionsForThisRegion() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwarts.GetMissionsForThisRegion"));
    struct Params_GetMissionsForThisRegion {
        TArray<FName> ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetMissionsForThisRegion params{};
    ProcessEvent(func, &params);
    return (TArray<FName>)params.ReturnValue;
}
FString UMapHogwarts::GetMapLocationName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwarts.GetMapLocationName"));
    struct Params_GetMapLocationName {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetMapLocationName params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
void UMapHogwarts::GetAllActorsOfClass(UWorld* World, UClass* ActorClass, TArray<AActor*>& Actors) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwarts.GetAllActorsOfClass"));
    struct Params_GetAllActorsOfClass {
        UWorld* World; // 0x0
        UClass* ActorClass; // 0x8
        TArray<AActor*> Actors; // 0x10
    }; // Size: 0x20
    Params_GetAllActorsOfClass params{};
    params.World = (UWorld*)World;
    params.ActorClass = (UClass*)ActorClass;
    params.Actors = (TArray<AActor*>)Actors;
    ProcessEvent(func, &params);
    Actors = params.Actors;
}
void UMapHogwarts::CheckLoadedProperly() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwarts.CheckLoadedProperly"));
    struct Params_CheckLoadedProperly {
    }; // Size: 0x0
    Params_CheckLoadedProperly params{};
    ProcessEvent(func, &params);
}
void UMapHogwarts::ChangeTier() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwarts.ChangeTier"));
    struct Params_ChangeTier {
    }; // Size: 0x0
    Params_ChangeTier params{};
    ProcessEvent(func, &params);
}
float UMapHogwarts::CalulatePathDistance(TArray<FVector> InPathPoints) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwarts.CalulatePathDistance"));
    struct Params_CalulatePathDistance {
        TArray<FVector> InPathPoints; // 0x0
        float ReturnValue; // 0x10
    }; // Size: 0x14
    Params_CalulatePathDistance params{};
    params.InPathPoints = (TArray<FVector>)InPathPoints;
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UMapHogwarts::ActivateFastTravelByIcon() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwarts.ActivateFastTravelByIcon"));
    struct Params_ActivateFastTravelByIcon {
    }; // Size: 0x0
    Params_ActivateFastTravelByIcon params{};
    ProcessEvent(func, &params);
}
void UMapHogwarts::ActivateBanner(bool ACTIVE) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapHogwarts.ActivateBanner"));
    struct Params_ActivateBanner {
        bool ACTIVE; // 0x0
    }; // Size: 0x1
    Params_ActivateBanner params{};
    params.ACTIVE = (bool)ACTIVE;
    ProcessEvent(func, &params);
}
