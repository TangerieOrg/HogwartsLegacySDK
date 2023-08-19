#pragma once
#include <cstdint>
#include "FInputFilter.hpp"
#include "FName_GameLogicExpression.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UWatcherRecord : public UObject {
public:
    TArray<FInputFilter> LogicFilters; // 0x28
    bool bRequireControlReleaseBeforeActionPressed; // 0x38
    bool bFilterMustBeTrueAtActionPressed; // 0x39
    bool bFilterMustBeTrueAtActionReleased; // 0x3a
    bool bActionPressedMustHaveBeenSentToSendActionReleased; // 0x3b
    bool bRequireRepressAfterCancel; // 0x3c
    bool bExecuteWhenPaused; // 0x3d
    bool bModifierRequired; // 0x3e
    char pad_3f[0x1];
    FName_GameLogicExpression ModifierName; // 0x40
    bool bRequiredModifierValue; // 0x48
    char pad_49[0xf];
    static UWatcherRecord* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
