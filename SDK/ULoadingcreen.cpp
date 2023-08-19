#include "ELoadingScreenLocation.hpp"
#include "UFunction.hpp"
#include "UImage.hpp"
#include "ULoadingcreen.hpp"
#include "UPhoenixUserWidget.hpp"
#include "UTexture2D.hpp"
void ULoadingcreen::GenerateTipList(ELoadingScreenLocation DestinationLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Loadingcreen.GenerateTipList"));
    struct Params_GenerateTipList {
        ELoadingScreenLocation DestinationLocation; // 0x0
    }; // Size: 0x1
    Params_GenerateTipList params{};
    params.DestinationLocation = (ELoadingScreenLocation)DestinationLocation;
    ProcessEvent(func, &params);
}
ULoadingcreen* ULoadingcreen::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Loadingcreen");
    return (ULoadingcreen*)res;
}
void ULoadingcreen::SetTextureByName(FString Name) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Loadingcreen.SetTextureByName"));
    struct Params_SetTextureByName {
        FString Name; // 0x0
    }; // Size: 0x10
    Params_SetTextureByName params{};
    params.Name = (FString)Name;
    ProcessEvent(func, &params);
}
void ULoadingcreen::SetTexture(UTexture2D* Texture) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Loadingcreen.SetTexture"));
    struct Params_SetTexture {
        UTexture2D* Texture; // 0x0
    }; // Size: 0x8
    Params_SetTexture params{};
    params.Texture = (UTexture2D*)Texture;
    ProcessEvent(func, &params);
}
void ULoadingcreen::OnDisplayNextTip(FString TipKey) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Loadingcreen.OnDisplayNextTip"));
    struct Params_OnDisplayNextTip {
        FString TipKey; // 0x0
    }; // Size: 0x10
    Params_OnDisplayNextTip params{};
    params.TipKey = (FString)TipKey;
    ProcessEvent(func, &params);
}
void ULoadingcreen::PickBackgroundID(ELoadingScreenLocation DestinationLocation) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Loadingcreen.PickBackgroundID"));
    struct Params_PickBackgroundID {
        ELoadingScreenLocation DestinationLocation; // 0x0
    }; // Size: 0x1
    Params_PickBackgroundID params{};
    params.DestinationLocation = (ELoadingScreenLocation)DestinationLocation;
    ProcessEvent(func, &params);
}
void ULoadingcreen::DisplayPrevTip() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Loadingcreen.DisplayPrevTip"));
    struct Params_DisplayPrevTip {
    }; // Size: 0x0
    Params_DisplayPrevTip params{};
    ProcessEvent(func, &params);
}
void ULoadingcreen::DisplayNextTip() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Loadingcreen.DisplayNextTip"));
    struct Params_DisplayNextTip {
    }; // Size: 0x0
    Params_DisplayNextTip params{};
    ProcessEvent(func, &params);
}
