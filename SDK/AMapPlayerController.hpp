#pragma once
#include <cstdint>
#include "APlayerController.hpp"
class AUMGInputManager;
#pragma pack(push, 1)
class AMapPlayerController : public APlayerController {
public:
    AUMGInputManager* UMGInputManager; // 0x5b0
    static AMapPlayerController* StaticClass();
}; // Size: 0x5b8
#pragma pack(pop)
