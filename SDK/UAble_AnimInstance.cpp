#include "FVector.hpp"
#include "UAblAbilityComponent.hpp"
#include "UAblAnimationModifier.hpp"
#include "UAble_AnimInstance.hpp"
#include "UAnimationArchitect_AnimInstance.hpp"
#include "UFunction.hpp"
void UAble_AnimInstance::Set_DesiredWorldSpeed(float InSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.Able_AnimInstance.Set_DesiredWorldSpeed"));
    struct Params_Set_DesiredWorldSpeed {
        float InSpeed; // 0x0
    }; // Size: 0x4
    Params_Set_DesiredWorldSpeed params{};
    params.InSpeed = (float)InSpeed;
    ProcessEvent(func, &params);
}
void UAble_AnimInstance::Get_FixedYawRemaining(float& OutFixedYawRemaining) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.Able_AnimInstance.Get_FixedYawRemaining"));
    struct Params_Get_FixedYawRemaining {
        float OutFixedYawRemaining; // 0x0
    }; // Size: 0x4
    Params_Get_FixedYawRemaining params{};
    params.OutFixedYawRemaining = (float)OutFixedYawRemaining;
    ProcessEvent(func, &params);
    OutFixedYawRemaining = params.OutFixedYawRemaining;
}
UAble_AnimInstance* UAble_AnimInstance::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.Able_AnimInstance");
    return (UAble_AnimInstance*)res;
}
void UAble_AnimInstance::Set_LastDesiredWorldDirection(FVector InWorldDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.Able_AnimInstance.Set_LastDesiredWorldDirection"));
    struct Params_Set_LastDesiredWorldDirection {
        FVector InWorldDirection; // 0x0
    }; // Size: 0xc
    Params_Set_LastDesiredWorldDirection params{};
    params.InWorldDirection = (FVector)InWorldDirection;
    ProcessEvent(func, &params);
}
void UAble_AnimInstance::Get_LastDesiredWorldDirection(FVector& OutWorldDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.Able_AnimInstance.Get_LastDesiredWorldDirection"));
    struct Params_Get_LastDesiredWorldDirection {
        FVector OutWorldDirection; // 0x0
    }; // Size: 0xc
    Params_Get_LastDesiredWorldDirection params{};
    params.OutWorldDirection = (FVector)OutWorldDirection;
    ProcessEvent(func, &params);
    OutWorldDirection = params.OutWorldDirection;
}
void UAble_AnimInstance::Set_FixedYaw(float InFixedYawRemaining, float InFixedYawOffset, float SampleTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.Able_AnimInstance.Set_FixedYaw"));
    struct Params_Set_FixedYaw {
        float InFixedYawRemaining; // 0x0
        float InFixedYawOffset; // 0x4
        float SampleTime; // 0x8
    }; // Size: 0xc
    Params_Set_FixedYaw params{};
    params.InFixedYawRemaining = (float)InFixedYawRemaining;
    params.InFixedYawOffset = (float)InFixedYawOffset;
    params.SampleTime = (float)SampleTime;
    ProcessEvent(func, &params);
}
void UAble_AnimInstance::Set_DesiredWorldDirection(FVector InWorldDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.Able_AnimInstance.Set_DesiredWorldDirection"));
    struct Params_Set_DesiredWorldDirection {
        FVector InWorldDirection; // 0x0
    }; // Size: 0xc
    Params_Set_DesiredWorldDirection params{};
    params.InWorldDirection = (FVector)InWorldDirection;
    ProcessEvent(func, &params);
}
void UAble_AnimInstance::Get_DesiredWorldDirection(FVector& OutWorldDirection) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.Able_AnimInstance.Get_DesiredWorldDirection"));
    struct Params_Get_DesiredWorldDirection {
        FVector OutWorldDirection; // 0x0
    }; // Size: 0xc
    Params_Get_DesiredWorldDirection params{};
    params.OutWorldDirection = (FVector)OutWorldDirection;
    ProcessEvent(func, &params);
    OutWorldDirection = params.OutWorldDirection;
}
void UAble_AnimInstance::Get_FixedYawSampleTime(float& OutFixedYawSampleTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.Able_AnimInstance.Get_FixedYawSampleTime"));
    struct Params_Get_FixedYawSampleTime {
        float OutFixedYawSampleTime; // 0x0
    }; // Size: 0x4
    Params_Get_FixedYawSampleTime params{};
    params.OutFixedYawSampleTime = (float)OutFixedYawSampleTime;
    ProcessEvent(func, &params);
    OutFixedYawSampleTime = params.OutFixedYawSampleTime;
}
void UAble_AnimInstance::Get_FixedYawOffset(float& OutFixedYawOffset) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.Able_AnimInstance.Get_FixedYawOffset"));
    struct Params_Get_FixedYawOffset {
        float OutFixedYawOffset; // 0x0
    }; // Size: 0x4
    Params_Get_FixedYawOffset params{};
    params.OutFixedYawOffset = (float)OutFixedYawOffset;
    ProcessEvent(func, &params);
    OutFixedYawOffset = params.OutFixedYawOffset;
}
void UAble_AnimInstance::Get_DesiredWorldSpeed(float& OutSpeed) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AbleCore.Able_AnimInstance.Get_DesiredWorldSpeed"));
    struct Params_Get_DesiredWorldSpeed {
        float OutSpeed; // 0x0
    }; // Size: 0x4
    Params_Get_DesiredWorldSpeed params{};
    params.OutSpeed = (float)OutSpeed;
    ProcessEvent(func, &params);
    OutSpeed = params.OutSpeed;
}
