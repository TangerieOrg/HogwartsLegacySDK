#pragma once
#include <cstdint>
#include "ENodeAdvancedPins\Type.hpp"
#include "ENodeEnabledState.hpp"
#include "FGuid.hpp"
#include "UObject.hpp"
class UEdGraphPin_Deprecated;
#pragma pack(push, 1)
class UEdGraphNode : public UObject {
public:
    char pad_28[0x10];
    TArray<UEdGraphPin_Deprecated*> DeprecatedPins; // 0x38
    int32_t NodePosX; // 0x48
    int32_t NodePosY; // 0x4c
    int32_t NodeWidth; // 0x50
    int32_t NodeHeight; // 0x54
    ENodeAdvancedPins::Type AdvancedPinDisplay; // 0x58
    ENodeEnabledState EnabledState; // 0x59
    char pad_5a[0x1];
    uint8_t pad_bitfield_5b_0 : 1;
    uint8_t bDisplayAsDisabled : 1; // 0x5b
    uint8_t bUserSetEnabledState : 1; // 0x5b
    uint8_t pad_bitfield_5b_3 : 1;
    uint8_t bIsNodeEnabled : 1; // 0x5b
    uint8_t pad_bitfield_5b_5 : 1;
    uint8_t bHasCompilerMessage : 1; // 0x5b
    uint8_t pad_bitfield_5b_7 : 1;
    char pad_5c[0x4];
    FString NodeComment; // 0x60
    int32_t ErrorType; // 0x70
    char pad_74[0x4];
    FString ErrorMsg; // 0x78
    FGuid NodeGuid; // 0x88
    static UEdGraphNode* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
