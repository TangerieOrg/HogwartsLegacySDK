#pragma once
#include <cstdint>
#include "ERenderFocusRule.hpp"
#include "EUIScalingRule.hpp"
#include "FIntPoint.hpp"
#include "FRuntimeFloatCurve.hpp"
#include "FSoftClassPath.hpp"
#include "UDeveloperSettings.hpp"
class UObject;
class UClass;
class UDPICustomScalingRule;
#pragma pack(push, 1)
class UUserInterfaceSettings : public UDeveloperSettings {
public:
    ERenderFocusRule RenderFocusRule; // 0x38
    char pad_39[0xa7];
    FSoftClassPath DefaultCursor; // 0xe0
    FSoftClassPath TextEditBeamCursor; // 0xf8
    FSoftClassPath CrosshairsCursor; // 0x110
    FSoftClassPath HandCursor; // 0x128
    FSoftClassPath GrabHandCursor; // 0x140
    FSoftClassPath GrabHandClosedCursor; // 0x158
    FSoftClassPath SlashedCircleCursor; // 0x170
    float ApplicationScale; // 0x188
    EUIScalingRule UIScaleRule; // 0x18c
    char pad_18d[0x3];
    FSoftClassPath CustomScalingRuleClass; // 0x190
    FRuntimeFloatCurve UIScaleCurve; // 0x1a8
    bool bAllowHighDPIInGameMode; // 0x230
    char pad_231[0x3];
    FIntPoint DesignScreenSize; // 0x234
    bool bLoadWidgetsOnDedicatedServer; // 0x23c
    char pad_23d[0x3];
    TArray<UObject*> CursorClasses; // 0x240
    UClass* CustomScalingRuleClassInstance; // 0x250
    UDPICustomScalingRule* CustomScalingRule; // 0x258
    char pad_260[0x10];
    static UUserInterfaceSettings* StaticClass();
}; // Size: 0x270
#pragma pack(pop)
