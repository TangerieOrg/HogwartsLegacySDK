#pragma once
#include <cstdint>
#include "FBlueprintInputActionDelegateBinding.hpp"
#include "FSplitWindow.hpp"
class UWatcherRecord;
#pragma pack(push, 1)
struct FCustomBlueprintInputDelegateBinding : public FBlueprintInputActionDelegateBinding {
    UWatcherRecord* WatcherRecord; // 0x18
    FSplitWindow SplitWindow; // 0x20
    bool bUsesGameLogic; // 0x28
    char pad_29[0x7];
}; // Size: 0x30
#pragma pack(pop)
