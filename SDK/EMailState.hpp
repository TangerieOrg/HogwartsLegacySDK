#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EMailState {
    MAIL_STATE_PENDING = 0,
    MAIL_STATE_ACTIVE = 1,
    MAIL_STATE_ARCHIVED = 2,
    MAIL_STATE_DELETED_BUT_NEEDED_BY_MISSION = 3,
    MAIL_STATE_MAX = 4,
};
#pragma pack(pop)
