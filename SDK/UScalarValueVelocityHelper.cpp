#include "FScalarValueVelocity.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UScalarValueVelocityHelper.hpp"
UScalarValueVelocityHelper* UScalarValueVelocityHelper::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.ScalarValueVelocityHelper");
    return (UScalarValueVelocityHelper*)res;
}
void UScalarValueVelocityHelper::Update(FScalarValueVelocity& Data, float& Value, float& DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.ScalarValueVelocityHelper.Update"));
    struct Params_Update {
        FScalarValueVelocity Data; // 0x0
        float Value; // 0x10
        float DeltaSeconds; // 0x14
    }; // Size: 0x18
    Params_Update params{};
    params.Data = (FScalarValueVelocity)Data;
    params.Value = (float)Value;
    params.DeltaSeconds = (float)DeltaSeconds;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Value = params.Value;
    Data = params.Data;
    DeltaSeconds = params.DeltaSeconds;
}
FScalarValueVelocity UScalarValueVelocityHelper::Inverse(FScalarValueVelocity& Data) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.ScalarValueVelocityHelper.Inverse"));
    struct Params_Inverse {
        FScalarValueVelocity Data; // 0x0
        FScalarValueVelocity ReturnValue; // 0x10
    }; // Size: 0x20
    Params_Inverse params{};
    params.Data = (FScalarValueVelocity)Data;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Data = params.Data;
    return (FScalarValueVelocity)params.ReturnValue;
}
void UScalarValueVelocityHelper::Get(FScalarValueVelocity& Data, float& OutValue, float& OutVelocity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.ScalarValueVelocityHelper.Get"));
    struct Params_Get {
        FScalarValueVelocity Data; // 0x0
        float OutValue; // 0x10
        float OutVelocity; // 0x14
    }; // Size: 0x18
    Params_Get params{};
    params.Data = (FScalarValueVelocity)Data;
    params.OutValue = (float)OutValue;
    params.OutVelocity = (float)OutVelocity;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Data = params.Data;
    OutValue = params.OutValue;
    OutVelocity = params.OutVelocity;
}
void UScalarValueVelocityHelper::Activate(FScalarValueVelocity& Data, float Value, float Velocity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.ScalarValueVelocityHelper.Activate"));
    struct Params_Activate {
        FScalarValueVelocity Data; // 0x0
        float Value; // 0x10
        float Velocity; // 0x14
    }; // Size: 0x18
    Params_Activate params{};
    params.Data = (FScalarValueVelocity)Data;
    params.Value = (float)Value;
    params.Velocity = (float)Velocity;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Data = params.Data;
}
