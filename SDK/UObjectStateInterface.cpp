#include "UAkComponent.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
#include "UObjectStateInterface.hpp"
#include "UPrimitiveComponent.hpp"
UPrimitiveComponent* UObjectStateInterface::GetMainPrimitive() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInterface.GetMainPrimitive"));
    struct Params_GetMainPrimitive {
        UPrimitiveComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetMainPrimitive params{};
    ProcessEvent(func, &params);
    return (UPrimitiveComponent*)params.ReturnValue;
}
void UObjectStateInterface::OnReset() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInterface.OnReset"));
    struct Params_OnReset {
    }; // Size: 0x0
    Params_OnReset params{};
    ProcessEvent(func, &params);
}
UObjectStateInterface* UObjectStateInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ObjectStateInterface");
    return (UObjectStateInterface*)res;
}
void UObjectStateInterface::SetupSfx(UAkComponent* AkComponent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInterface.SetupSfx"));
    struct Params_SetupSfx {
        UAkComponent* AkComponent; // 0x0
    }; // Size: 0x8
    Params_SetupSfx params{};
    params.AkComponent = (UAkComponent*)AkComponent;
    ProcessEvent(func, &params);
}
FName UObjectStateInterface::GetMainBone() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ObjectStateInterface.GetMainBone"));
    struct Params_GetMainBone {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetMainBone params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
