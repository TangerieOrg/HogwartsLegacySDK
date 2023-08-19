#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UVOIPStatics.hpp"
UVOIPStatics* UVOIPStatics::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.VOIPStatics");
    return (UVOIPStatics*)res;
}
void UVOIPStatics::SetMicThreshold(float InThreshold) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.VOIPStatics.SetMicThreshold"));
    struct Params_SetMicThreshold {
        float InThreshold; // 0x0
    }; // Size: 0x4
    Params_SetMicThreshold params{};
    params.InThreshold = (float)InThreshold;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
