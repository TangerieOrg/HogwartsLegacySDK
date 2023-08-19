#pragma once
#include <cstdint>
#include "UDebugWindow.hpp"
#pragma pack(push, 1)
class UDebugConversationWindow : public UDebugWindow {
public:
    char pad_40[0x8];
    static UDebugConversationWindow* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
