#include "FVector.hpp"
#include "UAble_AnimInstance_Interface.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
UAble_AnimInstance_Interface* UAble_AnimInstance_Interface::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.Able_AnimInstance_Interface");
    return (UAble_AnimInstance_Interface*)res;
}
void UAble_AnimInstance_Interface::Set_LastDesiredWorldDirection(FVector InWorldDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.Able_AnimInstance_Interface.Set_LastDesiredWorldDirection"));
    struct Params_Set_LastDesiredWorldDirection {
        FVector InWorldDirection; // 0x0
    }; // Size: 0xc
    Params_Set_LastDesiredWorldDirection params{};
    params.InWorldDirection = (FVector)InWorldDirection;
    ProcessEvent(func, &params);
}
void UAble_AnimInstance_Interface::Set_DesiredWorldSpeed(float InSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.Able_AnimInstance_Interface.Set_DesiredWorldSpeed"));
    struct Params_Set_DesiredWorldSpeed {
        float InSpeed; // 0x0
    }; // Size: 0x4
    Params_Set_DesiredWorldSpeed params{};
    params.InSpeed = (float)InSpeed;
    ProcessEvent(func, &params);
}
void UAble_AnimInstance_Interface::Set_DesiredWorldDirection(FVector InWorldDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.Able_AnimInstance_Interface.Set_DesiredWorldDirection"));
    struct Params_Set_DesiredWorldDirection {
        FVector InWorldDirection; // 0x0
    }; // Size: 0xc
    Params_Set_DesiredWorldDirection params{};
    params.InWorldDirection = (FVector)InWorldDirection;
    ProcessEvent(func, &params);
}
void UAble_AnimInstance_Interface::GoToLoco2() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.Able_AnimInstance_Interface.GoToLoco2"));
    struct Params_GoToLoco2 {
    }; // Size: 0x0
    Params_GoToLoco2 params{};
    ProcessEvent(func, &params);
}
void UAble_AnimInstance_Interface::GoToLoco1() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.Able_AnimInstance_Interface.GoToLoco1"));
    struct Params_GoToLoco1 {
    }; // Size: 0x0
    Params_GoToLoco1 params{};
    ProcessEvent(func, &params);
}
void UAble_AnimInstance_Interface::Get_DesiredWorldSpeed(float& OutSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.Able_AnimInstance_Interface.Get_DesiredWorldSpeed"));
    struct Params_Get_DesiredWorldSpeed {
        float OutSpeed; // 0x0
    }; // Size: 0x4
    Params_Get_DesiredWorldSpeed params{};
    params.OutSpeed = (float)OutSpeed;
    ProcessEvent(func, &params);
    OutSpeed = params.OutSpeed;
}
void UAble_AnimInstance_Interface::Get_LastDesiredWorldDirection(FVector& OutWorldDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.Able_AnimInstance_Interface.Get_LastDesiredWorldDirection"));
    struct Params_Get_LastDesiredWorldDirection {
        FVector OutWorldDirection; // 0x0
    }; // Size: 0xc
    Params_Get_LastDesiredWorldDirection params{};
    params.OutWorldDirection = (FVector)OutWorldDirection;
    ProcessEvent(func, &params);
    OutWorldDirection = params.OutWorldDirection;
}
void UAble_AnimInstance_Interface::Get_DesiredWorldDirection(FVector& OutWorldDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.Able_AnimInstance_Interface.Get_DesiredWorldDirection"));
    struct Params_Get_DesiredWorldDirection {
        FVector OutWorldDirection; // 0x0
    }; // Size: 0xc
    Params_Get_DesiredWorldDirection params{};
    params.OutWorldDirection = (FVector)OutWorldDirection;
    ProcessEvent(func, &params);
    OutWorldDirection = params.OutWorldDirection;
}
