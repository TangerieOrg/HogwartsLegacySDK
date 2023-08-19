#include "EPropertyValueCategory.hpp"
#include "FCapturedPropSegment.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UPropertyValue.hpp"
UPropertyValue* UPropertyValue::StaticClass() {
    static auto res = find_uobject("Class /Script/VariantManagerContent.PropertyValue");
    return (UPropertyValue*)res;
}
bool UPropertyValue::HasRecordedData() {
    static auto func = (UFunction*)(find_uobject("Function /Script/VariantManagerContent.PropertyValue.HasRecordedData"));
    struct Params_HasRecordedData {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_HasRecordedData params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void UPropertyValue::GetPropertyTooltip() {}
FString UPropertyValue::GetFullDisplayString() {
    static auto func = (UFunction*)(find_uobject("Function /Script/VariantManagerContent.PropertyValue.GetFullDisplayString"));
    struct Params_GetFullDisplayString {
        FString ReturnValue; // 0x0
    }; // Size: 0x10
    Params_GetFullDisplayString params{};
    ProcessEvent(func, &params);
    return (FString)params.ReturnValue;
}
