#include "UBlueprintAsyncActionBase.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "URequestPermissionsAsync.hpp"
URequestPermissionsAsync* URequestPermissionsAsync::StaticClass() {
    static auto res = find_uobject("Class /Script/NVIDIAGfeSDK.RequestPermissionsAsync");
    return (URequestPermissionsAsync*)res;
}
URequestPermissionsAsync* URequestPermissionsAsync::GFERequestPermissions(UObject* WorldContextObject, bool Video, bool Screenshots) {
    static auto func = (UFunction*)(find_uobject("Function /Script/NVIDIAGfeSDK.RequestPermissionsAsync.GFERequestPermissions"));
    struct Params_GFERequestPermissions {
        UObject* WorldContextObject; // 0x0
        bool Video; // 0x8
        bool Screenshots; // 0x9
        char pad_a[0x6];
        URequestPermissionsAsync* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_GFERequestPermissions params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Video = (bool)Video;
    params.Screenshots = (bool)Screenshots;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (URequestPermissionsAsync*)params.ReturnValue;
}
