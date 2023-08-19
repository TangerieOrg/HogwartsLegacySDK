#pragma once
#include <cstdint>
#include "UAnimationSharingManager.hpp"
class UWorld;
class UClass;
#pragma pack(push, 1)
class UPhxAnimationSharingManager : public UAnimationSharingManager {
public:
    char pad_c0[0x18];
    static UPhxAnimationSharingManager* StaticClass();
    static UPhxAnimationSharingManager* GetPhxAnimationSharingManager(UWorld* InWorld, UClass* InClass);
}; // Size: 0xd8
#pragma pack(pop)
