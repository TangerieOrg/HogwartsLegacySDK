#include "AActor.hpp"
#include "AWaterMill.hpp"
#include "UFunction.hpp"
AWaterMill* AWaterMill::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.WaterMill");
    return (AWaterMill*)res;
}
void AWaterMill::DeactivateWaterMill() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WaterMill.DeactivateWaterMill"));
    struct Params_DeactivateWaterMill {
    }; // Size: 0x0
    Params_DeactivateWaterMill params{};
    ProcessEvent(func, &params);
}
void AWaterMill::ActivateWaterMill() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.WaterMill.ActivateWaterMill"));
    struct Params_ActivateWaterMill {
    }; // Size: 0x0
    Params_ActivateWaterMill params{};
    ProcessEvent(func, &params);
}
