#pragma once
#include <cstdint>
#include "FSceneRigSocketEntry.hpp"
#include "USceneRigProvider.hpp"
#pragma pack(push, 1)
class USceneRig_BySocket : public USceneRigProvider {
public:
    TArray<FSceneRigSocketEntry> SocketEntries; // 0x28
    static USceneRig_BySocket* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
