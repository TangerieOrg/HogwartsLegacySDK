#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UNetPushModelHelpers.hpp"
#include "UObject.hpp"
UNetPushModelHelpers* UNetPushModelHelpers::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.NetPushModelHelpers");
    return (UNetPushModelHelpers*)res;
}
void UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(UObject* Object, int32_t RepIndex, FName PropertyName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.NetPushModelHelpers.MarkPropertyDirtyFromRepIndex"));
    struct Params_MarkPropertyDirtyFromRepIndex {
        UObject* Object; // 0x0
        int32_t RepIndex; // 0x8
        FName PropertyName; // 0xc
    }; // Size: 0x14
    Params_MarkPropertyDirtyFromRepIndex params{};
    params.Object = (UObject*)Object;
    params.RepIndex = (int32_t)RepIndex;
    params.PropertyName = (FName)PropertyName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UNetPushModelHelpers::MarkPropertyDirty(UObject* Object, FName PropertyName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.NetPushModelHelpers.MarkPropertyDirty"));
    struct Params_MarkPropertyDirty {
        UObject* Object; // 0x0
        FName PropertyName; // 0x8
    }; // Size: 0x10
    Params_MarkPropertyDirty params{};
    params.Object = (UObject*)Object;
    params.PropertyName = (FName)PropertyName;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
