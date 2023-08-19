#pragma once
#include <cstdint>
#include "FWorldFXFullTracker.hpp"
#include "USceneComponent.hpp"
#pragma pack(push, 1)
class UWorldFXComponentBase : public USceneComponent {
public:
    FWorldFXFullTracker Tracker; // 0x220
    char pad_238[0x8];
    static UWorldFXComponentBase* StaticClass();
    void ForceRefreshPreview();
}; // Size: 0x240
#pragma pack(pop)
