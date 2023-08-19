#include "UAssetWidgetInterface.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
#include "UObject.hpp"
UAssetWidgetInterface* UAssetWidgetInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AssetWidgetInterface");
    return (UAssetWidgetInterface*)res;
}
bool UAssetWidgetInterface::OnIsAssetAcceptableForDrop(UObject* Asset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AssetWidgetInterface.OnIsAssetAcceptableForDrop"));
    struct Params_OnIsAssetAcceptableForDrop {
        UObject* Asset; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_OnIsAssetAcceptableForDrop params{};
    params.Asset = (UObject*)Asset;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
bool UAssetWidgetInterface::OnAssetDropped(UObject* Asset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AssetWidgetInterface.OnAssetDropped"));
    struct Params_OnAssetDropped {
        UObject* Asset; // 0x0
        bool ReturnValue; // 0x8
    }; // Size: 0x9
    Params_OnAssetDropped params{};
    params.Asset = (UObject*)Asset;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
