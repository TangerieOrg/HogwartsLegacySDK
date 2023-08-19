#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EConversationCameraFilterType : uint8_t {
    Disable = 0,
    FirstConversationCameraShot = 1,
    LastConversationCameraShot = 2,
    EndingCameraShotWithChoices = 3,
    EndingCameraShotBeforeEmbedded = 4,
    CameraShotDuringPause = 5,
    AllCameraShots = 6,
    EConversationCameraFilterType_MAX = 7,
};
#pragma pack(pop)
