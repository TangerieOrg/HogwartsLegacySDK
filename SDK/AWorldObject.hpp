#pragma once
#include <cstdint>
#include "AInteractiveObjectActor.hpp"
#include "EInteractiveState.hpp"
#pragma pack(push, 1)
class AWorldObject : public AInteractiveObjectActor {
public:
    char pad_298[0x18];
    static AWorldObject* StaticClass();
    bool TryCreateBeacon();
    void OnAboutToSaveGame();
    void NotifyCurrentState(EInteractiveState CurrentObjectState);
}; // Size: 0x2b0
#pragma pack(pop)
