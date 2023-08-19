#include "FRotator.hpp"
#include "FRotatorValueVelocity.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "URotatorValueVelocityHelper.hpp"
void URotatorValueVelocityHelper::Update(FRotatorValueVelocity& Data, FRotator& Value, float& DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.RotatorValueVelocityHelper.Update"));
    struct Params_Update {
        FRotatorValueVelocity Data; // 0x0
        FRotator Value; // 0x18
        float DeltaSeconds; // 0x24
    }; // Size: 0x28
    Params_Update params{};
    params.Data = (FRotatorValueVelocity)Data;
    params.Value = (FRotator)Value;
    params.DeltaSeconds = (float)DeltaSeconds;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Data = params.Data;
    Value = params.Value;
    DeltaSeconds = params.DeltaSeconds;
}
URotatorValueVelocityHelper* URotatorValueVelocityHelper::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.RotatorValueVelocityHelper");
    return (URotatorValueVelocityHelper*)res;
}
FRotatorValueVelocity URotatorValueVelocityHelper::Inverse(FRotatorValueVelocity& Data) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.RotatorValueVelocityHelper.Inverse"));
    struct Params_Inverse {
        FRotatorValueVelocity Data; // 0x0
        FRotatorValueVelocity ReturnValue; // 0x18
    }; // Size: 0x30
    Params_Inverse params{};
    params.Data = (FRotatorValueVelocity)Data;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Data = params.Data;
    return (FRotatorValueVelocity)params.ReturnValue;
}
void URotatorValueVelocityHelper::Activate(FRotatorValueVelocity& Data, FRotator Value, FRotator Velocity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.RotatorValueVelocityHelper.Activate"));
    struct Params_Activate {
        FRotatorValueVelocity Data; // 0x0
        FRotator Value; // 0x18
        FRotator Velocity; // 0x24
    }; // Size: 0x30
    Params_Activate params{};
    params.Data = (FRotatorValueVelocity)Data;
    params.Value = (FRotator)Value;
    params.Velocity = (FRotator)Velocity;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Data = params.Data;
}
void URotatorValueVelocityHelper::Get(FRotatorValueVelocity& Data, FRotator& OutValue, FRotator& OutVelocity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.RotatorValueVelocityHelper.Get"));
    struct Params_Get {
        FRotatorValueVelocity Data; // 0x0
        FRotator OutValue; // 0x18
        FRotator OutVelocity; // 0x24
    }; // Size: 0x30
    Params_Get params{};
    params.Data = (FRotatorValueVelocity)Data;
    params.OutValue = (FRotator)OutValue;
    params.OutVelocity = (FRotator)OutVelocity;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Data = params.Data;
    OutValue = params.OutValue;
    OutVelocity = params.OutVelocity;
}
