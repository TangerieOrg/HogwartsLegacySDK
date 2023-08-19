#include "AActor.hpp"
#include "AWaterMill_Gears.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UStaticMeshComponent.hpp"
float AWaterMill_Gears::GetSpeedControl() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WaterMill_Gears.GetSpeedControl"));
    struct Params_GetSpeedControl {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetSpeedControl params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
AWaterMill_Gears* AWaterMill_Gears::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WaterMill_Gears");
    return (AWaterMill_Gears*)res;
}
void AWaterMill_Gears::UpdateWaterWheelMaterialValues() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WaterMill_Gears.UpdateWaterWheelMaterialValues"));
    struct Params_UpdateWaterWheelMaterialValues {
    }; // Size: 0x0
    Params_UpdateWaterWheelMaterialValues params{};
    ProcessEvent(func, &params);
}
void AWaterMill_Gears::GetRotationRates(TArray<FVector>& Array) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WaterMill_Gears.GetRotationRates"));
    struct Params_GetRotationRates {
        TArray<FVector> Array; // 0x0
    }; // Size: 0x10
    Params_GetRotationRates params{};
    params.Array = (TArray<FVector>)Array;
    ProcessEvent(func, &params);
    Array = params.Array;
}
void AWaterMill_Gears::GetGearComponents(TArray<UStaticMeshComponent*>& Array) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WaterMill_Gears.GetGearComponents"));
    struct Params_GetGearComponents {
        TArray<UStaticMeshComponent*> Array; // 0x0
    }; // Size: 0x10
    Params_GetGearComponents params{};
    params.Array = (TArray<UStaticMeshComponent*>)Array;
    ProcessEvent(func, &params);
    Array = params.Array;
}
