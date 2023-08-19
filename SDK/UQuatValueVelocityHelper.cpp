#include "FQuatValueVelocity.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UQuatValueVelocityHelper.hpp"
UQuatValueVelocityHelper* UQuatValueVelocityHelper::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.QuatValueVelocityHelper");
    return (UQuatValueVelocityHelper*)res;
}
void UQuatValueVelocityHelper::Activate(FQuatValueVelocity& Data, FRotator Value, FVector Velocity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.QuatValueVelocityHelper.Activate"));
    struct Params_Activate {
        FQuatValueVelocity Data; // 0x0
        FRotator Value; // 0x20
        FVector Velocity; // 0x2c
    }; // Size: 0x38
    Params_Activate params{};
    params.Data = (FQuatValueVelocity)Data;
    params.Value = (FRotator)Value;
    params.Velocity = (FVector)Velocity;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Data = params.Data;
}
void UQuatValueVelocityHelper::Update(FQuatValueVelocity& Data, FRotator& Value, float& DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.QuatValueVelocityHelper.Update"));
    struct Params_Update {
        FQuatValueVelocity Data; // 0x0
        FRotator Value; // 0x20
        float DeltaSeconds; // 0x2c
    }; // Size: 0x30
    Params_Update params{};
    params.Data = (FQuatValueVelocity)Data;
    params.Value = (FRotator)Value;
    params.DeltaSeconds = (float)DeltaSeconds;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Data = params.Data;
    Value = params.Value;
    DeltaSeconds = params.DeltaSeconds;
}
FQuatValueVelocity UQuatValueVelocityHelper::Inverse(FQuatValueVelocity& Data) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.QuatValueVelocityHelper.Inverse"));
    struct Params_Inverse {
        FQuatValueVelocity Data; // 0x0
        FQuatValueVelocity ReturnValue; // 0x20
    }; // Size: 0x40
    Params_Inverse params{};
    params.Data = (FQuatValueVelocity)Data;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Data = params.Data;
    return (FQuatValueVelocity)params.ReturnValue;
}
void UQuatValueVelocityHelper::Get(FQuatValueVelocity& Data, FRotator& OutValue, FVector& OutVelocity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.QuatValueVelocityHelper.Get"));
    struct Params_Get {
        FQuatValueVelocity Data; // 0x0
        FRotator OutValue; // 0x20
        FVector OutVelocity; // 0x2c
    }; // Size: 0x38
    Params_Get params{};
    params.Data = (FQuatValueVelocity)Data;
    params.OutValue = (FRotator)OutValue;
    params.OutVelocity = (FVector)OutVelocity;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Data = params.Data;
    OutValue = params.OutValue;
    OutVelocity = params.OutVelocity;
}
