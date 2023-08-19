#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UInterface.hpp"
class UPrimitiveComponent;
#pragma pack(push, 1)
class ULockInterface : public UInterface {
public:
    static ULockInterface* StaticClass();
    void OnUnlocked();
    void OnLocked();
    void OnFailedToUnlock();
    bool CanUnlock(UPrimitiveComponent* Comp, FVector Location);
}; // Size: 0x28
#pragma pack(pop)
