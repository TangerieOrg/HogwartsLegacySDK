#include "FVector.hpp"
#include "FVectorValueVelocity.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UVectorValueVelocityHelper.hpp"
UVectorValueVelocityHelper* UVectorValueVelocityHelper::StaticClass() {
    static auto res = find_uobject("Class /Script/CameraStack.VectorValueVelocityHelper");
    return (UVectorValueVelocityHelper*)res;
}
FVectorValueVelocity UVectorValueVelocityHelper::Inverse(FVectorValueVelocity& Data) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.VectorValueVelocityHelper.Inverse"));
    struct Params_Inverse {
        FVectorValueVelocity Data; // 0x0
        FVectorValueVelocity ReturnValue; // 0x18
    }; // Size: 0x30
    Params_Inverse params{};
    params.Data = (FVectorValueVelocity)Data;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Data = params.Data;
    return (FVectorValueVelocity)params.ReturnValue;
}
void UVectorValueVelocityHelper::Update(FVectorValueVelocity& Data, FVector& Value, float& DeltaSeconds) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.VectorValueVelocityHelper.Update"));
    struct Params_Update {
        FVectorValueVelocity Data; // 0x0
        FVector Value; // 0x18
        float DeltaSeconds; // 0x24
    }; // Size: 0x28
    Params_Update params{};
    params.Data = (FVectorValueVelocity)Data;
    params.Value = (FVector)Value;
    params.DeltaSeconds = (float)DeltaSeconds;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Data = params.Data;
    Value = params.Value;
    DeltaSeconds = params.DeltaSeconds;
}
void UVectorValueVelocityHelper::Get(FVectorValueVelocity& Data, FVector& OutValue, FVector& OutVelocity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.VectorValueVelocityHelper.Get"));
    struct Params_Get {
        FVectorValueVelocity Data; // 0x0
        FVector OutValue; // 0x18
        FVector OutVelocity; // 0x24
    }; // Size: 0x30
    Params_Get params{};
    params.Data = (FVectorValueVelocity)Data;
    params.OutValue = (FVector)OutValue;
    params.OutVelocity = (FVector)OutVelocity;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Data = params.Data;
    OutValue = params.OutValue;
    OutVelocity = params.OutVelocity;
}
void UVectorValueVelocityHelper::Activate(FVectorValueVelocity& Data, FVector Value, FVector Velocity) {
    static auto func = (UFunction*)(find_uobject("Function /Script/CameraStack.VectorValueVelocityHelper.Activate"));
    struct Params_Activate {
        FVectorValueVelocity Data; // 0x0
        FVector Value; // 0x18
        FVector Velocity; // 0x24
    }; // Size: 0x30
    Params_Activate params{};
    params.Data = (FVectorValueVelocity)Data;
    params.Value = (FVector)Value;
    params.Velocity = (FVector)Velocity;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Data = params.Data;
}
