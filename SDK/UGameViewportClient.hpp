#pragma once
#include <cstdint>
#include "FDebugDisplayProperty.hpp"
#include "UScriptViewportClient.hpp"
class UConsole;
class UWorld;
class UGameInstance;
#pragma pack(push, 1)
class UGameViewportClient : public UScriptViewportClient {
public:
    char pad_38[0x8];
    UConsole* ViewportConsole; // 0x40
    TArray<FDebugDisplayProperty> DebugProperties; // 0x48
    char pad_58[0x10];
    int32_t MaxSplitscreenPlayers; // 0x68
    char pad_6c[0xc];
    UWorld* World; // 0x78
    UGameInstance* GameInstance; // 0x80
    char pad_88[0x2d8];
    static UGameViewportClient* StaticClass();
    void SSSwapControllers();
    void ShowTitleSafeArea();
    void SetConsoleTarget(int32_t PlayerIndex);
}; // Size: 0x360
#pragma pack(pop)
