#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EFriendInvitationState : uint8_t {
    FRIEND_INVITE_STATE_OPEN = 0,
    FRIEND_INVITE_STATE_ACCEPTED = 1,
    FRIEND_INVITE_STATE_CANCELLED = 2,
    FRIEND_INVITE_STATE_DECLINED = 3,
    FRIEND_INVITE_STATE_MAX = 4,
};
#pragma pack(pop)
