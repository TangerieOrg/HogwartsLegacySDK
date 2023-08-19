#pragma once
#include <cstdint>
#include "UObject.hpp"
class AUMGInputManager;
#pragma pack(push, 1)
class UUMGFocusManager : public UObject {
public:
    AUMGInputManager* UMGInputManager; // 0x28
    static UUMGFocusManager* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
