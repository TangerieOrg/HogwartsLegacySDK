#pragma once
#include <cstdint>
#include "UActorComponent.hpp"
#pragma pack(push, 1)
class UMasterTickThrottlerSingletonEditorUpdate : public UActorComponent {
public:
    char pad_c8[0x10];
    static UMasterTickThrottlerSingletonEditorUpdate* StaticClass();
}; // Size: 0xd8
#pragma pack(pop)
