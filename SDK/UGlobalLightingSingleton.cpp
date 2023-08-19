#include "UFunction.hpp"
#include "UGlobalLightingSingleton.hpp"
#include "UObject.hpp"
void UGlobalLightingSingleton::IsRegisteredGlobalLightingObject(UObject* BlendableLightingObject, bool& registered) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightRig.GlobalLightingSingleton.IsRegisteredGlobalLightingObject"));
    struct Params_IsRegisteredGlobalLightingObject {
        UObject* BlendableLightingObject; // 0x0
        bool registered; // 0x8
    }; // Size: 0x9
    Params_IsRegisteredGlobalLightingObject params{};
    params.BlendableLightingObject = (UObject*)BlendableLightingObject;
    params.registered = (bool)registered;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    registered = params.registered;
}
UGlobalLightingSingleton* UGlobalLightingSingleton::StaticClass() {
    static auto res = find_uobject("Class /Script/GlobalLightRig.GlobalLightingSingleton");
    return (UGlobalLightingSingleton*)res;
}
void UGlobalLightingSingleton::RegisterGlobalLightingObject(UObject* BlendableLightingObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightRig.GlobalLightingSingleton.RegisterGlobalLightingObject"));
    struct Params_RegisterGlobalLightingObject {
        UObject* BlendableLightingObject; // 0x0
    }; // Size: 0x8
    Params_RegisterGlobalLightingObject params{};
    params.BlendableLightingObject = (UObject*)BlendableLightingObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UGlobalLightingSingleton::DeregisterGlobalLightingObject(UObject* BlendableLightingObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/GlobalLightRig.GlobalLightingSingleton.DeregisterGlobalLightingObject"));
    struct Params_DeregisterGlobalLightingObject {
        UObject* BlendableLightingObject; // 0x0
    }; // Size: 0x8
    Params_DeregisterGlobalLightingObject params{};
    params.BlendableLightingObject = (UObject*)BlendableLightingObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
