#pragma once
#include <cstdint>
#include "FKey.hpp"
#include "FKeyBind.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UPlayerInput : public UObject {
public:
    char pad_28[0xf8];
    TArray<FKeyBind> DebugExecBindings; // 0x120
    char pad_130[0x30];
    TArray<FName> InvertedAxis; // 0x160
    char pad_170[0x238];
    static UPlayerInput* StaticClass();
    void SetMouseSensitivity(float Sensitivity);
    void SetBind(FName BindName, FString Command);
    void InvertAxisKey(FKey AxisKey);
    void InvertAxis(FName AxisName);
    void ClearSmoothing();
}; // Size: 0x3a8
#pragma pack(pop)
