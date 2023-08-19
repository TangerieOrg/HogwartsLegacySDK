#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EActor_LoadDBProcessingType : uint8_t {
    LoadProcessingType_None = 0,
    LoadProcessingType_NPC = 1,
    LoadProcessingType_ObjectState = 2,
    LoadProcessingType_MAX = 3,
};
#pragma pack(pop)
