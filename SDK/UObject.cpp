#include "UClass.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UObject* UObject::StaticClass() {
    static auto res = find_uobject("Class /Script/CoreUObject.Object");
    return (UObject*)res;
}
void UObject::ExecuteUbergraph(int32_t EntryPoint) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CoreUObject.Object.ExecuteUbergraph"));
    struct Params_ExecuteUbergraph {
        int32_t EntryPoint; // 0x0
    }; // Size: 0x4
    Params_ExecuteUbergraph params{};
    params.EntryPoint = (int32_t)EntryPoint;
    ProcessEvent(func, &params);
}
