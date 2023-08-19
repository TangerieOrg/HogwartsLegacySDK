#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EMailType : uint8_t {
    MAIL_TYPE_LETTER = 0,
    MAIL_TYPE_BULLETIN_BOARD_POST = 1,
    MAIL_TYPE_HOGSMEADE_POST = 2,
    MAIL_TYPE_THIEF_POST = 3,
    MAIL_TYPE_POACHER_POST = 4,
    MAIL_TYPE_SHOP_POST = 5,
    MAIL_TYPE_POSTER = 6,
    MAIL_TYPE_COUNT = 7,
    MAIL_TYPE_MAX = 8,
};
#pragma pack(pop)
