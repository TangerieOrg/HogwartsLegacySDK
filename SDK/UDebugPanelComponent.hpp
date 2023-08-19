#pragma once
#include <cstdint>
#include "EDebugPanelControlID.hpp"
#include "FLinearColor.hpp"
#include "FSlateFontInfo.hpp"
#include "FVector2D.hpp"
#include "UActorComponent.hpp"
class UDebugPanel;
class UWorld;
#pragma pack(push, 1)
class UDebugPanelComponent : public UActorComponent {
public:
    char pad_c8[0x50];
    UDebugPanel* Panel; // 0x118
    static UDebugPanelComponent* StaticClass();
    void ShowPanel(bool Show);
    bool SetVisible(EDebugPanelControlID controlID, bool Visible);
    bool SetupShadow(EDebugPanelControlID controlID, FVector2D ShadowOffset, FLinearColor shadowColor);
    bool SetTextAndColor(EDebugPanelControlID controlID, FString Text, FLinearColor Color);
    bool SetText(EDebugPanelControlID controlID, FString Text);
    bool SetFont(EDebugPanelControlID controlID, FSlateFontInfo Font);
    bool SetColor(EDebugPanelControlID controlID, FLinearColor Color);
    bool PanelVisible();
    bool IsMultilineText(EDebugPanelControlID controlID);
    void HidePanel();
    bool EnableMultilineText(EDebugPanelControlID controlID, int32_t lineLimit);
    bool DisableMultilineText(EDebugPanelControlID controlID);
    bool CreateUnique(UWorld* onlyForWorld);
    bool CreateShared(FName ID, UWorld* onlyForWorld);
    bool Created();
    bool ClearText(EDebugPanelControlID controlID);
    bool ClearScrollingText();
    bool AppendTextLine(FString Text);
}; // Size: 0x120
#pragma pack(pop)
