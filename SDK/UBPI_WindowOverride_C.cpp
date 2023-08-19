#include "FLinearColor.hpp"
#include "UBPI_WindowOverride_C.hpp"
#include "UFunction.hpp"
#include "UInterface.hpp"
UBPI_WindowOverride_C* UBPI_WindowOverride_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/Blueprints/HogwartsWindows/BPI_WindowOverride.BPI_WindowOverride_C");
    return (UBPI_WindowOverride_C*)res;
}
void UBPI_WindowOverride_C::Reset() {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/HogwartsWindows/BPI_WindowOverride.BPI_WindowOverride_C.Reset"));
    struct Params_Reset {
    }; // Size: 0x0
    Params_Reset params{};
    ProcessEvent(func, &params);
}
void UBPI_WindowOverride_C::Outside_Override_Emissive(float Day_Value, float Light_on_Intensity, float Light_off_Intensity, FLinearColor Night_Color, bool Set_Lock_Value) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/HogwartsWindows/BPI_WindowOverride.BPI_WindowOverride_C.Outside Override Emissive"));
    struct Params_Outside_Override_Emissive {
        float Day_Value; // 0x0
        float Light_on_Intensity; // 0x4
        float Light_off_Intensity; // 0x8
        FLinearColor Night_Color; // 0xc
        bool Set_Lock_Value; // 0x1c
    }; // Size: 0x1d
    Params_Outside_Override_Emissive params{};
    params.Day_Value = (float)Day_Value;
    params.Light_on_Intensity = (float)Light_on_Intensity;
    params.Light_off_Intensity = (float)Light_off_Intensity;
    params.Night_Color = (FLinearColor)Night_Color;
    params.Set_Lock_Value = (bool)Set_Lock_Value;
    ProcessEvent(func, &params);
}
void UBPI_WindowOverride_C::Inside_Override_Emissive(float ScatteredLight_Tran, float ScatteredLight_Desat, float DirectionalLight_Tran, float DirectionalLight_Desat, FLinearColor Color_Tint, bool Set_Lock_Value, FLinearColor Locked_Color, float Locked_Emissive) {
    static auto func = (UFunction*)(find_uobject("Function /Game/Environment/Hogwarts/Blueprints/HogwartsWindows/BPI_WindowOverride.BPI_WindowOverride_C.Inside Override Emissive"));
    struct Params_Inside_Override_Emissive {
        float ScatteredLight_Tran; // 0x0
        float ScatteredLight_Desat; // 0x4
        float DirectionalLight_Tran; // 0x8
        float DirectionalLight_Desat; // 0xc
        FLinearColor Color_Tint; // 0x10
        bool Set_Lock_Value; // 0x20
        char pad_21[0x3];
        FLinearColor Locked_Color; // 0x24
        float Locked_Emissive; // 0x34
    }; // Size: 0x38
    Params_Inside_Override_Emissive params{};
    params.ScatteredLight_Tran = (float)ScatteredLight_Tran;
    params.ScatteredLight_Desat = (float)ScatteredLight_Desat;
    params.DirectionalLight_Tran = (float)DirectionalLight_Tran;
    params.DirectionalLight_Desat = (float)DirectionalLight_Desat;
    params.Color_Tint = (FLinearColor)Color_Tint;
    params.Set_Lock_Value = (bool)Set_Lock_Value;
    params.Locked_Color = (FLinearColor)Locked_Color;
    params.Locked_Emissive = (float)Locked_Emissive;
    ProcessEvent(func, &params);
}
