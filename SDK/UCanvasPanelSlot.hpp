#pragma once
#include <cstdint>
#include "FAnchorData.hpp"
#include "FAnchors.hpp"
#include "FMargin.hpp"
#include "FVector2D.hpp"
#include "UPanelSlot.hpp"
#pragma pack(push, 1)
class UCanvasPanelSlot : public UPanelSlot {
public:
    FAnchorData LayoutData; // 0x38
    bool bAutoSize; // 0x60
    char pad_61[0x3];
    int32_t ZOrder; // 0x64
    char pad_68[0x8];
    static UCanvasPanelSlot* StaticClass();
    void SetZOrder(int32_t InZOrder);
    void SetSize(FVector2D InSize);
    void SetPosition(FVector2D InPosition);
    void SetOffsets(FMargin InOffset);
    void SetMinimum(FVector2D InMinimumAnchors);
    void SetMaximum(FVector2D InMaximumAnchors);
    void SetLayout(FAnchorData& InLayoutData);
    void SetAutoSize(bool InbAutoSize);
    void SetAnchors(FAnchors InAnchors);
    void SetAlignment(FVector2D InAlignment);
    int32_t GetZOrder();
    FVector2D GetSize();
    FVector2D GetPosition();
    FMargin GetOffsets();
    FAnchorData GetLayout();
    bool GetAutoSize();
    FAnchors GetAnchors();
    FVector2D GetAlignment();
}; // Size: 0x70
#pragma pack(pop)
