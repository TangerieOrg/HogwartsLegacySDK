#pragma once
#include <cstdint>
#include "AVolume.hpp"
#include "AkAcousticPortalState.hpp"
class UAkPortalComponent;
#pragma pack(push, 1)
class AAkAcousticPortal : public AVolume {
public:
    UAkPortalComponent* Portal; // 0x280
    AkAcousticPortalState InitialState; // 0x288
    bool bRequiresStateMigration; // 0x289
    char pad_28a[0x6];
    static AAkAcousticPortal* StaticClass();
    void OpenPortal();
    AkAcousticPortalState GetCurrentState();
    void ClosePortal();
}; // Size: 0x290
#pragma pack(pop)
