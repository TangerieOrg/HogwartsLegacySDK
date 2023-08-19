#include "ADecalActor.hpp"
#include "AMapFilterRegion.hpp"
#include "UFunction.hpp"
#include "UMaterialInterface.hpp"
#include "UTexture2D.hpp"
AMapFilterRegion* AMapFilterRegion::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MapFilterRegion");
    return (AMapFilterRegion*)res;
}
FString AMapFilterRegion::GetName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapFilterRegion.GetName"));
    struct Params_GetName {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetName params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
void AMapFilterRegion::SetTexture(UTexture2D* inTexture) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.MapFilterRegion.SetTexture"));
    struct Params_SetTexture {
        UTexture2D* inTexture; // 0x0
    }; // Size: 0x8
    Params_SetTexture params{};
    params.inTexture = (UTexture2D*)inTexture;
    ProcessEvent(func, &params);
}
