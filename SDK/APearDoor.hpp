#pragma once
#include <cstdint>
#include "ADoor.hpp"
class ULockableComponent;
class UObject;
#pragma pack(push, 1)
class APearDoor : public ADoor {
public:
    char pad_530[0x8];
    ULockableComponent* LockableComponent; // 0x538
    static APearDoor* StaticClass();
    void TickleThePear(UObject* Caller);
}; // Size: 0x540
#pragma pack(pop)
