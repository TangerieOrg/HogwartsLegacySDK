#pragma once
#include <cstdint>
#include "ALevelScriptActor.hpp"
#pragma pack(push, 1)
class AFrontendMapScript : public ALevelScriptActor {
public:
    static AFrontendMapScript* StaticClass();
    void GoToMenu();
    void GoToIntro();
}; // Size: 0x250
#pragma pack(pop)
