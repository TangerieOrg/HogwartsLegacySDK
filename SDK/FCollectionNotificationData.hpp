#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FCollectionNotificationData {
    FName CollectionID; // 0x0
    FName CollectionCategory; // 0x8
}; // Size: 0x10
#pragma pack(pop)
