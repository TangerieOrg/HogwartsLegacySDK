#pragma once
#include <cstdint>
#include "UObject.hpp"
class UUDSManager;
class UUDSActivityManager;
#pragma pack(push, 1)
class UUDSFieldGuideManager : public UObject {
public:
    UUDSManager* UDSManager; // 0x28
    UUDSActivityManager* UDSActivityManager; // 0x30
    static UUDSFieldGuideManager* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
