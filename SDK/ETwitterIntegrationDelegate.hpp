#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum ETwitterIntegrationDelegate {
    TID_AuthorizeComplete = 0,
    TID_TweetUIComplete = 1,
    TID_RequestComplete = 2,
    TID_MAX = 3,
};
#pragma pack(pop)
