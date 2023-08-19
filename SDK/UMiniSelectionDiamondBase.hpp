#pragma once
#include <cstdint>
#include "UUserWidget.hpp"
#pragma pack(push, 1)
class UMiniSelectionDiamondBase : public UUserWidget {
public:
    static UMiniSelectionDiamondBase* StaticClass();
    void SetState(bool IsActive);
    void OnSetState(int32_t NewState);
}; // Size: 0x268
#pragma pack(pop)
