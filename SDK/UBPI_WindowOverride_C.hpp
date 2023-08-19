#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "UInterface.hpp"
#pragma pack(push, 1)
class UBPI_WindowOverride_C : public UInterface {
public:
    static UBPI_WindowOverride_C* StaticClass();
    void Outside_Override_Emissive(float Day_Value, float Light_on_Intensity, float Light_off_Intensity, FLinearColor Night_Color, bool Set_Lock_Value);
    void Reset();
    void Inside_Override_Emissive(float ScatteredLight_Tran, float ScatteredLight_Desat, float DirectionalLight_Tran, float DirectionalLight_Desat, FLinearColor Color_Tint, bool Set_Lock_Value, FLinearColor Locked_Color, float Locked_Emissive);
}; // Size: 0x28
#pragma pack(pop)
