#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class ESaveBlockReason : uint8_t {
    BLOCK_SAVE_UNKNOWN = 0,
    BLOCK_SAVE_PERFORMTASK = 1,
    BLOCK_SAVE_COMBAT = 2,
    BLOCK_SAVE_TUTORIAL = 3,
    BLOCK_SAVE_CINEMATIC = 4,
    BLOCK_SAVE_CONVERSATION = 5,
    BLOCK_SAVE_MOUNT = 6,
    BLOCK_SAVE_EXCLUSIVE_MISSION = 7,
    BLOCK_SAVE_DUNGEON = 8,
    BLOCK_SAVE_MAX = 9,
};
#pragma pack(pop)
