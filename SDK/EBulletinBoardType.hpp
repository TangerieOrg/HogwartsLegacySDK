#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EBulletinBoardType : uint8_t {
    BULLETIN_BOARD_TYPE_HOGWARTS = 0,
    BULLETIN_BOARD_TYPE_HOGSMEADE = 1,
    BULLETIN_BOARD_TYPE_ROOKWOOD_THIEF = 2,
    BULLETIN_BOARD_TYPE_ROOKWOOD_POACHER = 3,
    BULLETIN_BOARD_TYPE_MAX = 4,
};
#pragma pack(pop)
