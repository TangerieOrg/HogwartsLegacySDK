#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum SocialCapitalChangeReasons : uint8_t {
    SOCAP_CHANGE_DEBUG = 0,
    SOCAP_CHANGE_MISSION = 1,
    SOCAP_CHANGE_KNOWLEDGE = 2,
    SOCAP_CHANGE_SOCIALACTION = 3,
    SOCAP_CHANGE_SOCIALSTATUS = 4,
    SOCAP_CHANGE_CONVERSATION = 5,
    SOCAP_CHANGE_FACTIONSTATUS = 6,
    SOCAP_CHANGE_COUNT = 7,
    SOCAP_CHANGE_MAX = 8,
};
#pragma pack(pop)
