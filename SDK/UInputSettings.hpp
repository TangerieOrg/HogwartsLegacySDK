#pragma once
#include <cstdint>
#include "EMouseCaptureMode.hpp"
#include "EMouseLockMode.hpp"
#include "FCollidingGroupsDefinition.hpp"
#include "FInputActionKeyMapping.hpp"
#include "FInputActionSpeechMapping.hpp"
#include "FInputAxisConfigEntry.hpp"
#include "FInputAxisKeyMapping.hpp"
#include "FInputGroupHeader.hpp"
#include "FKey.hpp"
#include "FSoftObjectPath.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UInputSettings : public UObject {
public:
    TArray<FInputAxisConfigEntry> AxisConfig; // 0x28
    uint8_t bAltEnterTogglesFullscreen : 1; // 0x38
    uint8_t bF11TogglesFullscreen : 1; // 0x38
    uint8_t bUseMouseForTouch : 1; // 0x38
    uint8_t bEnableMouseSmoothing : 1; // 0x38
    uint8_t bEnableFOVScaling : 1; // 0x38
    uint8_t bCaptureMouseOnLaunch : 1; // 0x38
    uint8_t bDefaultViewportMouseLock : 1; // 0x38
    uint8_t bAlwaysShowTouchInterface : 1; // 0x38
    uint8_t bShowConsoleOnFourFingerTap : 1; // 0x39
    uint8_t bEnableGestureRecognizer : 1; // 0x39
    uint8_t pad_bitfield_39_2 : 6;
    bool bUseAutocorrect; // 0x3a
    char pad_3b[0x5];
    TArray<FString> ExcludedAutocorrectOS; // 0x40
    TArray<FString> ExcludedAutocorrectCultures; // 0x50
    TArray<FString> ExcludedAutocorrectDeviceModels; // 0x60
    EMouseCaptureMode DefaultViewportMouseCaptureMode; // 0x70
    EMouseLockMode DefaultViewportMouseLockMode; // 0x71
    char pad_72[0x2];
    float FOVScale; // 0x74
    float DoubleClickTime; // 0x78
    char pad_7c[0x4];
    TArray<FInputActionKeyMapping> ActionMappings; // 0x80
    TArray<FInputAxisKeyMapping> AxisMappings; // 0x90
    TArray<FInputActionSpeechMapping> SpeechMappings; // 0xa0
    TArray<FCollidingGroupsDefinition> CollidingGroupsDefinitions; // 0xb0
    TArray<FInputGroupHeader> MappingGroupHeaders; // 0xc0
    char pad_d0[0x50];
    FSoftObjectPath DefaultTouchInterface; // 0x120
    FKey ConsoleKey; // 0x138
    TArray<FKey> ConsoleKeys; // 0x150
    static UInputSettings* StaticClass();
    void SaveKeyMappings();
    void RemoveAxisMapping(FInputAxisKeyMapping& KeyMapping, bool bForceRebuildKeymaps);
    void RemoveActionMapping(FInputActionKeyMapping& KeyMapping, bool bForceRebuildKeymaps);
    bool IsActionCollidingWithAxis(FInputActionKeyMapping& ActionMapping, FInputAxisKeyMapping& AxisMapping);
    static UInputSettings* GetInputSettings();
    void GetAxisNames(TArray<FName>& AxisNames);
    void GetAxisMappingCollisions(FInputAxisKeyMapping& NewAxisMapping, TArray<FInputActionKeyMapping>& OutCollidingActionMappings, TArray<FInputAxisKeyMapping>& OutCollidingAxisMappings);
    void GetAxisMappingByName(FName InAxisName, TArray<FInputAxisKeyMapping>& OutMappings);
    void GetActionNames(TArray<FName>& ActionNames);
    void GetActionMappingCollisions(FInputActionKeyMapping& NewActionMapping, TArray<FInputActionKeyMapping>& OutCollidingActionMappings, TArray<FInputAxisKeyMapping>& OutCollidingAxisMappings);
    void GetActionMappingByName(FName InActionName, TArray<FInputActionKeyMapping>& OutMappings);
    void ForceRebuildKeymaps();
    void AddAxisMapping(FInputAxisKeyMapping& KeyMapping, bool bForceRebuildKeymaps);
    void AddActionMapping(FInputActionKeyMapping& KeyMapping, bool bForceRebuildKeymaps);
}; // Size: 0x160
#pragma pack(pop)
