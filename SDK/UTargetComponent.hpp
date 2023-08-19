#pragma once
#include <cstdint>
#include "USceneComponent.hpp"
#pragma pack(push, 1)
class UTargetComponent : public USceneComponent {
public:
    static UTargetComponent* StaticClass();
    void SetSendTargetPriority(uint8_t InPriority);
    void SetEnabled(bool bInEnabled);
    bool IsEnabled();
    uint8_t GetSendTargetPriority();
}; // Size: 0x220
#pragma pack(pop)
