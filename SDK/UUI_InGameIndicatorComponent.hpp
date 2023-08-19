#pragma once
#include <cstdint>
#include "UStaticMeshComponent.hpp"
#pragma pack(push, 1)
class UUI_InGameIndicatorComponent : public UStaticMeshComponent {
public:
    int32_t PointerIndex; // 0x510
    bool ShowPointer; // 0x514
    char pad_515[0xb];
    static UUI_InGameIndicatorComponent* StaticClass();
    void SetShowPointer(bool Show);
    bool GetShowPointer();
}; // Size: 0x520
#pragma pack(pop)
