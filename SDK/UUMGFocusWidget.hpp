#pragma once
#include <cstdint>
#include "EInputEvent.hpp"
#include "EUMGInputAction.hpp"
#include "EUMGInputAxis.hpp"
#include "FUMGConsolidatedAxisInputData.hpp"
#include "UUserWidget.hpp"
#pragma pack(push, 1)
class UUMGFocusWidget : public UUserWidget {
public:
    int32_t FocusInputPriority; // 0x268
    char pad_26c[0x4];
    TArray<EUMGInputAction> FocusInputActions; // 0x270
    TArray<EUMGInputAxis> FocusInputAxis; // 0x280
    FUMGConsolidatedAxisInputData ConsolidatedAxisInputData; // 0x290
    bool bHasFocus; // 0x2c0
    char pad_2c1[0x7];
    static UUMGFocusWidget* StaticClass();
    void UnregisterUMGInputAxis(EUMGInputAxis InputAxis);
    void UnregisterUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent);
    void UnregisterAllUMGInputAxis();
    void UnregisterAllUMGInputActions(EInputEvent InputEvent);
    void RegisterUMGInputAxis(EUMGInputAxis InputAxis);
    void RegisterUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent);
    void RegisterAllUMGInputAxis();
    void RegisterAllUMGInputActions(EInputEvent InputEvent);
    void LoseFocus();
    bool HasFocus();
    bool BlueprintOnUMGInputAction(EUMGInputAction InputAction, EInputEvent InputEvent);
    void BlueprintFocusLost();
    void BlueprintFocusAcquired();
    void BlueprintConsolidatedUMGInputAxis(FUMGConsolidatedAxisInputData& AxisInputData);
    void AcquireFocus();
}; // Size: 0x2c8
#pragma pack(pop)
